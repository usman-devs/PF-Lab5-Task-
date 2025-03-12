#include <iostream>
using namespace std;

int main(){
    //program to convert tempreture fahrenheit to celsius
   double fahrenheit, celsius;
   cout << "Enter tempreture in fahrenheit: ";
   cin >> fahrenheit;
   celsius =(fahrenheit-32)* 5/9;
   cout << "Temperature in Celcius: "<< celsius<<endl;
    return 0;
}