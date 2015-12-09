//  WhileUserGullible1
//
//
//  QQ80's attempt at ..\12974.txt "While( user == gullible )"
//
#include <iostream>

using namespace std;

int main()
{
    int nUserNum;
    do
    {
        cout << "Enter any number other than 5:" << endl;
        cin >> nUserNum;
    }
    while(nUserNum != 5);

    cout << "Hey! you weren't supposed to enter 5!";
    return 0;
}
