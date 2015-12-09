//  ColaMachine2
//
//
//  QQ80's attempt at ..\12974.txt "Cola Machine*"
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
    if (nBevNo == 1)
        cout << "coke.";

    else if (nBevNo == 2)
        cout << "water.";

    else if (nBevNo == 3)
        cout << "sprite";

    else if (nBevNo == 4)
        cout << "orange juice.";

    else if (nBevNo == 5)
        cout << "apple juice.";

    cout << "\nThank you.\n";
    system("PAUSE");
    return 0;
}
