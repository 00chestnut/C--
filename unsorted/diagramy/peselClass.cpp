#include <iostream>
#include <cmath>
using namespace std;

class Osoba
{
private:
  string pesel;
  char plec;

  bool czyPoprawne(string podanyPesel)//prywatna metoda podobnie jak własnośćwymaga publicznej która z niej korzysta
  {
    int s;
    s += ((int)podanyPesel[0] - 48) * 1;
    s += ((int)podanyPesel[1] - 48) * 3;
    s += ((int)podanyPesel[2] - 48) * 7;
    s += ((int)podanyPesel[3] - 48) * 9;
    s += ((int)podanyPesel[4] - 48) * 1;
    s += ((int)podanyPesel[5] - 48) * 3;
    s += ((int)podanyPesel[6] - 48) * 7;
    s += ((int)podanyPesel[7] - 48) * 9;
    s += ((int)podanyPesel[8] - 48) * 1;
    s += ((int)podanyPesel[9] - 48) * 3;
    int m = s % 10;
    int r = m == 0 ? 0 : 10 - m;

    if ((int)podanyPesel[10] - 48 == r)
    {
      return true;
    }
    return false;
  }

public:
  int iq;

  void setPesel(string podanyPesel)//tu jest publiczna metoda która korzysta z prywatnej
  {
    while (!czyPoprawne(podanyPesel))
    {
      cout << "nie poprawny pesel chcesz nowy wpisz N, chcesz skonczyc to kliknij enter" << endl;
      char znak;
      cin >> znak;

      if (znak != 'N')
      {
        exit(-1);
      }

      cout << "Podaj pesel:" << endl;
      cin >> podanyPesel;
    }

    pesel = podanyPesel;
    if ((int)pesel[9] - 48 % 2 == 0)
    {
      plec = 'K';
    }
    else
    {
      plec = 'M';
    }
  }

  void getPesel(string &nowyPesel)
  {
    nowyPesel = pesel;
  }

  void getPlec(char &nowaPlec)
  {
    nowaPlec = plec;
  }

  void wypiszRokUrodzenia()
  {
    struct data
    {
      int rokUrodzenia;
      int miesiac;
      int dzien;
    };

    data nowaData;
    
    nowaData.rokUrodzenia = ((int)pesel[0] - 48) * 10 + ((int)pesel[1] - 48);
    nowaData.miesiac = ((int)pesel[2] - 48) * 10 + ((int)pesel[3] - 48);

    if (nowaData.miesiac > 20)
    {
      nowaData.rokUrodzenia += 2000;
    }
    else
    {
      nowaData.rokUrodzenia += 1900;
    }

    if (nowaData.rokUrodzenia > 1999)
    {
      nowaData.miesiac -= 20;
    }

    nowaData.dzien = ((int)pesel[4] - 48) * 10 + ((int)pesel[5] - 48);
    cout << "Urodziłeś się: ";

    if (nowaData.dzien < 10)
    {
      cout << "0" << nowaData.dzien;
    }
    else
    {
      cout << nowaData.dzien;
    }
    cout << ".";

    if (nowaData.miesiac < 10)
    {
      cout << "0" << nowaData.miesiac;
    }
    else
    {
      cout << nowaData.miesiac;
    }

    cout << ".";
    cout << nowaData.rokUrodzenia << endl;
  }
};

int main()
{
  string pesel;
  int iq;
  Osoba osoba1;
  cout << "podaj pesel\n";
  cin >> pesel;
  osoba1.setPesel(pesel);
  cout << "podaj iq\n";
  cin >> iq;
  osoba1.iq = iq;

  string nowyPesel;
  osoba1.getPesel(nowyPesel);
  cout << "pesel:" << nowyPesel << endl;
  cout << "iq:" << osoba1.iq << endl;
  char nowaPlec;
  osoba1.getPlec(nowaPlec);
  cout << "plec:" << nowaPlec << endl;
  osoba1.wypiszRokUrodzenia();
  return 0;
}