#include <iostream>
using namespace std;

int main(){
    setlocale (LC_ALL,"RU");
    int a;
    cout << "Введите число: \n"; cin >> a;
    if ( a%3==0 && a%5==0)
    cout<<"Делится";
    else
    cout<<"Не делится";
    return 0;
}
