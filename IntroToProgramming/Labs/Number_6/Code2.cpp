#include <iostream>
#include <locale.h>
using namespace std;

float ploshad_trapecii(float a, float b, float h)
{
    return ((a + b) / 2.0f) * h;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    float os1, os2, h1, s1;
    float os1_2, os2_2, h2, s2;
    float os1_3, os2_3, h3, s3;

    float summa_ploshadey;

    cout << "Введите первое основание трапеции A1 B1 C1 D1: " << endl; cin >> os1;
    cout << "Введите второе основание трапеции A1 B1 C1 D1: " << endl; cin >> os2;
    cout << "Введите высоту трапеции A1 B1 C1 D1: " << endl; cin >> h1;
    s1 = ploshad_trapecii(os1, os2, h1);
    cout << "Площадь: " << s1 << endl << endl;

    cout << "Введите первое основание трапеции A2 B2 C2 D2: " << endl; cin >> os1_2;
    cout << "Введите второе основание трапеции A2 B2 C2 D2: " << endl; cin >> os2_2;
    cout << "Введите высоту трапеции A2 B2 C2 D2: " << endl; cin >> h2;
    s2 = ploshad_trapecii(os1_2, os2_2, h2);
    cout << "Площадь: " << s2 << endl << endl;

    cout << "Введите первое основание трапеции A3 B3 C3 D3: " << endl; cin >> os1_3;
    cout << "Введите второе основание трапеции A3 B3 C3 D3: " << endl; cin >> os2_3;
    cout << "Введите высоту трапеции A3 B3 C3 D3: " << endl; cin >> h3;
    s3 = ploshad_trapecii(os1_3, os2_3, h3);
    cout << "Площадь: " << s3 << endl << endl;

    summa_ploshadey = s1 + s2 + s3;
    cout << "Сумма площадей всех трех трапеций равна: " << summa_ploshadey << endl;
}
