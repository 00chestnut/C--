#include <iostream>
using namespace std;
int main()
{
int arr[3][4];
for (int i = 0; i < 2; i++)
    {
      srand((i + 1) * time(NULL));
      for (short j = 0; j < 3; j++)
      {
        arr[i][j] = rand() % 11;
      }
    }
     for (short i = 0; i < 2; i++)
  {
    for (short j = 0; j < 3; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
return 0;
}