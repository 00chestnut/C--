#include <iostream>
#include <cstring>
#include<limits>
using namespace std;
int main() 
{
char wersja1[15] {"C++98"};                                                     // Deklaracja zmiennej (C-napisu) wersja1 połączona z jej inicjalizacją
cout << wersja1 << endl;                                                        // Prezentacja wartości zmiennej wersja1 na ekraniei (wypisze sie napis a nie adres napisu)
cout << "Podaj inną wersję, np. C++17: ";
cin >> wersja1;                                                                 // Wprowadzenie wartości zmiennej wersja1 z klawiatury
cout << wersja1 << endl;                                                        // Prezentacja wartości zmiennej wersja1 na ekranie
cout << endl;
char wersja2[15];                                                               // Deklaracja C-napisu wersja2:
cout << "Podaj wersję C#, np. 8.0: ";                                           
cin.ignore( 50,'\n');                                                           // cin.ignore(liczba znaków do zignorowania, na jakim znaku kończyć ignorowanie)
cin >> wersja2;                                                                 // Wprowadzenie wartości zmiennej wersja2 z klawiatury
cout << wersja2 << endl;                                                        // Wyświetlenie wartości zmiennej wersja2 na ekranie
char wersja3[15];                                                               // Deklaracja C-napisu wersja3
cout << "\n";                                                                   
cout << "Podaj alternatywną nazwę Visual C++ 2015 (Visual C++ 14.0): ";         // Opróżnienie strumienia wejściowego   
cin.ignore( numeric_limits<std::streamsize>::max(), '\n');                      // pomija maxymalną dopuszczalną długość cstringa. 
cin.get(wersja3,15);                                                            // Wprowadzenie wartości zmiennej wersja3 z klawiatury (pozwala pobrać napis ze spacjom)
cout << wersja3 << endl;                                                        // Wyświetlenie wartości zmiennej wersja3 na ekranie
cout << "\n \n";
strcpy(wersja1, wersja2);                                                       // Kopiuje wartosc z wersja2 do wersji 1 strcpy(wartosc do ktorej sie kopiuje, wartosc ktora sie kopiuje)
cout << wersja1 << " " << wersja2;                                              // Wypisanie zmiennych wersja1 oraz wersja2
strlen(wersja1);                                                                // Zwraca liczbe znakow dla wersja1
strcmp(wersja1, wersja2);                                                       // Prownouje wersja1 do wersja2, jezeli slowa sa identyczne to wartosc 0, jezeli wersja1 < wersja2
                                                                                // to zwraca -1, a jezeli wersja1 > wersja2 to zwraca 1
strcat(wersja1, wersja2);                                                       // Dodaje wersja2 na koniec napisu wersja1 
strstr(wersja1, wersja2);                                                       // Zwraca wskanizk od pierwszego wystapienia wersja2 w wersja1
//strchar(wersja1, wersja2);                                                    // Sprawdza czy wersja2 jest zawarta w wersja1
return 0;   
}