#include <iostream>
using namespace std;

class Tree {
    bool czyIglaste, czyTwarde;
    int obwPnia;
    string nazwa;

public:
    Tree();
    Tree(bool, bool, int, string);
    void display();
};

Tree::Tree() : 
czyIglaste{true}, 
czyTwarde{false}, 
obwPnia{77}, 
nazwa("Adam") {
    cout << "Check non-parameter constructor" << endl;
}

Tree::Tree(bool tIglaste, bool tTwarde, int tObw, string tName) : 
czyIglaste{tIglaste}, 
czyTwarde{tTwarde}, 
obwPnia{tObw}, 
nazwa(tName) {
    cout << "Check parameter constructor" << endl;
}

void Tree::display() {
    cout << "Czy jest iglaste?: " << (czyIglaste ? "Tak" : "Nie") << endl;
    cout << "Czy jest twarde?: " << (czyTwarde ? "Tak" : "Nie") << endl;
    cout << "Obwód pnia: " << obwPnia << endl;
    cout << "Nazwa drzewa: " << nazwa << endl;
}

int main() {
    Tree Drzewo1;
    Drzewo1.display();

    cout << endl;

    Tree Drzewo2(true, true, 67, "Jacek");
    Drzewo2.display();

    cout << endl;

    Tree Drzewo3(false, false, 612, "Grucjusz");
    Drzewo3.display();

    return 0;
}