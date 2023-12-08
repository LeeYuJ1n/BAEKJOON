#include <iostream>

using namespace std;

int main()
{
    int number1 = 0, number2 = 0;

    cin >> number1 >> number2;

    int number2_100 = number2 / 100;
    int number2_10 = (number2 / 10) % 10;
    int number2_1 = number2 % 10;

    int result1 = number1 * number2_1;
    int result2 = number1 * number2_10;
    int result3 = number1 * number2_100;
    
    cout << result1 << endl;
    cout << result2 << endl;
    cout << result3 << endl;
    cout << result1 + result2 + result3 << endl;
}