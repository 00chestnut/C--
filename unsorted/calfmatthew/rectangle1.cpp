#include <iostream>
using namespace std;

class Rectangle {
private:
    float width, height;
    static int count; // statyczna wartość do zliczania obiektów

public:
    // Konstruktor bezparametrowy
    Rectangle() : width(1.0), height(1.0) {
        count++;
    }

    // Konstruktor parametryczny z delegowaniem do konstruktora bezparametrowego
    Rectangle(float w, float h) : Rectangle() { // Delegacja do konstruktora bezparametrowego
        width = w; // Ustawienie szerokości
        height = h; // Ustawienie wysokości
    }

    // Konstruktor kopiujący
    Rectangle(const Rectangle &rect) : width(rect.width), height(rect.height) {
        count++;
    }

    // Destruktor
    ~Rectangle() {
        count--;
    }

    // Gettery
    float getWidth() const { return width; }
    float getHeight() const { return height; }

    // Settery
    void setWidth(float w) { width = w; }
    void setHeight(float h) { height = h; }

    // Statyczny getter
    static int getCount() { return count; }

    // Metoda do wyświetlania prostokąta
    void display() const {
        cout << "Rectangle(width: " << width << ", height: " << height << ")" << endl;
    }

    // Metoda do obliczania pola prostokąta
    float area() const {
        return width * height;
    }
};

// Inicjalizacja statycznej zmiennej count
int Rectangle::count = 0;

int main() {
    Rectangle r1; // Konstruktor bezparametrowy
    r1.display(); // Wyświetlenie r1

    Rectangle r2(3.0f, 4.0f); // Konstruktor parametryczny
    r2.display(); // Wyświetlenie r2

    Rectangle r3 = r2; // Konstruktor kopiujący
    r3.display(); // Wyświetlenie r3

    cout << "Liczba prostokątów: " << Rectangle::getCount() << endl; // Wyświetlenie liczby prostokątów
    cout << "Pole r2: " << r2.area() << endl; // Wyświetlenie pola r2

    return 0;
}