#include <iostream>

using namespace std;

int main()
{
    int num[5];

    for (int counter = 0; counter < 5; counter++ ){
        cout << "Enter value: " << counter << ":";
        cin >> num[counter];
    }

    for (int counter = 0; counter < 5; counter++){
        cout << num[counter];
        if (counter < 4 ) { cout << ", ";} else {cout << "." << endl;}
    }

    return 0;
}
