#include <iostream>

using namespace std;

int main(){

    int q,w;

    q=0;
    w=0;

    char s;

    while (true){
        cout << "vvedite chisla i operaciyu(*,/,+,-): " << endl;
        cin>>w>>q>>s;
    switch (s){

        case '*':
            cout<<w*q;
            break;

        case '/':
            cout<<w/q;
            break;

        case '+':
            cout<<w+q;
            break;

        case '-':
            cout<<w-q;
            break;

        default:
            return 0;
    }

        cout << endl;




}
}
