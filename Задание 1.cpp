#include <iostream>
using namespace std;

int main(){
    setlocale (0,"");
    int num1;
    
    cout <<"Введите число: "; cin >> num1;
    int num2 = 2;
    while (num1 % num2 !=0); //Логическое отрицание (!=0)
    {
        num2++;
    }
    if (num1 == num2 ){
        cout<<"Числог не простое ";
    }
    else {
        cout<<"Число простое ";
    }
    
    return 0;
}
