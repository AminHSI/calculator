#include <iostream>

using namespace std;

int main() {

    float number1, number2;
    bool end = 1;
    char operation;

    cout << "welcome" << endl;
    while (end) {
        
        cout << "enter the first number: ";
        cin >> number1;

        cout << "choose your operation(+,-,*,/): ";
        cin >> operation;
        
        cout << "enter the second number: ";
        cin >> number2;

        switch (operation) {
            case '+' :
                cout << "result: " << number1 + number2;
                break;
            case '-' :
                cout << "result: " << number1 - number2;
                break;
            case '*' :
                cout << "result: " << number1 * number2;
                break;
            case '/' :
                if (number2 == 0) {cout << "can't devide by zero";}
                else {cout << "result: " << number1 / number2;}
                break;
            default :
                cout << "wrong input!";
                break;
        }
        
        while (1) {
            cout << "\ndo you want another operation?(y/n): ";
            cin >> operation;
            if (operation == 'n') {end = 0;break;}
            else if (operation != 'y') {cout << "wrong input!";}
            else {break;}
        }
    }
    
    return 0;
}