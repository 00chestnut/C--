#include <iostream>
using namespace std;

// Klasa bazowa dla Grupy B
class BaseB {
private:
    int privateProperty; // Właściwość prywatna

public:
    int publicProperty; // Właściwość publiczna

    // Konstruktor bezparametrowy
    BaseB() : publicProperty(0), privateProperty(0) {}

    // Konstruktor parametryczny
    BaseB(int pubProp, int privProp) : publicProperty(pubProp), privateProperty(privProp) {}

    // Getter dla właściwości prywatnej
    int getPrivateProperty() const {
        return privateProperty;
    }

    // Setter dla właściwości prywatnej
    void setPrivateProperty(int value) {
        privateProperty = value;
    }
};

// Klasa pochodna dla Grupy B
class DerivedB : private BaseB {
public:
    // Konstruktor bezparametrowy
    DerivedB() : BaseB() {}

    // Konstruktor parametryczny
    DerivedB(int pubProp, int privProp) : BaseB(pubProp, privProp) {}

    // Getter dla publicznej właściwości bazowej
    int getPublicPropertyFromBase() const {
        return publicProperty;
    }

    // Setter dla publicznej właściwości bazowej
    void setPublicPropertyFromBase(int value) {
        publicProperty = value;
    }
};

int main() {
    // Obiekt utworzony za pomocą konstruktora parametrycznego
    DerivedB objB(15, 25);
    cout << "Public property: " << objB.getPublicPropertyFromBase() << "\n";

    objB.setPublicPropertyFromBase(35);
    cout << "Updated public property: " << objB.getPublicPropertyFromBase() << "\n";

    // Obiekt utworzony za pomocą konstruktora bezparametrowego
    DerivedB objB2;
    cout << "Default public property: " << objB2.getPublicPropertyFromBase() << "\n";

    return 0;
}