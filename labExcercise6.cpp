#include <iostream>
using namespace std;
int main(){
    //calculator
    int num1, num2, opt;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    //display menu for selection to user
    cout << "========== Choose an Operation:==========\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cin >> opt;

    switch (opt)
    {
    case 1:
        cout << "Addition: "<< num1+num2<<endl;
        break;
    case 2:
        cout << "Subtraction: "<< num1-num2<<endl;
        break;
    case 3:
        cout << "Multiplication: "<< num1*num2<<endl;
        break;
    case 4:
        if(num2 == 0){
            cout << "Number 2 shouldn't be zero."<<endl;
            break;
        }else{
            cout << "Division: "<< num1/num2<<endl;
            break;
        }
    default:
        cout << "Please enter valid option.";
    }
    
    return 0;
}