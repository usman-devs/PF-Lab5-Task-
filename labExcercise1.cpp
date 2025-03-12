#include <iostream>
using namespace std;

int main(){
    //program to check even or odd
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(num%2==0){
        cout << "Even Number. "<< endl;
    }else{
        cout << "Odd Number."<<endl;
    }
    return 0;
}