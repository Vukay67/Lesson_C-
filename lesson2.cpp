#include <iostream>
using namespace std;

int main()
{
    int x = 2, y = 2;
    x = x-5;
    y -= 5;
    cout<<x<<y;
    x = x+5;
    y += 5;
    cout<<x<<y;
    x = x*5;
    y *= 5;
    cout<<x<<y;
    x = x%5;
    y %= 5;
    cout<<x<<y;

    cout<<x++; // выведит 2
    cout<<x;   // теперь 3
    cout<<x--;
    cout<<x;

    cout<<++x; // выведит 3
    cout<<--x;


    return 0;
}