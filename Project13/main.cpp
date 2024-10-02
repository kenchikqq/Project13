#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double distance; 
    double time;     

    
    cout << "Введите расстояние до аэропорта (в километрах): ";
    cin >> distance;

    cout << "Введите время, за которое нужно доехать (в часах): ";
    cin >> time;

    
    if (time <= 0) {
        cout << "Время должно быть больше нуля." << endl;
        return 1; // Выходим из программы с кодом ошибки
    }

    
    double speed = distance / time;

   
    cout << "Вам нужно ехать со скоростью " << speed << " км/ч." << endl;

    return 0;
}