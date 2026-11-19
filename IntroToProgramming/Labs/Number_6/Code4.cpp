#include <iostream>
#include <locale.h>
using namespace std;

const float PI = 3.14159265359f;

float sphereVolume(float radius)
{
    return (4.0 / 3.0) * PI * radius * radius * radius;
}

float sphereSurfaceArea(float radius)
{
    return 4.0 * PI * radius * radius;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    float radius;
    cout << "Введите радиус шара: " << endl; 
    cin >> radius;
    float volume = sphereVolume(radius);
    float surfaceArea = sphereSurfaceArea(radius);
    cout << "Объем шара: " << volume << endl;
    cout << "Площадь полной поверхности шара: " << surfaceArea << endl;
}
