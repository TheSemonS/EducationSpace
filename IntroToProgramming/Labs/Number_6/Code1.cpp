#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    float roomLength, roomWidth, roomHeight;
    float doorWidth, doorHeight;
    float windowWidth, windowHeight;
    float wallpaperRollWidth, wallpaperRollLength;

    cout << "Длина комнаты (м): " << endl; cin >> roomLength;
    cout << "Ширина комнаты (м): " << endl; cin >> roomWidth;
    cout << "Высота комнаты (м): " << endl; cin >> roomHeight;
    cout << "Ширина двери (м): " << endl; cin >> doorWidth;
    cout << "Высота двери (м): " << endl; cin >> doorHeight;
    cout << "Ширина окна (м): " << endl; cin >> windowWidth;
    cout << "Высота окна (м): " << endl; cin >> windowHeight;
    cout << "Ширина рулона обоев (м): " << endl; cin >> wallpaperRollWidth;
    cout << "Длина рулона обоев (м): " << endl; cin >> wallpaperRollLength;

    float wallArea = 2 * (roomLength + roomWidth) * roomHeight;
    float doorArea = doorWidth * doorHeight;
    float windowArea = windowWidth * windowHeight;
    float usableWallArea = wallArea - doorArea - windowArea;
    float wallpaperArea = wallpaperRollWidth * wallpaperRollLength;
    int rollsNeeded = static_cast<int>(usableWallArea / wallpaperArea) + 1;
    int rollwithproccent = static_cast<int>(rollsNeeded * 1.1); 
    cout << "Необходимое количество рулонов обоев: " << rollwithproccent << endl;

}
