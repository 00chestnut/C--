#include <iostream>
#include <cstring>
#include <limits>
using namespace std;

int main()
{
    char wejscie1[77] = {"Ala Ma"};
    char wejscie2[77] = {"Dom Boba"};

    cout << "Wprowadzone : \n";
    cout << " " << wejscie1 << endl;
    cout << " " << wejscie2 << endl;

    char przechowanie1[77];
    char przechowanie2[77];

    strcpy(przechowanie1, wejscie1);
    strtok(przechowanie2, " ");
    size_t rozmiar1 = strlen(przechowanie1);

    strcpy(przechowanie1, wejscie2);
    strtok(przechowanie2, " ");
    size_t rozmiar2 = strlen(przechowanie2);

    char Wyjscie1[12] = {""};
    char Wyjscie2[12] = {""};


    strcat(Wyjscie1, &wejscie2[rozmiar2 + 1]);
    strcat(Wyjscie1, " ");
    strcat(Wyjscie1, &wejscie1[rozmiar1 + 1]);


    strcat(Wyjscie2, przechowanie2);
    strcat(Wyjscie2, " ");
    strcat(Wyjscie2, przechowanie1);

    cout << "Wyjscie: \n";
    cout << "    " << Wyjscie1 << endl;
    cout << "    " << Wyjscie2 << endl;

    return 0;
}