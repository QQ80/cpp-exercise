//  Grading3 - Converts a score from user into
//             grades and outputs it to the user
//
//  QQ80's attempt at ..\12974.txt "Grading Program**"
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

    if (nScore >= 90 && nScore <= 100) //90-100
    {
        cout << "Congratulations! You scored an A."
             << endl;
    }
    else if (nScore >= 80 && nScore <= 89) //80-89
    {
        cout << "Your grade is:"
             << "B"
             << endl;
    }
    else if(nScore >= 70 && nScore <= 79) //70-79
    {
        cout << "Your grade is:"
             << "C"
             << endl;
    }
    else if(nScore >= 60 && nScore <= 69) //60-69
    {
        cout << "Your grade is:"
             << "D"
             << endl;
    }
    else if(nScore >= 0 && nScore <= 59) //0-59
    {
        cout << "Your grade is:"
             << "F"
             << endl;
    }
    else
    {
        cout << "Invalid"
             << endl;
    }
    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}

