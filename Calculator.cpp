#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

class BasicMath {
public:
    void performOperation(){
        int FirstNumber;
        cout << "Enter your first number: ";
        cin >> FirstNumber;       
        int SecondNumber;
        cout << "Enter your second number: ";
        cin >> SecondNumber;

        char operation;
        cout << "Enter what operation you want to perform (+, -, *, /): ";
        cin >> operation;

        switch(operation) {
            case '+':
                cout << "Addition: " << FirstNumber + SecondNumber << endl;
                break;
            case '-':
                cout << "Subtraction: " << FirstNumber - SecondNumber << endl;
                break;
            case '*':
                cout << "Multiplication: " << FirstNumber * SecondNumber << endl;
                break;
            case '/':
                if (SecondNumber != 0){
                    cout << "Division: " << FirstNumber / SecondNumber << endl;
                } else{
                    cout << "Error: Divided by zero" << endl;
                }
                break;
            default:
                cout << "Invalid choice, not an operator." << endl;
        }
    }
};

class BasicDerivative{
public:
    void performOperation(){
        int power;
        int base;
        cout << "Enter your base number: ";
        cin >> base;
        cout << "Enter your power: ";
        cin >> power;

        int newBase = base * power;
        int newPower = power - 1;

        cout << "Your original function:  f(x) = " << base << "x^" << power << endl;
        cout << "The derivative: f'(x) = " << newBase << "x^" << newPower << endl;
        
    }
};

class BasicIntegral{
public:
    void performOperation(){
    int power;
    int base;

    cout << "Enter your base number: ";
    cin >> base;
    cout << "Enter your power: ";
    cin >> power;

    float newBase = static_cast<float>(base) / power;
    int newPower = power + 1;

    cout << "Original function: f(x) = " << base << "x^" << power; 
    cout << "The integral f(x)^-1 = " << base << "/" << power << "x^" << newPower << "\n";
    cout << "This is the fraction divided: " << newBase;
    }
};

int main(){
    cout << "Welcome to Calculus Calculator! \n"
        << "This program will be able to perform the following: \n"
        << "Basic derivatives and intergrals. \n"
        << "This will also include basic addition, subtraction, division, and muliplcation. \n"
        << "Rules: \n"
        << "1. Derivatives are only single variable. Meaning you can only do it for 1, no taking derivatives of a and b. Only a.\n"
        << "2. Integrals follow the same rule for derivatives, and no number to number. \n"
        << "3. This is a very much still in development project, with more to come along the way." << endl;

        cout << "Please enter your choice on what you want to do: \n";
        int choice;
        cout << "1. Basic mathematics \n"
             << "2. Basic derivatives \n"
             << "3. Basic intergrals \n" << endl;
        cin >> choice; 

        switch (choice)
        {
        case 1:{
            BasicMath basicMath;
            basicMath.performOperation();
            break;
        }
        case 2:{
            BasicDerivative basicDerivative;
            basicDerivative.performOperation();
            break;
        
        }
        case 3:{
            BasicIntegral basicIntegral;
            basicIntegral.performOperation();
            break;
        }
        default:{
            cout << "Invalid choice" << endl;
        }
    }
    cout << "\n" << endl;
    cout << "Press Enter to exit." << endl;
    cin.ignore(10, '\n'); // Ignore any leftover characters in the input buffer
    cin.get(); // Wait for user input before closing
    return 0;
}
    
