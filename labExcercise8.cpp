#include <iostream>
#include <thread>
#include <chrono>
using namespace std::chrono;
using namespace std::this_thread;
using namespace std;

int main(){
    //program to delay for 3 seconds
    cout << "Processing..."<< endl;
    // pause for 3 seconds
    sleep_for(seconds(3));
    cout << "Task Completed"<<endl;
    return 0;
}