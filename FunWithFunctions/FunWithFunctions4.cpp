//  FunWithFunctions4
//
//
//  QQ80's attempt at ..\12974.txt "FunWithFunctions***"
//#include <iostream>
using namespace std;
void half(int x){    cout << x << endl;    x /= 2;    if (x > 0)    {        half(x);    }}int product(int x, int y){    return x*y;}void say_hello(int i){    for (; i > 0; --i)    {        cout << "Hello" << endl;    }}
int main()
{
    say_hello(5);    cout << product(4, 5) << endl;    half(100);    assert(0 == 1);
    return 0;
}
