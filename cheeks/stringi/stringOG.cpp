#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> rozdziel_na_slowa(const string& napis) {
    vector<string> slowa;
    istringstream iss(napis);
    string slowo;
    while (iss >> slowo) {
        slowa.push_back(slowo);
    }
    return slowa;
}

int main() {
    string napis;
    cout << "Wprowadź napis: ";
    getline(cin, napis);
    vector<string> slowa = rozdziel_na_slowa(napis);
    cout << "Oto rozdzielone słowa:" << endl;
    for (const auto& slowo : slowa) {
        cout << slowo << endl;
    }
    return 0;
}