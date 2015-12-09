//  Grading2 - Converts a score from user into
//             grade A and outputs it to the user
//
//  QQ80's attempt at ..\12974.txt "Grading Program*"
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    int nScore;
    cout << "Enter score here (1-100):";
    cin >> nScore;

    if (nScore > 90)
    cout << "Congratulations! You scored an A."
         << endl;
    else
    cout << "Try harder next time to get an A!"
         << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}

