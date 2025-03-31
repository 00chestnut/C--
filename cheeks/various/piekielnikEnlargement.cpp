#include <iostream>
using namespace std;
void fivecm(){
    cout << "Wybrano 5cm powiększenia..." << endl;
}
void sevencm(){
    cout << "Wybrano 5cm powiększenia..." << endl;
}
int main()
{
    char choice;
    int size;
    int enlargement;
    do
    {
        cout << "Powiększ swojego piekielnika! Już dziś, za darmo, bez opłat!" << endl;
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
        cout << "Podaj rozmiar swojego piekielnika: " << endl;
        cin >> size;
        cout << "Wybierz rozmiar: " << endl;
        switch(enlargement){
            case 1:
                fivecm();
                break;
            case 2:
                sevencm();
                break;

        }


    } while (choice = "y" || "Y");
    return 0;
}