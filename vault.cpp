#include <iostream>
using namespace std;

int main() 
{
    int pass=123456;
    int input;
    cout<<"please enter password: ";
    cin>>input;
    if(pass==input)
    {
        cout<<"welcome user";
    }
    else
    {
        cout<<"wrong password";
    }
    return 0;
}