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
    if (PESEL[9] % 2 == 0)
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
    S = PESEL[0] + PESEL[1] * 2 + PESEL[2] * 7 + PESEL[3] * 9 + PESEL[4] + PESEL[5] * 3 + PESEL[6] * 7 + PESEL[7] * 9 + PESEL[8] + PESEL[9] * 3;
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
    if (R == PESEL[10])
    {
        return true;
    }
    else
    {
        return false;
    }
}
int dataurodzenia(string PESEL)
{
    if(PESEL[0]&&PESEL[1])
{
    cout<<"urodziles sie w roku 19"<<PESEL[0]<<PESEL[1];
    if(PESEL[2]&&PESEL[3]>12)
    {
        cout<<"urodziles sie w roku 20"<<PESEL[0]-2<<PESEL[1];
    }
}
}
int main()
{
    cout<<"ten program sprawdza poprawność numeru pesel i określa plec";

    string PESEL = "55030101193";
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
    dataurodzenia(PESEL);
    return 0;
}