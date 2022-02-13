#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int sysbool = 0;
string number;

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

int power (int a, int b)
{
    int res = 1;

    for(int i = 0; i < b; i++)
        res *= a;

    return res;
}

char int_symbol(int a)
{
    char out[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','$'};
    return out[a];
}

string numsys_count (int a, int b)
{
    if(b == 1)
    {
        for(int i = 0; i < a; i++)
            number += '1';
        return number;
    }

    if (a < b)
    {
        number += int_symbol(a);
        return number;
    }

    numsys_count(a/b, b);
    number += int_symbol(a%b);
    return number;
}

string numsys (int a, int b)
{   
    number = "";
    return numsys_count(a, b);
}

#include "ftest.h"

int main()
{
    FTEST_RUN

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
    else if (c == '^')
        res = power(a, b);
    else if (c == 's')
    {
        cout << numsys(a, b) << endl;
        sysbool = 1;
    }

    if(!sysbool)
        cout << res << endl;

    return 0;
}