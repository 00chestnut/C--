#include <iostream>
using namespace std;

class date
{
public:
    unsigned short day{}, month{}, year{};
    date(short DAY, short MONTH, short YEAR)
    {
        day = DAY;
        month = MONTH;
        year = YEAR;
    }
    void print()
    {
        cout << " day: " << day << '\n';
        cout << " month: " << month << '\n';
        cout << " year: " << year << '\n';
    }
};
class pesel
{
private:
    string PESEL{0};

public:
    char sex()
    {
        if (PESEL.at(9) % 2 == 0)
            return 'K';
        else
            return 'M';
    }
    bool sumaKontrolna()
    {
        unsigned int sum{0}, sumModulo, R;
        sum = PESEL.at(0) + PESEL.at(1) * 2 + PESEL.at(2) * 7 + PESEL.at(3) * 9 + PESEL.at(4) + PESEL.at(5) * 3 + PESEL.at(6) * 7 + PESEL.at(7) * 9 + PESEL.at(8) + PESEL.at(9) * 3;
        sumModulo = sum % 10;
        if (sumModulo == 0)
            R = 0;
        else
            R = 10 - sumModulo;
        if (R == PESEL.at(10))
            return true;
        else
            return false;
    }
    date birthDay()
    {
        unsigned short day{}, month{}, year{};
        day = 10 * (static_cast<unsigned short>(PESEL.at(4)) - 48) + (static_cast<unsigned short>(PESEL.at(5)) - 48);
        if (static_cast<unsigned short>(PESEL.at(2)) - 48 > 1)
        {
            month = ((10 * (static_cast<unsigned short>(PESEL.at(2)) - 48)) + (static_cast<unsigned short>(PESEL.at(3)) - 48)) - 20;
            year = 2000 + (10 * (static_cast<unsigned short>(PESEL.at(0)) - 48) + (static_cast<unsigned short>(PESEL.at(1)) - 48));
        }
        else
        {
            month = 10 * (static_cast<unsigned short>(PESEL.at(2)) - 48) + (static_cast<unsigned short>(PESEL.at(3)) - 48);
            year = 1900 + (10 * (static_cast<unsigned short>(PESEL.at(0)) - 48) + (static_cast<unsigned short>(PESEL.at(1)) - 48));
        }
        return date(day, month, year);
    }
    pesel(string peselInsert)
    {
        PESEL = peselInsert;
    }
};
void displayPeselInformation(pesel person)
{
    cout << "Pesel information: \n"
         << "Gender: " << person.sex() << '\n'
         << "Birthday: \n";
    person.birthDay().print();
    cout << "Control Sum: " << (person.sumaKontrolna() ? "true" : "false");
}
int main()
{
    bool next = true;
    string n;
    while (next)
    {
        string p = "";
        bool flag = false;
        cout << "Enter pesel to display person data:\n";
        cin >> p;
        for (char l : p)
        {
            isalpha(l) ? : flag = true;
        }
        if (p.length() == 11 && flag == true)
        {
            pesel person1(p);
            displayPeselInformation(person1);
        }
        else
            cout << "Please enter valid pesel.";
        cout << "\nenter \"c\" to continue \n";
        cin >> n;
        if(n != "c")
            next = false;
    }

    return 0;
}