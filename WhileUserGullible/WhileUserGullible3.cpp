//  WhileUserGullible3
//
//
//  QQ80's attempt at ..\12974.txt "While( user == gullible )**"
//
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main()
{
    int nUserNum;
    int nIterations = -1; //So that it increments to 0
    do
    {
        nIterations++;
        cout << "Enter any number other than " << nIterations << ":\n";
        cin >> nUserNum;
    }
    while(nUserNum != nIterations && nIterations < 10);

    if(nIterations == 10)
    {
        cout << "Wow, you're more patient then I am, you win.\n";
    }

    else
    {
        cout << "Hey! you weren't supposed to enter " << nIterations << "!\n";
    }
    system("PAUSE");
    return 0;
}
