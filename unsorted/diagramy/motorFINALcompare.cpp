#include <iostream>
#include <string>
using namespace std;

class Motor
{
private:
    bool czyDwusuw;
    bool czyCross;
    int pojemnoscCC;
    float ilePaliwa;
    float pojemnoscBaku;

public:
    string name;
    string kolor;
    bool czyLyse;

    Motor()
    {
        ilePaliwa = 0;
        czyDwusuw = false;
        czyCross = false;
        pojemnoscCC = 0;
        czyLyse = false;
        pojemnoscBaku = 0;
    }

    void setCzyDwusuw(bool a) { czyDwusuw = a; }
    void setCzyCross(bool a) { czyCross = a; }
    void setPojemnoscCC(int a) { pojemnoscCC = a; }
    void setPojemnoscBaku(float a) { pojemnoscBaku = a; }
    void setIlePaliwa(float a) { ilePaliwa = a; }

    bool getCzyDwusuw() { return czyDwusuw; }
    bool getCzyCross() { return czyCross; }
    int getPojemnoscCC() { return pojemnoscCC; }
    float getIlePaliwa() { return ilePaliwa; }

    void tankuj(float wlewawanePaliwo)
    {
        if (ilePaliwa >= pojemnoscBaku)
        {
            cout << "Bak jest już pełny! Nie można dodać więcej paliwa." << endl;
            return;
        }

        if (wlewawanePaliwo <= pojemnoscBaku - ilePaliwa)
        {
            ilePaliwa += wlewawanePaliwo;
            cout << "Wlałeś " << wlewawanePaliwo << " L." << endl;
        }
        else
        {
            float temp = pojemnoscBaku - ilePaliwa;
            ilePaliwa += temp;
            cout << "Wlałeś " << temp << " L, bo nie miałeś więcej miejsca w baku.\n";
        }
    }

    bool isSuitable()
    {
        return (ilePaliwa >= 0.7 * pojemnoscBaku);
    }

    float getFuelPercentage()
    {
        return (ilePaliwa / pojemnoscBaku) * 100;
    }

    int ocena()
    {
        int points = 0;
        if (czyDwusuw)
            points++;
        if (kolor == "czerwony")
            points++;
        if (!czyLyse)
            points++;
        return points;
    }

    int maxPoints()
    {
        return 3;
    }
};

Motor porownajMotory(Motor &motor1, Motor &motor2)
{
    cout << "\nPorównanie motorów: " << endl;
    cout << motor1.name << " pojemnosc: " << motor1.getPojemnoscCC() << " cc" << endl;
    cout << motor2.name << " pojemnosc: " << motor2.getPojemnoscCC() << " cc" << endl;
    int ccpoints1 = motor1.ocena();
    int ccpoints2 = motor2.ocena();

    if (motor1.getPojemnoscCC() > motor2.getPojemnoscCC())
    {
        ccpoints1++;
        cout << motor1.name << " wygrywa na podstawie pojemności!" << endl;
    }
    else if (motor1.getPojemnoscCC() < motor2.getPojemnoscCC())
    {
        ccpoints2++;
        cout << motor2.name << " wygrywa na podstawie pojemności!" << endl;
    }
    else
    {
        cout << "Oba motory mają taką samą pojemność." << endl;
    }

    ccpoints1 = min(ccpoints1, motor1.maxPoints());
    ccpoints2 = min(ccpoints2, motor2.maxPoints());

    cout << motor1.name << " ma " << ccpoints1 << "/" << motor1.maxPoints() << " punktów." << endl;
    cout << motor2.name << " ma " << ccpoints2 << "/" << motor2.maxPoints() << " punktów." << endl;

    return (ccpoints1 > ccpoints2) ? motor1 : motor2;
}
int main()
{
    Motor motor1, motor2;
    string placeholder;

    cout << "=== Motor 1 ===" << endl;
    cout << "Podaj nazwę motoru 1: ";
    cin >> motor1.name;

    cout << "Czy motor " << motor1.name << " to dwusuw? T/N: ";
    cin >> placeholder;
    motor1.setCzyDwusuw((placeholder == "T" || placeholder == "t"));

    if (!motor1.getCzyDwusuw())
    {
        cout << "Czy motor " << motor1.name << " to cross? T/N: ";
        cin >> placeholder;
        motor1.setCzyCross((placeholder == "T" || placeholder == "t"));
    }

    cout << "Kolor motoru " << motor1.name << "(czerwony/niebieski): ";
    cin >> motor1.kolor;

    cout << "Czy opony motoru " << motor1.name << " są łyse? T/N: ";
    cin >> placeholder;
    motor1.czyLyse = (placeholder == "T" || placeholder == "t");

    cout << "Pojemnosc motoru " << motor1.name << " (cc): ";
    int pojemnoscCC1;
    cin >> pojemnoscCC1;
    motor1.setPojemnoscCC(pojemnoscCC1);

    cout << "Podaj pojemność baku motoru " << motor1.name << " (L): ";
    float pojemnoscBaku1;
    cin >> pojemnoscBaku1;
    motor1.setPojemnoscBaku(pojemnoscBaku1);

    cout << "Ile paliwa masz na ten moment? (L): ";
    float currentFuel;
    cin >> currentFuel;
    motor1.setIlePaliwa(currentFuel);

    cout << "Ile tankujemy? ";
    float paliwoDoNalania;
    cin >> paliwoDoNalania;
    motor1.tankuj(paliwoDoNalania);

    cout << "\n=== Motor 2 ===" << endl;
    cout << "Podaj nazwę motoru 2: ";
    cin >> motor2.name;

    cout << "Czy motor " << motor2.name << " to dwusuw? T/N: ";
    cin >> placeholder;
    motor2.setCzyDwusuw((placeholder == "T" || placeholder == "t"));

    if (!motor2.getCzyDwusuw())
    {
        cout << "Czy motor " << motor2.name << " to cross? T/N: ";
        cin >> placeholder;
        motor2.setCzyCross((placeholder == "T" || placeholder == "t"));
    }

    cout << "Kolor motoru " << motor2.name << "(czerwony/niebieski): ";
    cin >> motor2.kolor;

    cout << "Czy opony motoru " << motor2.name << " są łyse? T/N: ";
    cin >> placeholder;
    motor2.czyLyse = (placeholder == "T" || placeholder == "t");

    cout << "Pojemnosc motoru " << motor2.name << " (cc): ";
    int pojemnoscCC2;
    cin >> pojemnoscCC2;
    motor2.setPojemnoscCC(pojemnoscCC2);

    cout << "Podaj pojemność baku motoru " << motor2.name << " (L): ";
    float pojemnoscBaku2;
    cin >> pojemnoscBaku2;
    motor2.setPojemnoscBaku(pojemnoscBaku2);

    cout << "Ile paliwa masz na ten moment? (L): ";
    cin >> currentFuel;
    motor2.setIlePaliwa(currentFuel);

    cout << "Ile tankujemy? ";
    cin >> paliwoDoNalania;
    motor2.tankuj(paliwoDoNalania);

    Motor winner = porownajMotory(motor1, motor2);

    cout << "\nZwycięzca: Motor " << winner.name << " z pojemnością " << winner.getPojemnoscCC() << " cc.\n";
    cout << "Czy motor " << winner.name << " nadaje się do jazdy? (70%+ paliwa) "
         << (winner.isSuitable() ? "Tak" : "Nie") << endl;
    cout << "Poziom paliwa: " << winner.getFuelPercentage() << "% baku jest zapełnione." << endl;
// mmmmm motor
    return 0;
}
