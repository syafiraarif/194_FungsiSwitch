

#include <iostream>
using namespace std;

int luas;

void prosedurluas(int p, int l)
{
    luas = p * l;
}

int fungsiluas(int p, int l)
{
    return p * l;
}

int main()
{
    int panjang, lebar;
    cout << "masukan panjang : ";
    cin >> panjang;
    cout << "masukan lebar : ";
    cin >> lebar;

    prosedurluas(panjang, lebar);
    cout << "luas persegi panjang dengan prosedur : " << luas << endl;
    cout << "luas persegi panjang dengan prosedur :" << fungsiluas(panjang, lebar) << endl;

    return 0;
}

