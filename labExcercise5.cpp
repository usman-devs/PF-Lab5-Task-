#include <iostream>
using namespace std;

int main(){
    //program to check greater number
   int num1, num2;
   cout << "Enter two numbers: ";
   cin >> num1>> num2;
   if(num1>num2){
    cout << "The maximum number is: "<< num1<<endl;
   }else{
    cout << "The maximum number is: "<< num2<<endl;
   }
    return 0;
}