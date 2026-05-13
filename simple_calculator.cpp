#include<iostream>
using namespace std;

int main() {

    float firstNumber, secondNumber;
    char operation;

    cout << "Enter first number: ";
    cin >> firstNumber;

    cout << "Choose operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> secondNumber;

    switch(operation) {

        case '+':
            cout << "\nAnswer = " 
                 << firstNumber + secondNumber;
            break;

        case '-':
            cout << "\nAnswer = " 
                 << firstNumber - secondNumber;
            break;

        case '*':
            cout << "\nAnswer = " 
                 << firstNumber * secondNumber;
            break;

        case '/':

            if(secondNumber == 0) {
                cout << "\nCannot divide by zero!";
            }
            else {
                cout << "\nAnswer = " 
                     << firstNumber / secondNumber;
            }

            break;

        default:
            cout << "\nInvalid operation selected!";
    }

    return 0;
}