#include <iostream>
#include <string>
using namespace std;

class Pamiec
{
protected:
    int ram, masowa;

public:
    void setRam(int input)
    {
        ram = input;
    }

    int getRam()
    {
        return ram;
    }

    void setMasowa(int input)
    {
        masowa = input;
    }

    int getMasowa()
    {
        return masowa;
    }
};

class Procesor
{
protected:
    int rdzenie, watki, taktowanie;
    string model;

public:
    void setRdzenie(int input)
    {
        rdzenie = input;
    }

    int getRdzenie()
    {
        return rdzenie;
    }

    void setWatki(int input)
    {
        watki = input;
    }

    int getWatki()
    {
        return watki;
    }

    void setTaktowanie(int input)
    {
        taktowanie = input;
    }

    int getTaktowanie()
    {
        return taktowanie;
    }

    void setModel(string input)
    {
        model = input;
    }

    string getModel()
    {
        return model;
    }
};

class RozmiarMatrycy
{
protected:
    int rozmiar;

public:
    void setRozmiar(int input)
    {
        rozmiar = input;
    }

    int getRozmiar()
    {
        return rozmiar;
    }
};

class EkranDotykowy : public RozmiarMatrycy
{
protected:
    bool czyDotykowy;

public:
    void setCzyDotykowy(bool input)
    {
        czyDotykowy = input;
    }

    bool getCzyDotykowy()
    {
        return czyDotykowy;
    }
};

class Desktop : private Pamiec, private Procesor, private RozmiarMatrycy
{
public:
    Desktop()
    {
        ram = 16;
        masowa = 1024;
        rdzenie = 4;
        watki = 8;
        taktowanie = 2200000;
        model = "i3";
        rozmiar = 14;
    }

    Desktop(int inputRam, int inputMasowa, int inputRdzenie, int inputWatki, int inputTaktowanie, string inputModel, int inputRozmiar)
    {
        ram = inputRam;
        masowa = inputMasowa;
        rdzenie = inputRdzenie;
        watki = inputWatki;
        taktowanie = inputTaktowanie;
        model = inputModel;
        rozmiar = inputRozmiar;
    }

    void setSetRam(int input)
    {
        setRam(input);
    }

    int getGetRam()
    {
        return getRam();
    }

    void setSetMasowa(int input)
    {
        setMasowa(input);
    }

    int getGetMasowa()
    {
        return getMasowa();
    }

    void setSetRdzenie(int input)
    {
        setRdzenie(input);
    }

    int getGetRdzenie()
    {
        return getRdzenie();
    }

    void setSetRdzenie(int input)
    {
        setRdzenie(input);
    }

    int getGetRdzenie()
    {
        return getRdzenie();
    }

    void setSetWatki(int input)
    {
        setWatki(input);
    }

    int getGetWatki()
    {
        return getWatki();
    }

    void setSetTaktowanie(int input)
    {
        setTaktowanie(input);
    }

    int getGetTaktowanie()
    {
        return getTaktowanie();
    }

    void setSetModel(string input)
    {
        setModel(input);
    }

    string getGetModel()
    {
        return getModel();
    }

    void setSetRozmiar(int input)
    {
        setRozmiar(input);
    }

    int getGetRozmiar()
    {
        return getRozmiar();
    }

    void display()
    {
        cout << ram << endl;
        cout << masowa << endl;
        cout << rdzenie << endl;
        cout << watki << endl;
        cout << taktowanie << endl;
        cout << model << endl;
        cout << rozmiar << endl;
    }
};

class Tablet : private Pamiec, private Procesor, private EkranDotykowy
{
public:
    Tablet()
    {
        ram = 4;
        masowa = 128;
        rdzenie = 4;
        watki = 8;
        taktowanie = 2200000;
        model = "i3";
        rozmiar = 14;
        czyDotykowy = true;
    }

    Tablet(int inputRam, int inputMasowa, int inputRdzenie, int inputWatki, int inputTaktowanie, string inputModel, int inputRozmiar, bool inputCzyDotykowy)
    {
        ram = inputRam;
        masowa = inputMasowa;
        rdzenie = inputRdzenie;
        watki = inputWatki;
        taktowanie = inputTaktowanie;
        model = inputModel;
        rozmiar = inputRozmiar;
        czyDotykowy = inputCzyDotykowy;
    }

    void setSetRam(int input)
    {
        setRam(input);
    }

    int getGetRam()
    {
        return getRam();
    }

    void setSetMasowa(int input)
    {
        setMasowa(input);
    }

    int getGetMasowa()
    {
        return getMasowa();
    }

    void setSetRdzenie(int input)
    {
        setRdzenie(input);
    }

    int getGetRdzenie()
    {
        return getRdzenie();
    }

    void setSetRdzenie(int input)
    {
        setRdzenie(input);
    }

    int getGetRdzenie()
    {
        return getRdzenie();
    }

    void setSetWatki(int input)
    {
        setWatki(input);
    }

    int getGetWatki()
    {
        return getWatki();
    }

    void setSetTaktowanie(int input)
    {
        setTaktowanie(input);
    }

    int getGetTaktowanie()
    {
        return getTaktowanie();
    }

    void setSetModel(string input)
    {
        setModel(input);
    }

    string getGetModel()
    {
        return getModel();
    }

    void setSetRozmiar(int input)
    {
        setRozmiar(input);
    }

    int getGetRozmiar()
    {
        return getRozmiar();
    }

    void setSetCzyDotykowy(bool input)
    {
        setCzyDotykowy(input);
    }

    string getGetCzyDotykowy()
    {
        return getGetCzyDotykowy();
    }

    void display()
    {
        cout << ram << endl;
        cout << masowa << endl;
        cout << rdzenie << endl;
        cout << watki << endl;
        cout << taktowanie << endl;
        cout << model << endl;
        cout << rozmiar << endl;
        cout << czyDotykowy << endl;
    }
};

class Laptop : private Pamiec, private Procesor, private EkranDotykowy
{
public:
    Laptop()
    {
        ram = 8;
        masowa = 512;
        rdzenie = 4;
        watki = 8;
        taktowanie = 2200000;
        model = "i3";
        rozmiar = 14;
        czyDotykowy = false;
    }

    Laptop(int inputRam, int inputMasowa, int inputRdzenie, int inputWatki, int inputTaktowanie, string inputModel, int inputRozmiar, bool inputCzyDotykowy)
    {
        ram = inputRam;
        masowa = inputMasowa;
        rdzenie = inputRdzenie;
        watki = inputWatki;
        taktowanie = inputTaktowanie;
        model = inputModel;
        rozmiar = inputRozmiar;
        czyDotykowy = inputCzyDotykowy;
    }

    void setSetRam(int input)
    {
        setRam(input);
    }

    int getGetRam()
    {
        return getRam();
    }

    void setSetMasowa(int input)
    {
        setMasowa(input);
    }

    int getGetMasowa()
    {
        return getMasowa();
    }

    void setSetRdzenie(int input)
    {
        setRdzenie(input);
    }

    int getGetRdzenie()
    {
        return getRdzenie();
    }

    void setSetRdzenie(int input)
    {
        setRdzenie(input);
    }

    int getGetRdzenie()
    {
        return getRdzenie();
    }

    void setSetWatki(int input)
    {
        setWatki(input);
    }

    int getGetWatki()
    {
        return getWatki();
    }

    void setSetTaktowanie(int input)
    {
        setTaktowanie(input);
    }

    int getGetTaktowanie()
    {
        return getTaktowanie();
    }

    void setSetModel(string input)
    {
        setModel(input);
    }

    string getGetModel()
    {
        return getModel();
    }

    void setSetRozmiar(int input)
    {
        setRozmiar(input);
    }

    int getGetRozmiar()
    {
        return getRozmiar();
    }

    void setSetCzyDotykowy(bool input)
    {
        setCzyDotykowy(input);
    }

    string getGetCzyDotykowy()
    {
        return getGetCzyDotykowy();
    }

    void display()
    {
        cout << ram << endl;
        cout << masowa << endl;
        cout << rdzenie << endl;
        cout << watki << endl;
        cout << taktowanie << endl;
        cout << model << endl;
        cout << rozmiar << endl;
        cout << czyDotykowy << endl;
    }
};

int main()
{
    Desktop desktop1;
    desktop1.display();

    Laptop laptop1(8, 512, 4, 8, 2200000, "i3", 14, false);
    laptop1.display();
    laptop1.setSetRam(16);
}