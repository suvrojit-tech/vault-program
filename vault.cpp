#include <iostream>
#include <thread>
#include <chrono>
#include <fstream>
using namespace std;
int vault()
{
    int pass;
    do
    {
        cout<<"enter a six digit password";
        cin>>pass;
        if(pass<100000||pass>999999)
        {
            cout<<"invalid password try again";
        }
    }
    while (pass<100000||pass>999999);
    
    ofstream outFile("password.txt");
    if(outFile.is_open())
    {
        outFile<<pass;
        outFile.close();
    }
    system("cls");
    return pass;
    
}
int main() 
{
    int pass;
    int input;
    int a=3;
    ifstream infile("password.txt");
    if (!infile.is_open())
    {
        pass=vault();
    }
    else
    {
        infile>> pass;
        infile.close();
    }
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