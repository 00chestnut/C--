namespace inlitery
{
    const int litr = 1;
    const int galons = 5;
    const int bath = 200;
    const int tanks = 1000;

}
struct litry
{
    int litr{};
    int galons{};
    int bath{};
    int tanks{};
};
void litrywpojemnikach(int litr, litry &liter)
{

    liter.tanks = litr / inlitery::tanks;
    litr = litr % inlitery::tanks;

    liter.bath = litr / inlitery::bath;
    litr = litr % inlitery::bath;

    liter.galons= litr / inlitery::galons;
    litr = litr % inlitery::galons;
    liter.litr = litr;
}