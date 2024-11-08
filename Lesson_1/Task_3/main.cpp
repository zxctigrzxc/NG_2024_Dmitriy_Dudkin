#include <iostream>

using namespace std;

int main(){

    int num1,num2;

    num1=0;
    num2=0;

    char s;

    while (true){
        cout << "vvedite chisla i operaciyu(*,/,+,-): " << endl;
        cin>>num1>>num2>>s;
    switch (s){

        case '*':
            cout<<num1*num2;
            break;

        case '/':
            cout<<num1/num2;
            break;

        case '+':
            cout<<num1+num2;
            break;

        case '-':
            cout<<num1-num2;
            break;

        default:
            return 0;
    }

        cout << endl;




}
}
