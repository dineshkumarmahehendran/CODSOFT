#include <iostream>
using namespace std;

double add(double num1, double num2)
{ return num1 + num2;
 }
double subtract(double num1, double num2)
{ return num1 - num2;
 }
double multiply(double num1, double num2)
 { return num1 * num2;
  }
double divide(double num1, double num2)
{ return (num2 == 0) ? -1 : num1 / num2;
 }

int main() {
    int operation;
    double operand1, operand2;

    cout << "Please select operation -\n"
            "1. Add\n"
            "2. Subtract\n"
            "3. Multiply\n"
            "4. Divide\n";

    cout << "Select operations from 1, 2, 3, 4: "; cin >> operation;
    cout << "Enter first number: "; cin >> operand1;
    cout << "Enter second number: "; cin >> operand2;

    switch (operation) {
        case 1: cout << operand1 << " + " << operand2 << " = " << add(operand1, operand2);
        break;
        case 2: cout << operand1 << " - " << operand2 << " = " << subtract(operand1, operand2);
        break;
        case 3: cout << operand1 << " * " << operand2 << " = " << multiply(operand1, operand2);
         break;
        case 4: cout << operand1 << " / " << operand2 << " = " << divide(operand1, operand2);
        break;
        default: cout << "Invalid input";
    }

    return 0;
}


