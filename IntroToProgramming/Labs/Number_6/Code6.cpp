#include <iostream>
#include <locale.h>
#include <cmath> 
using namespace std;

float vychislit_y(float a, float b, float c)
{
    float p1 = atan(sqrt((a + b) / (c * c)));
    float p2 = pow(acos((7 + a * a) / (9 - b * b)), 2);
    float p3 = pow(2, sqrt(1 + cos(c)));
    return p1 - p2 + p3;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b, c;
    float y;

    cout << "Введите значение a: " << endl; cin >> a;
    cout << "Введите значение b: " << endl; cin >> b;
    cout << "Введите значение c: " << endl; cin >> c;
    y = vychislit_y(a, b, c);
    cout << "Значение функции y: " << y << endl;

}
