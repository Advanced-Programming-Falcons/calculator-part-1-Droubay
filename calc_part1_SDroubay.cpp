#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    
    char keep_going = 'Y';

    while(keep_going == 'Y'){ 
        int num1;
        cout << "First number: ";
        cin >> num1;

        char operation;
        cout << "Enter operation[+,-,*,/,^]:";
        cin >> operation;

        int num2;
        cout << "Second number: ";
        cin >> num2;
            
            float answer = 0;
            if (operation == '+'){
                answer = num1 + num2;
                cout << answer;
            }
            else if (operation == '-'){
                answer = num1 - num2;
                cout << answer;
            }
            else if (operation == '*'){
                answer = num1 * num2;
                cout << answer;
            }
            else if (operation == '/'){
                answer = num1/num2;
                cout << answer;
            }
            else if (operation == '^'){
                answer = pow(num1,num2);
                cout << answer;
            }
        cout << endl<< "Would you like to keep going? [Y,n]"<< endl;
        cin >> keep_going;

    }
    return 0;
}
