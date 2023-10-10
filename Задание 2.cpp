#include <iostream>
using namespace std;

int main(){
    setlocale (LC_ALL, "RU");
    cout<<"Введите число: ";
    
    const char*res[] ={"Отрицательное","Положительное","Ноль"};
    int a;
    cin>>a;
    cout<<(a<0?res[0]:a>0?res[1]:res[2]);
    return 0;
}