#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int age, tr=250, fl=500;
    cout<<"Введите возраст: ";
    cin>>age;
    age<=18?cout<<tr:cout<<fl;
    cout<<endl;


    /* 
    Задача на тернарный (условный) оператор:
        Написать программу подходитли рост человаке для атракциона 
        Если рост меньше 184см человек допускается на атракцион иначе не допуск
    */

    double height, max=184;
    cout<<"Введите рост: ";
    cin>> height;
    height<=max?cout<<"Вы можете прокатится на атраксионе":cout<<"Вы не можете прокатится на атраксионе";


    return 0;
}