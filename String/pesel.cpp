#include <iostream>
using namespace std;

/*
nazwa funkcji: plec
opis funkcji: sprawdzana jest dziesiąta cyfra PESElu, dla wartości parzystych oznacza płeć żeńską, dla nieparzystych męską
parametry: napis-PESEL
zwracany typ i opis: char 'K' - kobieta lub 'M'-mężczyzna
autor: <numer zdającego >numery to były w ałszwic

*/
char plec(string PESEL)
{
    if ((PESEL[9]-'0') % 2 == 0)
    {
        return 'K';
    }
    else
    {
        return 'M';
    }
}

bool sumaKontrolna(string PESEL)
{
    unsigned int S = 0, M, R;
    S = (PESEL[0]-'0') + (PESEL[1]-'0') * 2 + (PESEL[2]-'0') * 7 + (PESEL[3]-'0') * 9 + (PESEL[4]-'0') + (PESEL[5]-'0') * 3 + (PESEL[6]-'0') * 7 + (PESEL[7]-'0') * 9 + (PESEL[8]-'0') + (PESEL[9]-'0') * 3;
    cout << "S " << S << " modulo |" << S % 10 << endl;
    M = S % 10;
    if (M == 0)
    {
        R = 0;
    }
    else
    {
        R = 10 - M;
    }
    if (R == (PESEL[10]-'0'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool wiekznajdz(string pesel)
{
    if (pesel[2] == '1' || pesel[2] == '0')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string PESEL = "55230101193";

   
        cout << "Podaj swoj PESEL\n";

        cin >> PESEL;

   
    if (plec(PESEL) == 'K')
    {
        cout << "Jestes kobieta" << endl;
    }
    else if (plec(PESEL) == 'M')
    {
        cout << "Jestes mezczyzna" << endl;
    }
    if (sumaKontrolna(PESEL))
    {
        cout << "PESEL zgodnny z suma kontrolna" << endl;
    }
    else
    {
        cout << "PESEL niezgodny z suma kontrolna" << endl;
    }
    if (wiekznajdz(PESEL))
    {
        cout << "urodzony w roku 19" << PESEL[0] << PESEL[1] << endl;
        cout << "miesiąc " << PESEL[2] << PESEL[3] << endl;
        cout << "dnia " << PESEL[4] << PESEL[5] << endl;
    }
    else
    {
        cout << "urodzony w roku 20" << PESEL[0] << PESEL[1] << endl;
        cout << "miesiąc ";
        if (PESEL[2] == '2')
        {
            cout << "0";
        }
        if (PESEL[2] == '3')
        {
            cout << "1";
        }
        cout << PESEL[3] << endl;
        cout << "dnia " << PESEL[4] << PESEL[5] << endl;
    }
    return 0;
}