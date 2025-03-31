#include <iostream>
using namespace std;

char plec(string PESEL)
{
    return (PESEL[9] % 2 == 0) ? 'K' : 'M';
}

bool verify(string PESEL)
{
    int S = 0, wagi[] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3};
    for (int i = 0; i < 10; ++i) S += (PESEL[i] - '0') * wagi[i];
    int R = (10 - (S % 10)) % 10;
    return R == (PESEL[10] - '0');
}

void dataUrodzenia(string PESEL)
{
    int year = (PESEL[0] - '0') * 10 + (PESEL[1] - '0');
    int month = (PESEL[2] - '0') * 10 + (PESEL[3] - '0');
    int day = (PESEL[4] - '0') * 10 + (PESEL[5] - '0');

    year += (month > 80) ? 1800 : (month > 20) ? 2000 : 1900;
    month = month % 20;

    cout << "Data urodzenia: " << day << "-" << month << "-" << year << endl;
}

int main()
{
    string PESEL;
    cout << "Podaj swoj PESEL: ";
    cin >> PESEL;

    cout << "Płeć: " <<(plec(PESEL) == 'K' ? "K" : "M") << endl;

    dataUrodzenia(PESEL);

    cout << (verify(PESEL) ? "PESEL zgodny" : "PESEL jest niepoprawny") << endl;

    return 0;
}