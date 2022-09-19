#include <iostream>

using namespace std;

enum months
{
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {

    setlocale(LC_ALL, "Russian");

    int t;

    do {

        cout << "Введите номер месяца(1-12): ";
        cin >> t;

        switch (t) 
        {
        case static_cast<int>(months::JANUARY):
            cout << "Январь" << "\n";
            break;
        case months::FEBRUARY:
            cout << "Февраль" << "\n";
            break;
        case months::MARCH:
            cout << "Март" << "\n";
            break;
        case months::APRIL:
            cout << "Апрель" << "\n";
            break;
        case months::MAY:
            cout << "Май" << "\n";
            break;
        case months::JUNE:
            cout << "Июнь" << "\n";
            break;
        case months::JULY:
            cout << "Июль" << "\n";
            break;
        case months::AUGUST:
            cout << "Август" << "\n";
            break;
        case months::SEPTEMBER:
            cout << "Сентябрь" << "\n";
            break;
        case months::OCTOBER:
            cout << "Октярбрь" << "\n";
            break;
        case months::NOVEMBER:
            cout << "Ноябрь" << "\n";
            break;
        case months::DECEMBER:
            cout << "Декабрь" << "\n";
            break;
        default:
            cout << "Неправильный номер!" << "\n";
            break;
        }
    } while (t != 0);


    cout << "До свидания!" << "\n";
}