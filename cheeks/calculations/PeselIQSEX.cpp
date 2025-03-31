#include <iostream>
#include <string>
using namespace std;

class Osoba {
private:
    string pesel;
// PESEL validation function
bool czyPoprawne(string nowyPesel)
{
  int s;
  s += ((int)nowyPesel[0] - 48) * 1;
  s += ((int)nowyPesel[1] - 48) * 3;
  s += ((int)nowyPesel[2] - 48) * 7;
  s += ((int)nowyPesel[3] - 48) * 9;
  s += ((int)nowyPesel[4] - 48) * 1;
  s += ((int)nowyPesel[5] - 48) * 3;
  s += ((int)nowyPesel[6] - 48) * 7;
  s += ((int)nowyPesel[7] - 48) * 9;
  s += ((int)nowyPesel[8] - 48) * 1;
  s += ((int)nowyPesel[9] - 48) * 3;
  int m = s % 10;
  int r = m == 0 ? 0 : 10 - m;

  if ((int)nowyPesel[10] - 48 == r)
  {
    return true;
  }
  return false;
}
public:
    int iq;
    char plec;

    // Setter for PESEL with validation
    void ustawPesel(const string& nowyPesel) {
        if (czyPoprawne(nowyPesel)) {
            cout << "Pesel niepoprawny!" << endl;
    }   else {
        cout << "Pesel poprawny." << endl;
    }
    }

    // Getter for PESEL
    string pobierzPesel() const {
        return pesel;
    }

    // Setter for IQ with validation
    void ustawIQ(int noweIQ) {
        if (noweIQ >= 43 && noweIQ <= 276) {
            iq = noweIQ;
        } else {
            cout << "Niepoprawna wartość IQ! (43-276)" << endl;
        }
    }

    // Method to display data
    void wyswietlDane() const {
        cout << "PESEL: " << pesel << endl;
        cout << "IQ: " << iq << endl;
        cout << "Płeć: " << plec << endl;
    }
};


int main() {
    Osoba person;
    string pesel;
    int iq;
    char plec;

    cout << "Podaj PESEL: ";
    cin >> pesel;
    person.ustawPesel(pesel);

    cout << "Podaj IQ (43-276): ";
    cin >> iq;
    person.ustawIQ(iq);

    cout << "Podaj płeć (M/K): ";
    cin >> plec;
    person.plec = plec;

    cout << "\nDane osoby:" << endl;
    person.wyswietlDane();

    return 0;
}