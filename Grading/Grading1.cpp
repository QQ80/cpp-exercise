//  Grading1 - Interprets if the user inputs perfect score
//             and outputs it to the user
//
//  QQ80's attempt at ..\12974.txt "Grading Program"
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

    if (nScore == 100)
    {
        cout << "Congratulations! You got a perfect score!\n";
    }
    else
    {
        cout << "Try harder next time to get a perfect score!\n";
    }

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}
