#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int age, tr=250, fl=500;
    cout<<"˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜: ";
    cin>>age;
    age<=18?cout<<tr:cout<<fl;
    cout<<endl;


    /* 
    ˜˜˜˜˜˜ ˜˜ ˜˜˜˜˜˜˜˜˜ (˜˜˜˜˜˜˜˜) ˜˜˜˜˜˜˜˜:
        ˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜ ˜˜˜˜˜˜˜˜ ˜˜˜ ˜˜˜˜˜˜˜˜˜˜ 
        ˜˜˜˜ ˜˜˜˜ ˜˜˜˜˜˜ 184˜˜ ˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜˜˜ ˜˜ ˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜ ˜˜ ˜˜˜˜˜˜
    */

    double height, max=184;
    cout<<"˜˜˜˜˜˜˜ ˜˜˜˜: ";
    cin>> height;
    height<=max?cout<<"˜˜ ˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜˜ ˜˜ ˜˜˜˜˜˜˜˜˜˜":cout<<"˜˜ ˜˜ ˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜˜ ˜˜ ˜˜˜˜˜˜˜˜˜˜";


    return 0;
}