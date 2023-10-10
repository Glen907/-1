#include <iostream>
using namespace std;
 
int main () {
    int n, i = 0;
    cout << "Является ли введеное число степенью двойки: \n"; cin >> n;
    while (n) {
        i += n % 2;
        n /= 2;
    }
    if (i == 1){
        cout << "Да, является!\n";
    } else {
        cout << "Нет, не является!\n"; 
    }
    return 0;
}