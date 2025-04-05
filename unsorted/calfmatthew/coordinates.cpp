#include <iostream>
#include <cmath>
using namespace std;
class Point
{
private:
    float x, y;
    int static liczbaPunktow;

public:
    Point() : x{0}, y(0)
    {
        liczbaPunktow++;
        cout << "bezparametrowy";
    } // konstruktor bezparametryczny

    Point(float xVal, float yVal) : Point()
    {
        x = xVal;
        y = yVal;
        cout << "parametryczny";
    } // konstruktor parametryczny

    Point(const Point &copied) : x{copied.x}, y{copied.y} {liczbaPunktow++;} // konstruktor kopiujący

    void odbijX()
    { // odbicie względem X
        y = -y;
    }
    void odbijY()
    { // odbicię względem Y
        x = -x;
    }

    void przesun(float dx, float dy)
    { // przesunięcie
        x += dx;
        y += dy;
    }

    float odlegloscOdProstej(float A, float B, float C)
    { // dystans od prostej
        return std::fabs(A * x + B * y + C) / std::sqrt(A * A + B * B);
    }

    void symetriaPunkt(float px, float py)
    { // odbicie lustrzane względem podanych koordynat
        x = 2 * px - x;
        y = 2 * py - y;
    }

    void wyswietl()
    { // wyświetlanei
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }

    float getX() { return x; }; // getters
    float getY() { return y; };
    static int getLiczbaPunktow() { return liczbaPunktow; };
    // obliczanie odległości
    friend float odlegloscPunktow(const Point &p1, const Point &p2);
};
float odlegloscPunktow(const Point &p1, const Point &p2)
{ // distance between points
    return std::sqrt(std::pow(p2.x - p1.x, 2) + std::pow(p2.y - p1.y, 2));
}
int Point::liczbaPunktow = 0;
int main()
{
    // ustalenie wartości p1
    Point p1 {3, 4};
    p1.wyswietl(); // (1) p1
    // konstruktor kopiujący w użyciu niejawnym. Jawnie wygląda tak: Point p2(p1)
    Point p2 = p1;
    p2.wyswietl(); // (2) p2 przyjmuje wartość p1
    // metody klasy
    p1.przesun(1, -2);
    p1.wyswietl(); // (3) p1 przesunięty o podane wartości
    p1.odbijX();
    p1.wyswietl(); // (4) p1 odbity względem X
    p1.odbijY();
    p1.wyswietl(); // (5) p1 odbity względem Y
    std::cout << "Dystans P1 od prostej: " << p1.odlegloscOdProstej(2, 3, 1) << std::endl;
    p1.symetriaPunkt(1, 1);
    p1.wyswietl(); // (6) p1 moved symmetrically to provided coordinate
    // dystans między p1 a p2
    std::cout << "Dystans między P1 a P2: " << odlegloscPunktow(p1, p2) << std::endl
              << Point::getLiczbaPunktow();
    return 0;
}