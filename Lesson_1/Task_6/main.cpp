#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    int stars = 0;
    cout << "Enter amount of stars: ";
    cin >> stars;

    while (true) {
        system("cls");

        for (int height = 0; height < stars; height++) {
            for (int width = 0; width <= height; width++) {
                cout << "* ";
            }
            cout << endl;
        }

        Sleep(500);
    }
}
