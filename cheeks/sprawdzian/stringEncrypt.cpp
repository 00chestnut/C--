#include <iostream>
#include <string>
using namespace std;
string szyfrowanie(string s1,string s2)
{
    int i1 = size(s1);
    for (int i = 0; i < i1; i++) 
    {
        if (s1[i] >= 97 && s1[i] <= 119) {
            s2[i] = s1[i] + 3;
        }
        if (s1[i] >= 120 && s1[i] <= 122) {
            s2[i] = s1[i] + 3 - 26;
        }
    }
    return s2;
}
string deszyfrowanie(string s1,string s2)
{
    
    int i1 = size(s1);
    for (int i = 0; i < i1; i++) 
    {
        if (s1[i] >= 100 && s1[i] <= 122) {
            s2[i] = s1[i] - 3;
        }
        if (s1[i] >= 97 && s1[i] <= 99) {
            s2[i] = s1[i] - 3 + 26;
        }
    }
    return s2;
}
int main() {
string s1;
cout << "podaj napis ";
getline(cin,s1);
string s2=s1;
s2=szyfrowanie(s1,s2);
cout << endl << s2;
s2=deszyfrowanie(s2,s2);
cout << endl << s2;
return 0;
}