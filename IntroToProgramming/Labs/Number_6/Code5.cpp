#include <iostream>
#include <locale.h>
using namespace std;

float a = 2.0;
float b = -3.0;
float c = 1.0;

float kv_uravneniye(float x)
{
    return a * x * x + b * x + c;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    
    float x;
    cout << "Введите значение переменной x: " << endl; 
    cin >> x;
    float result = kv_uravneniye(x);
    cout << "Значение квадратного трехчлена при x = " << x << ": " << result << endl;
}
