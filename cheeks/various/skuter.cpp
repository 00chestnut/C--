#include <iostream>
#include <string>
using namespace std;

class motor
{
    bool czyDwusuw;
    bool czyCross;
    int pojemnosc;
    float ilePaliwa;
    float pojemnoscBaku;

public:
    string kolor;
    bool czyŁyse;

    motor(){
        pojemnoscBaku = 20;
        ilePaliwa = 0;
    }
    motor(string a, bool b){
        pojemnoscBaku = 20;
        ilePaliwa = 0;
        kolor = a;
        czyŁyse = b;
    }

    void tankuj(float wlewawanePaliwo){
        if (wlewawanePaliwo < pojemnoscBaku-ilePaliwa)
        {
            ilePaliwa += wlewawanePaliwo;
            cout << "Wlałeś " << wlewawanePaliwo << endl;
        }else{
            float temp = pojemnoscBaku-ilePaliwa;
            ilePaliwa+=temp;
            cout << "Wlałeś " << temp << " bo nie miałeś miejsca w baku\n";
        }
    }

    void setCzyDwusuw(bool a)
    {
        czyDwusuw = a;
    }
    void setCzyCross(bool a)
    {
        czyCross = a;
    }
    void setPojemnosc(int a)
    {
        pojemnosc = a;
    }

    bool getCzyDwusuw(){
        return czyDwusuw;
    }
    bool getCzyCross(){
        return czyCross;
    }
    int getPojemnosc(){
        return pojemnosc;
    }

    void czyTymPojade(){
        if (kolor == "czerwony" && czyDwusuw == true && czyŁyse == false)
        {
            cout << "Mogę Jechać !\n";
        } else{
            cout << "Nie Mogę Jechać\n";
        }
    }
    void czyNadajeSie(int oczekiwanaPojemnosc){
        if (pojemnosc < oczekiwanaPojemnosc)
        {
            cout << "Nie nadaje się !\n";
        }else{
            cout << "Nadaje się !\n";
        }
    }
};

int main()
{
    motor motor1("czerwony",false);

    motor1.setCzyDwusuw(true);
    motor1.setCzyCross(true);
    motor1.setPojemnosc(600);

    motor1.czyTymPojade();
    motor1.czyNadajeSie(500);

    
    return 0;
}