#include <iostream>
#include <locale.h>
using namespace std;

int summa_cifr(int chislo)
{
    int cifr1 = chislo / 1000;      
    int cifr2 = (chislo / 100) % 10; 
    int cifr3 = (chislo / 10) % 10;  
    int cifr4 = chislo % 10;
    return cifr1 + cifr2 + cifr3 + cifr4;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int chislo;
    int itog;
    cout << "Введите четырехзначное целое число: " << endl; cin >> chislo;
    itog = summa_cifr(chislo);
    cout << "Сумма цифр введенного числа равна: " << itog << endl;
}
