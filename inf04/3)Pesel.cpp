#include <iostream>
using namespace std;

char plec(string PESEL)
{
    if ((PESEL[10] - '0') % 2 == 0)
    {
        cout << "Nie masz pyntka" << endl;
        return 'K'; // Female
    }
    else
    {
        cout << "Masz pyntko" << endl;
        return 'M'; // Male
    }
};
int control(string PESEL)
{
int S =   ((PESEL[0] - '0')*1)+((PESEL[1] - '0')*3)+((PESEL[2] - '0')*7)+((PESEL[3] - '0')*9)+((PESEL[4] - '0')*1)+((PESEL[5] - '0')*3)+((PESEL[6] - '0')*7)+((PESEL[7] - '0')*9)+((PESEL[8] - '0')*1)+((PESEL[9] - '0')*3);
return S;
}

int main()
{
    string PESEL = "55030101193";
    cout << "\nPodaj PESEL: ";
    // cin >> PESEL;
    cout << endl << "Fakt: " << plec(PESEL) << endl;
    cout << endl << "Fakt: " << control(PESEL) << endl;
    return 0;
}
