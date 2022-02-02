#include <fstream>
#include <iostream>
using namespace std;

int sum (int a, int b)
{
    return a+b;
}

int diff (int a, int b)
{
    return a-b;
}

int mult (int a, int b)
{
    return a*b;
}

int divi (int a, int b)
{
    return a/b;
}

int main()
{
    int a, b, res;
    char c;
    cin >> a >> c >> b;

    if (c == '+')
        res = sum(a, b);
    else if (c == '-')
        res = diff(a, b);
    else if (c == '*')
        res = mult(a, b);
    else if (c == '/')
        res = divi(a, b);

    cout << res << endl;

    return 0;
}