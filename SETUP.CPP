#include <iostream>
using namespace std;

void displayMenu() {
    cout << "Select operation:\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "5. Exit\n";
}

int main() {
    int choice;
    double num1, num2, result;

    while (true) {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting...\n";
            break;
        }

        if (choice < 1 || choice > 5) {
            cout << "Invalid choice. Please select a valid option.\n";
            continue;
        }

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch (choice) {
            case 1:
                result = num1 + num2;
                cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                break;
            case 2:
                result = num1 - num2;
                cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
                break;
            case 3:
                result = num1 * num2;
                cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
                break;
            case 4:
                if (num2 == 0) {
                    cout << "Error: Division by zero is not allowed.\n";
                } else {
                    result = num1 / num2;
                    cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                }
                break;
            default:
                cout << "Invalid operation.\n";
                break;
        }
    }

    return 0;
}
