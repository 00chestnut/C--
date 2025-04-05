#include <iostream>

// Base class
class Vehicle {
public:
    virtual ~Vehicle() {} // Virtual destructor
    virtual void displayType() const = 0; // Pure virtual function
    virtual void displaySpeed() const = 0; // Pure virtual function
};

// Derived class: Car
class Car : public Vehicle {
private:
    int speed; // Speed of the car
public:
    Car(int s) : speed(s) {}

    void displayType() const override {
        std::cout << "Vehicle Type: Car" << std::endl;
    }

    void displaySpeed() const override {
        std::cout << "Speed: " << speed << " km/h" << std::endl;
    }
};

// Derived class: Bike
class Bike : public Vehicle {
private:
    int speed; // Speed of the bike
public:
    Bike(int s) : speed(s) {}

    void displayType() const override {
        std::cout << "Vehicle Type: Bike" << std::endl;
    }

    void displaySpeed() const override {
        std::cout << "Speed: " << speed << " km/h" << std::endl;
    }
};

int main() {
    // Create raw pointers to manage the Vehicle objects on the heap
    Vehicle* vehicle1 = new Car(120);
    Vehicle* vehicle2 = new Bike(80);

    // Display vehicle types and speeds using dynamic polymorphism
    vehicle1->displayType(); // Calls Car's displayType
    vehicle1->displaySpeed(); // Calls Car's displaySpeed

    vehicle2->displayType(); // Calls Bike's displayType
    vehicle2->displaySpeed(); // Calls Bike's displaySpeed

    // Clean up memory
    delete vehicle1;
    delete vehicle2;

    return 0; // Memory is manually cleaned up
}