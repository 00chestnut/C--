#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<int> wekt;

int rozmiar;
int liczba1;
int liczba2;
int liczba3;

void wypisz(vector<int> wekt)
{
    for (const int &element : wekt)
    {
        cout << element << " ";
    }
};

void wypelnij(vector<int> wekt)
{
    srand(time(NULL));
    for (int i = 0; i < rozmiar; ++i)
    {
        wekt.push_back(rand() % 60 + 21);
    }
};
void wypisz3(vector <int> wekt)
{
for (const int &element : wekt)
    {
       if(element%3==0) 
       {cout << element << " ";};
    }
};
int main()
{
    cout << "Podaj rozmiar wektoru\n ";
    cin >> rozmiar;
    wypelnij(wekt);
    cout << "Zawartość wektoru:\n ";
    wypisz3(wekt);
    cout << "Podaj 3 liczby do wektoru:\n ";
    cin >> liczba1;
    cin >> liczba2;
    cin >> liczba3;
    wekt.insert(wekt.begin() + 1, liczba3);
    wekt.insert(wekt.begin() + 1, liczba2);
    wekt.insert(wekt.begin() + 1, liczba1);
    wekt.push_back(liczba1);
    wekt.push_back(liczba2);
    wekt.push_back(liczba3);
    wekt.erase(wekt.begin() + 3);
    cout << "Liczby podzielne przez 3:\n ";
    wypisz3(wekt);

    return 0;
}