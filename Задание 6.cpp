#include <iostream>
using namespace std;

int main(){
    setlocale (0,"");
    int num;
    cout <<"Введите год: ";
    cin >> num;
    system("cls");
    if (num % 100==0){
        cout << num << " Год, вековой";
    }
    else {
        cout << num << " Год, НЕ вековой";
    }     
    return 0;
}