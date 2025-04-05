#include <iostream>
#include <cmath>
using namespace std;

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

double volumeAndLateralSurfaceAreaByValue(double radius) {
    double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
    double lateralSurfaceArea = 4 * M_PI * pow(radius, 2);
    cout << "Volume: " << volume << endl;
    cout << "Lateral Surface Area: " << lateralSurfaceArea << endl;
    return volume;
}

void volumeAndLateralSurfaceAreaByReference(double radius, double &volume, double &lateralSurfaceArea) {
    volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
    lateralSurfaceArea = 4 * M_PI * pow(radius, 2);
    cout << "Volume: " << volume << endl;
    cout << "Lateral Surface Area: " << lateralSurfaceArea << endl;
}

void volumeAndLateralSurfaceAreaByConstReference(const double &radius, double &volume, double &lateralSurfaceArea) {
    volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
    lateralSurfaceArea = 4 * M_PI * pow(radius, 2);
    cout << "Volume: " << volume << endl;
    cout << "Lateral Surface Area: " << lateralSurfaceArea << endl;
}

void volumeAndLateralSurfaceAreaByPointers(const double *radius, double *volume, double *lateralSurfaceArea) {
    *volume = (4.0 / 3.0) * M_PI * pow(*radius, 3);
    *lateralSurfaceArea = 4 * M_PI * pow(*radius, 2);
    cout << "Volume: " << *volume << endl;
    cout << "Lateral Surface Area: " << *lateralSurfaceArea << endl;
}

int main() {
    double radius;

    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    volumeAndLateralSurfaceAreaByValue(radius);

    double volumeII, lateralSurfaceAreaII;
    volumeAndLateralSurfaceAreaByReference(radius, volumeII, lateralSurfaceAreaII);

    double volumeIII, lateralSurfaceAreaIII;
    volumeAndLateralSurfaceAreaByConstReference(radius, volumeIII, lateralSurfaceAreaIII);

    double volumeIV, lateralSurfaceAreaIV;
    volumeAndLateralSurfaceAreaByPointers(&radius, &volumeIV, &lateralSurfaceAreaIV);

    return 0;
}
