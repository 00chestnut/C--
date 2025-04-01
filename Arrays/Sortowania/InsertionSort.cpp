#include <iostream>
using namespace std;
void losowo(int tablica[], int rozmiartablicy)
{
    for(int i = 0; i < rozmiartablicy; i++)
    {
        srand(time(NULL)*(i + 1));
        tablica[i]=rand()%20;
    }
}
void tablica(int tablica[], int rozmiartablicy)
{
    for(int i = 0; i < rozmiartablicy; i++)
    {
        cout << tablica[i] << ",";
    }
}
void insertionSort(int tablica[], int rozmiartablicy)
{
    for(int j = rozmiartablicy; j!=1; j--)
    {
        for(int i = 0; i < rozmiartablicy; i++)
        {
            if(tablica[i] > tablica[i+1])
            {
                int temp = tablica[i];
                tablica[i] = tablica[i+1];
                tablica[i+1] = temp;
            }
        }
    }
}
int main() 
{
   int table[15];
   losowo(table, 15);
   cout << "Tablica przed sortowaniem:"<<endl;
   tablica(table, 15);
   cout << endl;
   insertionSort(table, 15);
   cout << "Tablica po sortowaniu:"<<endl;
   tablica(table, 15);
}
    

