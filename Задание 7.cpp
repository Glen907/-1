#include <iostream>
using namespace std;

int main(){
    setlocale (LC_ALL, "RU");
    cout <<"Введите число: ";
    double N;
    cin >> N;
    double sum=0;
    for (unsigned long int i = 1; i < N; i++)
        if (N/i ==int (N/i) )
            sum += i;
    
    if (sum == N)
        cout <<"Число совершенное";
    else
        cout <<"Число НЕ совершенное";

    return 0;
}
