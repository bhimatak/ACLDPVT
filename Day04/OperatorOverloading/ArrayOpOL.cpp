#include <iostream>
#include <exception>
using namespace std;

class Array {
private:
    int* data;
    int size;
public:

    static int count;
    Array(int s) : size(s) {
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = 0; // Initialize elements to 0
        }
    }

    void add(int val)
    {
        data[count++] = val;
    }

    void print()
    {
        for(int i=0;i<count;i++)
            cout<<data[i]<<endl;
    }

    // Overloading the subscript operator for read/write access
    int& operator[](int index) {

        if (index < 0 || index >= size) {
            // cout<<"Hello"<<endl;
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }

    // Display function to print the array
    void display() const {
        for (int i = 0; i < size; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }

    // Destructor to release dynamically allocated memory
    ~Array() {
        delete[] data;
    }
};

int Array::count = 0;

int main() {
    
    Array arr(5);
    try{
    // Assume elements are initialized in the array
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    
    std::cout << "Element at index 2: " << arr[2] << std::endl; // Accessing element at index 2
    arr[3] = 101; // Modifying element at index 3
    arr.display(); // Output: Modified array
    arr[5] = 60;
    }
catch (const exception& e){
    std::cout<<e.what()<<endl;
}
    return 0;
}
