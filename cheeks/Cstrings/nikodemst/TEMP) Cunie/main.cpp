#include <iostream>
using namespace std;

union Ocena                                 // Definicja C-unii o nazwie Ocena
{
short ocena_c;                              // ocena całkowita, np. 3
float ocena_r;                              // ocena z połówkami, np. 3.5
};

int main() 
{
Ocena ocena = {ocena.ocena_c = 4};          // Deklaracja zmiennej ocena połączona z inicjalizacją wartością 4 jej elementu członkowskiego ocena_c
cout << sizeof(ocena) << endl;              // Rozmiar unii (4)
cout << sizeof(ocena.ocena_c) << endl;      // Rozmiar elementu członkowskiego ocena_c (2)
cout << ocena.ocena_c << endl;              // Wyświetlenie wartości elementu członkowskiego ocena_c (4)
ocena.ocena_r = 3.5;                        // Nadanie wartości elementowi członkowskiemu ocena_r
cout << sizeof(ocena) << endl;              // (4)
cout << sizeof(ocena.ocena_r) << endl;      // (4)
cout << ocena.ocena_r << endl;              // Wyświetlenie wartości elementu członkowskiego ocena_r (3.5)
cout<<ocena.ocena_c;                        //0 to pole przyjmuje wartość 0 bo wstawiłem do innego. W strukturze miałbym tą wartość, ale struktura zajmuje więcej pamięci
return 0;
}