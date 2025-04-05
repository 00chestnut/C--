#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> wektor = {10, 20, 30, 40, 50};

  cout << "Rozmiar oryginalny: " << wektor.size() << endl;
  cout << "Pojemność oryginalna: " << wektor.capacity() << endl;

  wektor.resize(0);

  cout << "Rozmiar po resize(0): " << wektor.size() << endl;
  cout << "Pojemność po resize(0): " << wektor.capacity() << endl;

  vector<int> wiektor = {10, 20, 30, 40, 50};
  wektor.clear();

  cout << "Rozmiar po clear(): " << wiektor.size() << endl;
  cout << "Pojemność po clear(): " << wiektor.capacity() << endl;

  return 0;
}