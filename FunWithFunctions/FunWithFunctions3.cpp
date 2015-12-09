//  FunWithFunctions3
//
//
//  QQ80's attempt at ..\12974.txt "FunWithFunctions**"
//#include <iostream>
using namespace std;
int product(int x, int y){    return x*y;}void say_hello(int i){    for (; i > 0; --i)    {        cout << "Hello\n";    }}
int main()
{
    say_hello(5);    cout << product(4, 5);
    return 0;
}