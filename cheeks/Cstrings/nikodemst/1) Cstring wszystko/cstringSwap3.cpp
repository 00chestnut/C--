#include <iostream>
#include <cstring>
#include <limits>
using namespace std;
int main()
{
    char wejscie1[69];
    char wejscie2[69];
    cout << "Podaj frazę dwuwyrazową: ";
    cin.getline(wejscie1, 69);
    cout << "Podaj frazę dwuwyrazową, ponownie: ";
    cin.getline(wejscie2, 69);
    cout << "wejscie: \n";
    cout << " " << wejscie1 << endl;
    cout << " " << wejscie2 << endl;
    char przechowanie1[69];
    char przechowanie2[69];
    strcpy(przechowanie1, wejscie1);
    strtok(przechowanie1, " ");
    size_t rozmiar1 = strlen(przechowanie1);
    strcpy(przechowanie2, wejscie2);
    strtok(przechowanie2, " ");
    size_t rozmiar2 = strlen(przechowanie2);
    char wyjscie1[69] = {""};
    char wyjscie2[69] = {""};
    strcat(wyjscie1, &wejscie2[rozmiar2 + 1]);
    strcat(wyjscie1, " ");
    strcat(wyjscie1, &wejscie1[rozmiar1 + 1]);
    strcat(wyjscie2, przechowanie2);
    strcat(wyjscie2, " ");
    strcat(wyjscie2, przechowanie1);
    cout << "wyjscie: \n";
    cout << " " << wyjscie1 << endl;
    cout << " " << wyjscie2 << endl;
    return 0;
}

