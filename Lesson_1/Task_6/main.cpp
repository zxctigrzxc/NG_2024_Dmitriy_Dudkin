#include <iostream>
#include <windows.h>
using namespace std;

void printTriangle(int stars) {
    for (int height = 0; height < stars; height++){
        for (int width = 0; width <= height; width++)
            cout << "* ";
        cout << endl;
    }
}

int main() {
    int stars = 0;
    cout << "Enter amount of stars: ";
    cin >> stars;

    while (true) {
        system("cls");


        printTriangle(stars);
        Sleep(500);


    }
}
