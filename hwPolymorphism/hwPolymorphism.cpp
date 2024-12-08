#include <iostream>
using namespace std;

class Transport {
protected:
    string name;
    double weight;
    double fuel;
public:
    Transport() = default;
    Transport(string name, double weight, double fuel) {
        this->name = name;
        this->weight = weight;
        this->fuel = fuel;
    }
    void setAll(string name, double weight, double fuel, int pas) {
        this->name = name;
        this->weight = weight;
        this->fuel = fuel;
    }
    virtual void costDelivery() {
        cout << "Nothing!" << endl;
    }
};

class Car : public Transport {
    int pas;
public:
    Car() = default;
    Car(string name, double weight, double fuel, int pas) : Transport(name, weight, fuel) {
        this->pas = pas;
    }
    void setAll(string name, double weight, double fuel, int pas) {
        this->name = name;
        this->weight = weight;
        this->fuel = fuel;
        this->pas = pas;
    }
    void costDelivery() {
        cout << "Delivery = 200$";
    }
};

class Airplane : public Transport {
    int pas;
public:
    Airplane() = default;
    Airplane(string name, double weight, double fuel, int pas) : Transport(name, weight, fuel) {
        this->pas = pas;
    }
    void setAll(string name, double weight, double fuel, int pas) {
        this->name = name;
        this->weight = weight;
        this->fuel = fuel;
        this->pas = pas;
    }
    void costDelivery() {
        cout << "Delivery = 7000$";
    }
};

class waterShip : public Transport {
    int pas;
public:
    waterShip() = default;
    waterShip(string name, double weight, double fuel, int pas) : Transport(name, weight, fuel) {
        this->pas = pas;
    }
    void setAll(string name, double weight, double fuel, int pas) {
        this->name = name;
        this->weight = weight;
        this->fuel = fuel;
        this->pas = pas;
    }
    void costDelivery() {
        cout << "Delivery = 10000$";
    }
};

class Truck : public Transport {
    int pas;
public:
    Truck() = default;
    Truck(string name, double weight, double fuel, int pas) : Transport(name, weight, fuel) {
        this->pas = pas;
    }
    void setAll(string name, double weight, double fuel, int pas) {
        this->name = name;
        this->weight = weight;
        this->fuel = fuel;
        this->pas = pas;
    }
    void costDelivery() {
        cout << "Delivery = 300$";
    }
};

int main()
{
    Transport* transport = nullptr;
    cout << "Car - 1" << endl << "Airplane - 2" << endl << "Ship - 3" << endl << "Truck - 4" << endl;
    int choise = 0;
    cin >> choise;
    switch (choise)
    {
    case(1):
    {
        transport = new Car;
        transport->setAll("Toyota", 600, 50, 4);
        break;
    }
    case(2):
    {
        transport = new Airplane;
        transport->setAll("Boing", 1000, 1000, 35);
        break;
    }
    case(3):
    {
        transport = new waterShip;
        transport->setAll("Lainer", 4000, 3000, 635);
        break;
    }
    case(4):
    {
        transport = new Truck;
        transport->setAll("Hyundai", 300, 100, 2);
        break;
    }
    }
    transport->costDelivery();

    delete transport; 
}
