

#include <iostream>
using namespace std;

int bilangan1, bilangan2;

int penjumlahan(int a, int b)
{
    return a + b;
}

int pengurangan(int a, int b)
{
    return a - b;
}

int perkalian(int a, int b)
{
    return a * b;
}

float pembagian(float a, float b)
{
    return a / b;
}

void inputdata()
{
    cout << "\nMasukan bilangan pertama : ";
    cin >> bilangan1;
    cout << "Masukan bilangan kedua : ";
    cin >> bilangan2;
}

int main()
{
    int pilihan;
    do
    {
        system("CLS");
        cout << "menu kalkulator sederhana" << endl;
        cout << "1. penjumlahan" << endl;
        cout << "2. pengurangan" << endl;
        cout << "3. perkalian" << endl;
        cout << "4. pembagian" << endl;
        cout << "5. keluar" << endl;
        cout << "masukan pilihan : ";
        cin >> pilihan;

        switch(pilihan)
        {
        case 1:
            inputdata();
            cout << "\nHasil penjumlahan : " << penjumlahan(bilangan1, bilangan2) << endl;
            system("pause");
            break;
        case 2:
            inputdata();
            cout << "\nHasil pengurangan : " << pengurangan(bilangan1, bilangan2) << endl;
            system("pause");
            break;
        case 3:
            inputdata();
            cout << "\nHasil perkalian : " << perkalian(bilangan1, bilangan2) << endl;
            system("pause");
            break;
        case 4:
            inputdata();
            cout << "\nHasil pembagian : " << pembagian(bilangan1, bilangan2) << endl;
            system("pause");
            break;
        case 5:
            break;
        default:
            cout << "pilihan tidak valid" << endl;
            system("pause");
            break;
        }
    } while (pilihan != 5);

    return 0;
    
}
