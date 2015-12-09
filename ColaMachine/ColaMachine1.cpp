//  ColaMachine1
//
//
//  QQ80's attempt at ..\12974.txt "Cola Machine"
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    cout << "This cola machine sells 5 beverages:\n"
         << "1 - Coke\n"
         << "2 - Water\n"
         << "3 - Sprite\n"
         << "4 - Apple juice\n"
         << "5 - Orange juice\n";

    int nBevNo;
    cout << "Enter your choice of beverage (1-5):";
    cin >> nBevNo;

    cout << "Here's your ";
    switch (nBevNo)
    {
    case 1:
        cout << "coke.";
        break;

    case 2:
        cout << "water.";
        break;

    case 3:
        cout << "sprite.";
        break;

    case 4:
        cout << "apple juice.";
        break;

    case 5:
        cout << "orange juice.";
        break;

    default:
        cout << "NOTHING! YOU'RE SUPPOSED TO TYPE A NUMBER FROM 1 - 5!";
        break;
    }
    cout << "\nThank you.\n";
    system("PAUSE");
    return 0;
}
