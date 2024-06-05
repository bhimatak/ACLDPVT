/*
Create a class template to generate dynamic arrays for different data types
*/

#include <iostream>
#include <cstring>

template <class T>
class DynamicArray {
    int allocated_size;
    int size;
    T *arr;
public:
    DynamicArray(int default_size = 10): allocated_size(default_size) {
        arr = new T[default_size];
        size = 0;
    }
    void push_back(T value) {
        if(size == allocated_size) {
            std::cout << "Overflow occurred.. Existing arr address:" << arr << ". size=" << size << std::endl;
            T *arr2 = new T[allocated_size*2];
            memcpy(arr2, arr, sizeof(T)*allocated_size); //This doesn't work for std::string? WHY?
            allocated_size *= 2;
            delete[] arr;
            arr = arr2;
        }
        arr[size++] = value;
    }
    void display() {
        std::cout << "Array address: " << arr << "\t.. Values: ";
        for(int i=0; i<size; i++) {
            std::cout << arr[i] << " ,";
        }
        std::cout << std::endl;
    }
};

int main()
{
    DynamicArray<int> a(3);
    a.push_back(1);
    a.display();
    a.push_back(2);
    a.display();
    a.push_back(3);
    a.display();
    a.push_back(4);
    a.display();

    DynamicArray<char*> s(3); 

    char s1[] = "one";
    s.push_back(s1);
    s.display();
    s.push_back("two");
    s.display();
    s.push_back("three");
    s.display();
    s.push_back("four");
    s.display();

    return 0;
}