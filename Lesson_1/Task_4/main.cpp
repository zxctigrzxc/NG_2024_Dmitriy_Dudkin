#include <iostream>

using namespace std;

int main()
{
    int zarplata;
    cout << "skolko zarplata?: ";
    cin >> zarplata;
    if (zarplata < 1000){
        cout << "rabotai bolshe";
    }
    if (zarplata > 1000){
        if (zarplata < 1000000){
            cout << "tu molodec";
        }
    }
    if (zarplata > 1000000){
        cout << "tu millioner!!!";
    }
}
