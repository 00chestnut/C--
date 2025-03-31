#include <iostream>
using namespace std;
struct srednia {
  int ocena;
  int waga;
};
// Function to get input from the user
void get_input(int &ilosc, srednia *&srednie) {
  cout << "Podaj ilosc ocen ktore uczen bedzie posiadac";
  cin >> ilosc;
  // Allocate memory for the dynamic array of structures
  srednie = new srednia[ilosc];
  cout << "Podaj teraz oceny oraz ich wagi";
  for (int x = 0; x < ilosc; x++) {
    cin >> srednie[x].ocena >> srednie[x].waga;
  }
}
// Function to calculate the average
double calculate_average(srednia *srednie, int ilosc) {
  double sum_ocen = 0;
  double sum_wag = 0;
  for (int x = 0; x < ilosc; x++) {
    sum_ocen += srednie[x].ocena * srednie[x].waga;
    sum_wag += srednie[x].waga;
  }
  return sum_ocen / sum_wag;
}
int main() {
  srednia *srednie = nullptr;
  int ilosc;
  get_input(ilosc, srednie);
  // Calculate the average
  double average = calculate_average(srednie, ilosc);
  cout << "Srednia ocen wynosi: " << average << endl;
  // Free the memory allocated for the dynamic array
  delete[] srednie;
  return 0;
}