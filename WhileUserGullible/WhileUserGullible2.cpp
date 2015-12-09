//  WhileUserGullible2
//
//
//  QQ80's attempt at ..\12974.txt "While( user == gullible )*"
//
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main()
{
    int nUserNum;
    int nIterations = 0;
    do
    {
        cout << "Enter any number other than 5:" << endl;
        cin >> nUserNum;
        nIterations++;
    }
    while(nUserNum != 5 && nIterations < 10);

    if(nIterations == 10)
    {
        cout << "Wow, you're more patient then I am, you win.\n";
    }

    else
    {
        cout << "Hey! you weren't supposed to enter 5!\n";
    }
    system("PAUSE");
    return 0;
}
