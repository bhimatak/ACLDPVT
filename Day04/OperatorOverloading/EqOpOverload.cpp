#include <iostream>
using namespace std;

class Vector {
private:
    int* data;
    int size;
public:
    static int count;
    Vector(int s) : size(s) {
        data = new int[size];
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
    // Copy assignment operator
    void operator=(const Vector& other) {
        if (this != &other) {
            delete[] data; // Release existing resources
            size = other.size;
            data = new int[size];
            for (int i = 0; i < size; ++i) {
                data[i] = other.data[i];
            }
        }
        // return *this;
    }

    // Destructor to release dynamically allocated memory
    ~Vector() {
        delete[] data;
    }

    // Other member functions...

};

int Vector::count=0;

int main() {
    Vector v2(3);
    v2.add(10);
    v2.add(20);
    v2.add(30);
    v2.print();
    Vector v1(3);
    // Assume v2 is another Vector object
    v1 = v2; // Overloaded assignment operator
    v1.print();
    return 0;
}
