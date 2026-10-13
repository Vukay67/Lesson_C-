#include <iostream>

int main()
{
    std::cout<<"Abdumanapov Muhammed." << " Сосед с лева Асан." << " Препод Татьяна ";
    std::cout<<std::endl;
    
    int x, y, z, ans;
    std:: cout<<"Введите значения 'x': ";
    std:: cin>>x;
    std:: cout<<"Введите значения 'y': ";
    std:: cin>>y;
    z = 3 * x * y;
    
    std::cout<<"Значение произведения = " << z; 
    std::cout<<std::endl;
    
    std::cout<<"Введите значения 'x': ";
    std::cin>>x;
    std::cout<<"Введите значения 'y': ";
    std::cin>>y;
    
    ans = 4*x - 5*y + (x + y) * 15 * x;
    std::cout<<" 4x - 5y + (x + y) * 15 * x = "<<ans;
    return 0;
}