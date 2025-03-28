#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch = 'A';
    char num = '5';
    char symbol = '!';
    char space = '\n';

    cout << "Character functions demo:\n";
    cout << "isalnum('A'): " << isalnum(ch) << " (is alphanumeric)\n";
    cout << "isalpha('A'): " << isalpha(ch) << " (is letter)\n";
    cout << "islower('A'): " << islower(ch) << " (is lowercase)\n";
    cout << "isupper('A'): " << isupper(ch) << " (is uppercase)\n";
    cout << "isdigit('5'): " << isdigit(num) << " (is digit)\n";
    cout << "isxdigit('F'): " << isxdigit('F') << " (is hex digit)\n";
    cout << "isprint('!'): " << isprint(symbol) << " (is printable)\n";
    cout << "ispunct('!'): " << ispunct(symbol) << " (is punctuation)\n";
    cout << "iscntrl('\n'): " << iscntrl(space) << " (is control character)\n";
    cout << "tolower('A'): " << (char)tolower(ch) << " (convert to lowercase)\n";
    cout << "toupper('a'): " << (char)toupper('a') << " (convert to uppercase)\n";

    return 0;
}
