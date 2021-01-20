#include <iostream>
#include <cmath>

using namespace std;



int main()
{
    int num1, num2;
    char op;

    cout << "Enter the First Number: ";
    cin >> num1;

    cout << "Enter Operator: ";
    cin >> op;

    cout << "Enter the Second Number: ";
    cin >> num2;
    int result;
    if (op == '+'){
        result = num1 + num2;
    } else if (op == '-'){
        result = num1 - num2;
    } else if (op == '/'){
        result = num1 / num2;
    } else if (op == '*'){
        result = num1 * num2;
    } else{
        cout << "The operator is invalid";
    }

    cout << result << endl;

    return 0;
}
