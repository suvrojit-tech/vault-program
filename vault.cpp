#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() 
{
    int pass;
    int input;
    int a=3;
    cout<<"please set password: ";
    cin>>pass;
    cout<<"please enter password: ";
    cin>>input;
    while(input!=pass && a>0)
    {
        cout<<"Wrong password, "<<a<<" attempt left. try again.\nplease enter password: ";
        a--;
        cin>>input;
    }
    if(pass==input)
    {
        cout<<"welcome user";
    }
    else
    {
        cout<<"Maximum attempts reached! Device locked for 5 seconds.\n";
        this_thread::sleep_for(chrono::seconds(5));
    }
    return 0;
}