#include <iostream>
#include <Windows.h>
#include "mathfunctions.h"

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, b;
    int choice;
    MathFunctions math;

    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Выберите операцию (1 - сложение, "
            "2 - вычитание, "
            "3 - умножение, "
            "4 - деление, "
            "5 - возведение в степень): ";

    cin >> choice;
    double result = 0;

    switch (choice) {
    case 1: result = math.add(a, b);
        break;
    case 2: result = math.subtract(a, b);
        break;
    case 3: result = math.multiply(a, b);
        break;
    case 4: result = math.divide(a, b);
        break;
    case 5: result = math.power(a, b);
        break;

    default: cout << "Неверный выбор\n"; return 1;
    }

    cout << "Результат: " << result << endl;

    return 0;
}