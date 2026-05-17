#include<iostream>
using namespace std;

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

int main() {

    float firstNumber, secondNumber;
    char operation;
    char choice;

    do {

        cout << "\nEnter first number: ";
        cin >> firstNumber;

        cout << "Choose operation (+, -, *, /): ";
        cin >> operation;

        cout << "Enter second number: ";
        cin >> secondNumber;
        switch(operation) {

            case '+':
                cout << "\nAnswer = "
                     << add(firstNumber, secondNumber);
                break;

            case '-':
                cout << "\nAnswer = "
                     << subtract(firstNumber, secondNumber);
                break;

            case '*':
                cout << "\nAnswer = "
                     << multiply(firstNumber, secondNumber);
                break;

            case '/':

                if(secondNumber == 0) {
                    cout << "\nCannot divide by zero!";
                }
                else {
                    cout << "\nAnswer = "
                         << divide(firstNumber, secondNumber);
                }

                break;

            default:
                cout << "\nInvalid operation selected!";
        }

        cout << "\n\nDo you want to calculate again? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');


    return 0;
}
