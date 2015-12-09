//  BracketingSearch3
//
//
//  QQ80's attempt at ..\12974.txt "BracketingSearch**"
//#include <cstdio>
#include <cstdlib>#include <iostream>
using namespace std;
#include <ctime>int RNG(int lowest, int highest)  //Random Number Generator{    srand((unsigned) time(0));    lowest++;highest--;    int range=(highest-lowest)+1;    return lowest+int(range*rand()/(RAND_MAX + 1.0));}
int main()
{
    int userNum;    cout << "Let me guess a number from 1 to 100 from you: ";    cin >> userNum;    int tries = 0;    char userInput[9];    for(;;)    {        cout << RNG(0, 101) << endl;        cout << "Is that too high or too low?" << endl;        cin >> userInput;        if (userInput == "too high")        if (userInput == "too low")        ++tries;    }    cout << "That took " << tries << " tries." << endl;
    return 0;
}
