#include <iostream>
#include <cmath>

class Point {
private:
    float x, y;

public:
    Point() : x(0), y(0) {} // konstruktor bezparametryczny

    Point(float xVal, float yVal) : x{xVal}, y{yVal} {} // konstruktor parametryczny

    Point(const Point &copied) : x{copied.x}, y{copied.y} {} // konstruktor kopiujący

    void odbijX() { // odbicie względem X
        y = -y;
    }
    void odbijY() { // odbicię względem Y
        x = -x;
    }

    void przesun(float dx, float dy) { // przesunięcie
        x += dx;
        y += dy;
    }

    float odlegloscOdProstej(float A, float B, float C) const { // dystans od prostej
        return std::fabs(A * x + B * y + C) / std::sqrt(A * A + B * B);
    }

    void symetriaPunkt(float px, float py) { // odbicie lustrzane względem podanych koordynat
        x = 2 * px - x;
        y = 2 * py - y;
    }

    void wyswietl() const { // wyświetlanei
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }

    float getX() const { return x; } // getters
    float getY() const { return y; }

    // obliczanie odległości
    static float odlegloscPunktow(const Point& p1, const Point& p2) { // distance between points
        return std::sqrt(std::pow(p2.getX() - p1.getX(), 2) + std::pow(p2.getY() - p1.getY(), 2));
    }
};

int main() {
    // ustalenie wartości p1
    Point p1{3, 4};
    p1.wyswietl(); // (1) p1
    // konstruktor kopiujący w użyciu
    Point p2 = p1;
    p2.wyswietl(); // (2) p2 przyjmuje wartość p1
    // metody klasy
    p1.przesun(1, -2);
    p1.wyswietl(); // (3) p1 przesunięty o podane wartości
    p1.odbijX();
    p1.wyswietl();  // (4) p1 odbity względem X
    p1.odbijY();
    p1.wyswietl(); // (5) p1 odbity względem Y
    std::cout << "Dystans P1 od prostej: " << p1.odlegloscOdProstej(2, 3, 1) << std::endl;
    p1.symetriaPunkt(1, 1);
    p1.wyswietl(); // (6) p1 moved symmetrically to provided coordinate
    // dystans między p1 a p2
    std::cout << "Dystans między P1 a P2: " << Point::odlegloscPunktow(p1, p2) << std::endl;
    return 0;
}