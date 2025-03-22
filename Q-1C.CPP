#include <iostream> 
using namespace std;

int Addition(int a, int b) {
    return a + b;
}

int Subtraction(int a, int b) {
    return a - b;
}

int Multiplication(int a, int b) {
    return a * b;
}

float Division(float a, float b) {
    if (b == 0) {
        cout << "Error! Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}

int Modular(int a, int b) {
    if (b == 0) {
        cout << "Error! Modulo by zero is not allowed." << endl;
        return 0;
    }
    return a % b;
}

int main() {
    int Choice;
    
    do {
        cout << " Calculator \n";
        cout << "Press 1 for (+)\n";
        cout << "Press 2 for (-)\n";
        cout << "Press 3 for (*)\n";
        cout << "Press 4 for (/)\n";
        cout << "Press 5 for (%)\n";
        cout << "Press 0 to Exit\n";
        cout << "Enter your choice: ";
        cin >> Choice;

        int a, b;
        float x, y;

        switch (Choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << Addition(a, b) << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << Subtraction(a, b) << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << Multiplication(a, b) << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> x >> y;
                cout << "Result: " << Division(x, y) << endl;
                break;

            case 5:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << Modular(a, b) << endl;
                break;

            case 0:
                cout << "Exiting the program..." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (Choice != 0);

    return 0;
}