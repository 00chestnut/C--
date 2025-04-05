#include <iostream>
#include <string>
using namespace std;

class Motor
{
private:
    bool czyDwusuw;
    bool czyCross;
    int pojemnosc;
    float ilePaliwa;
    float pojemnoscBaku;

public:
    string kolor;
    bool czyLyse;

    Motor()
    {
        pojemnoscBaku = 20;
        ilePaliwa = 5;
        kolor = "czerwony";
        czyLyse = false;
        czyDwusuw = true;
        czyCross = true;
        pojemnosc = 250;
    }
    Motor(string color, bool dwusuw, bool lyse, bool cross, int poj, float paliwa, float pojBaku)
    {
        pojemnoscBaku = pojBaku;
        ilePaliwa = paliwa;
        kolor = color;
        czyLyse = lyse;
        czyDwusuw = dwusuw;
        czyCross = cross;
        pojemnosc = poj;
    }
    friend void porownaj(Motor, Motor);
    void tankuj(float wlewawanePaliwo)
    {
        if (wlewawanePaliwo < pojemnoscBaku - ilePaliwa)
        {
            ilePaliwa += wlewawanePaliwo;
            cout << "Wlałeś " << wlewawanePaliwo << endl;
        }
        else
        {
            float temp = pojemnoscBaku - ilePaliwa;
            ilePaliwa += temp;
            cout << "Wlałeś " << temp << " bo nie miałeś miejsca w baku\n";
        }
    }

    void setCzyDwusuw(bool czyDwusuw1)
    {
        czyDwusuw1 = czyDwusuw;
    }
    bool getCzyDwusuw()
    {
        return czyDwusuw;
    }
    void setCzyCross(bool czyCross1)
    {
        czyCross1 = czyCross;
    }
    bool getCzyCross()
    {
        return czyCross;
    }
    void setPojemnosc(int pojemnosc1)
    {
        pojemnosc = pojemnosc1;
    }
    int getPojemnosc()
    {
        return pojemnosc;
    }
    void setkolor(string kolor1)
    {
        kolor = kolor1;
    }
    string getKolor()
    {
        return kolor;
    }
    void setCzyLyse(bool czyLyse1) 
    {
        czyLyse = czyLyse1;
    }
    bool getCzyLyse()
    {
        return czyLyse;
    }
    void czyTymPojade()
    {
        if (kolor == "czerwony" && czyDwusuw == true && czyLyse == false)
        {
            cout << "Mogę Jechać !\n";
        }
        else
        {
            cout << "Nie Mogę Jechać\n";
        }
    }
    void czyNadajeSie(int oczekiwanaPojemnosc)
    {
        if (pojemnosc < oczekiwanaPojemnosc)
        {
            cout << "Nie nadaje się !\n";
        }
        else
        {
            cout << "Nadaje się !\n";
        }
    }
};
void porownaj(Motor motor1, Motor motor2)
{
    int licznik1 = 0;
    int licznik2 = 0;
    if (motor1.pojemnosc > motor2.pojemnosc)
        licznik1++;
    else if (motor1.pojemnosc < motor2.pojemnosc)
        licznik2++;
    if (motor1.czyCross == true && motor2.czyCross == false)
        licznik1++;
    else if (motor1.czyCross == false && motor2.czyCross == true)
        licznik2++;
    if (motor1.czyDwusuw == false && motor2.czyDwusuw == true)
        licznik2++;
    else if (motor1.czyDwusuw == true && motor2.czyDwusuw == false)
        licznik1++;
    if (motor1.czyLyse == false && motor2.czyLyse == true)
        licznik1++;
    else if (motor1.czyLyse == true && motor2.czyLyse == false)
        licznik2++;
    if (licznik1 > licznik2)
        cout << "Motor 1 wygrał";
    else if (licznik1 < licznik2)
        cout << "Motor 2 wygrał";
    else
        cout << "Remis" << endl;
}
int main()
{
    Motor motor1, motor2;
    motor1.czyLyse = false;
    motor1.kolor = "czerwony";
    motor1.setCzyDwusuw(true);
    motor1.setCzyCross(true);
    motor1.setPojemnosc(600);
    motor1.czyTymPojade();
    motor1.czyNadajeSie(500);

    motor2.czyLyse = true;
    motor2.kolor = "niebieski";
    motor2.setCzyDwusuw(false);
    motor2.setCzyCross(false);
    motor2.setPojemnosc(250);
    motor2.czyTymPojade();
    motor2.czyNadajeSie(500);
    porownaj(motor1, motor2);

    return 0;
}