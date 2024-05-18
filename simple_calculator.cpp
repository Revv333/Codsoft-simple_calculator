#include<bits/stdc++.h>
using namespace std;
int main() {
    double num1, num2;
    char op;
    cout << "Simple Calculator!" << endl;
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;
    cout << "Choose operation (+, -, *, /): ";
    cin >> op;
    switch (op){
        case '+':
            cout <<"Result:"<<num1+num2<<endl;
            break;
        case '-':
            cout <<"Result:"<<num1-num2<<endl;
            break;
        case '*':
            cout<<"Result:"<<num1*num2<<endl;
            break;
        case '/':
            if (num2 == 0) {
                cout <<"Division by zero is not allowed."<<endl;
            } else {
                cout<<"Result:"<<num1/num2<<endl;
            }
            break;
        default:
            cout <<"Please choose a valid operation."<< endl;
    }
    return 0;
}