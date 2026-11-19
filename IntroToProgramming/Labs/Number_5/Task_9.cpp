#include <iostream>
#include <cmath>
#include <locale>
using namespace std;


double dlina(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
//  1
double ploshad_coords(double x1, double y1, double x2, double y2, double x3, double y3) {
    return 0.5 * abs((x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3));
}
//  2
double ploshad_sides(double a, double b, double c) {
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
//  3
double perimeter_coords(double x1, double y1, double x2, double y2, double x3, double y3) {
    double a = dlina(x1, y1, x2, y2);
    double b = dlina(x2, y2, x3, y3);
    double c = dlina(x3, y3, x1, y1);
    return a + b + c;
}
//  4
double perimeter_sides(double a, double b, double c) {
    return a + b + c;
}
//  5
double radius_circle(double a, double b, double c) {
    double S = ploshad_sides(a, b, c);
    if (S == 0) return 0;
    return (a * b * c) / (4.0 * S);
}

int main() {
    setlocale(LC_ALL, "Russian");

    int n{ 0 };

    double x1 = 0.0, y1 = 0.0;
    double x2 = 4.0, y2 = 0.0;
    double x3 = 0.0, y3 = 3.0;

    double sideA = 7.0;
    double sideB = 24.0;
    double sideC = 25.0;

    cout << "1. Функция пользователя для вычисления площади треугольника, заданного координатами его вершин на плоскости; " << endl;
    cout << "2. Функция пользователя для вычисления площади треугольника, заданного длинами его сторон; " << endl;
    cout << "3. Функция пользователя для вычисления периметра треугольника, заданного координатами его вершин на плоскости; " << endl;
    cout << "4. Функция пользователя для вычисления периметра треугольника, заданного длинами его сторон; " << endl;
    cout << "5. Функция пользователя для вычисления радиуса описанной окружности треугольника, заданного длинами его сторон." << endl;

    cout << "Какой пункт вы хотите протестировать?" << endl; cin >> n;

    if (n == 1) {
        cout << "\n1. Тест по координатам вершин: A(0,0), B(4,0), C(0,3)" << endl;
        cout << "Площадь треугольника:  " << ploshad_coords(x1, y1, x2, y2, x3, y3) << endl;
    }
    else if (n == 2) {
        cout << "\n2. Тест по длинам сторон: a=7, b=24, c=25" << endl;
        cout << "Площадь треугольника:  " << ploshad_sides(sideA, sideB, sideC) << endl;
    }
    else if (n == 3) {
        cout << "\n3. Тест по координатам вершин: A(0,0), B(4,0), C(0,3)" << endl;
        cout << "Периметр треугольника: " << perimeter_coords(x1, y1, x2, y2, x3, y3) << endl;
    }
    else if (n == 4) {
        cout << "\n4. Тест по длинам сторон: a=7, b=24, c=25" << endl;
        cout << "Периметр треугольника: " << perimeter_sides(sideA, sideB, sideC) << endl;
    }
    else if (n == 5) {
        cout << "\n5. Тест по длинам сторон: a=7, b=24, c=25" << endl;
        cout << "Радиус описанной окр.: " << radius_circle(sideA, sideB, sideC) << endl;
    }
    else {
        cout << "Неверный пункт меню." << endl;
    }

    cout << "\n================================================" << endl;

    system("pause");
    return 0;
}