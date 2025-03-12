#include <iostream>
using namespace std;

int main(){
    //program to do sum of n natural numbers
    int n, sum;
    cout << "Enter a number: ";
    cin >> n;
    for(int i =0;i<=n;i++){
        sum +=i;
    }
    cout << "Sum of first "<< n<< " natural numbers is: "<< sum<<endl;
    return 0;
}