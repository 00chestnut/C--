#include <iostream>
#include <cmath> // dla funkcji sqrt i fabs

class Punkt {
private:
    float x, y;

public:
    // Konstruktor domyślny
    Punkt() : x(0), y(0) {}

    // Konstruktor parametryczny z inicjalizacją listową
    Punkt(float xVal, float yVal) : x{xVal}, y{yVal} {}

    // Konstruktor kopiujący
    Punkt(const Punkt& other) : x{other.x}, y{other.y} {}

    // Funkcja do odbicia względem osi X
    void odbijX() {
        y = -y;
    }

    // Funkcja do odbicia względem osi Y
    void odbijY() {
        x = -x;
    }

    // Funkcja do przesunięcia o wektor (dx, dy)
    void przesun(float dx, float dy) {
        x += dx;
        y += dy;
    }// Funkcja do liczenia odległości punktu od prostej Ax + By + C = 0
    float odlegloscOdProstej(float A, float B, float C) const {
        return std::fabs(A * x + B * y + C) / std::sqrt(A * A + B * B);
    }

    // Funkcja do odbicia względem punktu (px, py)
    void symetriaPunkt(float px, float py) {
        x = 2 * px - x;
        y = 2 * py - y;
    }

    // Funkcja do wyświetlania współrzędnych punktu
    void wyswietl() const {
        std::cout << "Punkt(" << x << ", " << y << ")" << std::endl;
    }

    // Metoda dostępu do współrzędnych (do użycia w funkcji zewnętrznej)
    float getX() const { return x; }
    float getY() const { return y; }
};

// Funkcja zewnętrzna licząca odległość dwóch punktów
float odlegloscPunktow(const Punkt& p1, const Punkt& p2) {
    return std::sqrt(std::pow(p2.getX() - p1.getX(), 2) + std::pow(p2.getY() - p1.getY(), 2));
}

int main() {
    // Inicjalizacja listowa punktu p1
    Punkt p1{3, 4};
    p1.wyswietl();

    // Konstruktor kopiujący dla punktu p2
    Punkt p2 = p1;
    p2.wyswietl();

    // Testowanie metod klasy Punkt
    p1.przesun(1, -2);
    p1.wyswietl();

    p1.odbijX();
    p1.wyswietl();

    p1.odbijY();
    p1.wyswietl();

    std::cout << "Odległość p1 od prostej 2x + 3y + 1 = 0: " << p1.odlegloscOdProstej(2, 3, 1) << std::endl;

    p1.symetriaPunkt(1, 1);
    p1.wyswietl();

    // Testowanie funkcji zewnętrznej liczącej odległość dwóch punktów
    std::cout << "Odległość między p1 a p2: " << odlegloscPunktow(p1, p2) << std::endl;

    return 0;
}