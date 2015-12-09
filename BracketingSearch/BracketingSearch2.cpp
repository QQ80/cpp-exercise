//  BracketingSearch2
//
//
//  QQ80's attempt at ..\12974.txt "BracketingSearch*"
//#include <cstdio>
#include <cstdlib>#include <iostream>
using namespace std;
#include <ctime>int RNG(int lowest, int highest)  //Random Number Generator{    srand((unsigned) time(0));    lowest++;highest--;    int range=(highest-lowest)+1;    return lowest+int(range*rand()/(RAND_MAX + 1.0));}
int main()
{
    int ranNum = RNG(0, 101);    cout << "Guess a number from 1 to 100: ";    int userNum;    int tries = 0;    for(;;)    {        cin >> userNum;        if (userNum > ranNum)        {            cout << "too high" << endl;        }        else if (userNum < ranNum)        {            cout << "too low" << endl;        }        else if (userNum == ranNum)        {            break;        }        ++tries;    }    cout << "That took " << tries << " tries." << endl;
    return 0;
}
