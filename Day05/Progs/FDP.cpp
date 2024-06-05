// Factory Design PAttern

#include <iostream>

using namespace std;

class Toy {
protected:
    string name;
    float price;
public:
    Toy(string name, float price): name(name), price(price) {}
    virtual void prepareParts() = 0;
    virtual void combineParts() = 0;
    virtual void assembleParts() = 0;
    virtual void applyLabel() = 0;
    virtual void showProduct() = 0;
};

class Car: public Toy
{
public:
    Car(string name, float price) : Toy(name, price) {}
    void prepareParts() {
        cout << "Car " << __func__ << endl;
    }
    void combineParts() {
        cout << "Car " << __func__ << endl;
    }
    void assembleParts() {
        cout << "Car " << __func__ << endl;
    }
    void applyLabel() {
        cout << "Car " << __func__ << endl;
    }
    void showProduct() {
        cout << "Car " << __func__ << endl;
    }
};

class Bike: public Toy
{
public:
    Bike(string name, float price) :  Toy(name, price) {}
    void prepareParts() {
        cout << "Bike " << __func__ << endl;
    }
    void combineParts() {
        cout << "Bike " << __func__ << endl;
    }
    void assembleParts() {
        cout << "Bike " << __func__ << endl;
    }
    void applyLabel() {
        cout << "Bike " << __func__ << endl;
    }
    void showProduct() {
        cout << "Bike " << __func__ << endl;
    }
};

class Plane: public Toy
{
public:
    Plane(string name, float price) :  Toy(name, price) {}
    void prepareParts() {
        cout << "Plane " << __func__ << endl;
    }
    void combineParts() {
        cout << "Plane " << __func__ << endl;
    }
    void assembleParts() {
        cout << "Plane " << __func__ << endl;
    }
    void applyLabel() {
        cout << "Plane " << __func__ << endl;
    }
    void showProduct() {
        cout << "Plane " << __func__ << endl;
    }
};

class ToyFactory
{
public:
    static Toy *createToy(int type)
    {
        Toy *toy = nullptr;
        switch (type) {
            case 1:
                toy = new Car("Mercedes", 1000);
                break;
            case 2:
                toy = new Bike("Dukati", 2000);
                break;
            case 3:
                toy = new Plane("Boeing", 3000);
                break;
            default:
                cout << "Invalid type\n";
                break;
        }
        toy->prepareParts();
        toy->combineParts();
        toy->assembleParts();
        toy->applyLabel();
        return toy;
    }
};

int main()
{
    int ttype;
    while(1) {
        cout << "What kind of type do you want? (type 1 for Car, 2 for Bike, 3 for Plane, other to exit): ";
        cin >> ttype;
        cin.ignore(1000, '\n');
        std::cout << "Creating toy of type = " << ttype << endl;
        if (ttype > 3) {
            std::cout << "ttype is invalid. quitting...";
            break;
        }
        Toy *toy = ToyFactory::createToy(ttype);
        if (toy) {
            toy->showProduct();
            // delete toy;
        }
    }
    return 0;
}