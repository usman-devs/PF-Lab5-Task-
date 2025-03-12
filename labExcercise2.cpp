#include <iostream>
using namespace std;

int main(){
    //prgram to do division
    float a,b;
    float result;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if(b!=0){
        result=a/b;
    }else{
        cout << "B shouldn't be zero.";
    }
    cout << "Result: "<<result<<  endl;
    return 0;
}