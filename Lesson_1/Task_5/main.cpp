#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    int stars = 0;
    cout << "Enter amount of stars: ";
    cin >> stars;

    for (int height = 0; height < stars; height++) {
        for (int wight = 0; wight < stars - height - 1; wight++) {
            cout << ' ';
        }

        for (int wight = 0; wight < 2 * height + 1; wight++) {
            cout << '*';
        }
        cout << endl;
    }
    for (int wight = 0; wight < stars - 1; wight++) {
        cout << ' ';
    }
    cout << '*' << endl;
}
