#include <iostream>

using namespace std;

enum class months
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
        case statis_cast<int>(months::FEBRUARY):
            cout << "Февраль" << "\n";
            break;
        case static_cast<int>(months::MARCH):
            cout << "Март" << "\n";
            break;
        case static_cast<int>(months::APRIL):
            cout << "Апрель" << "\n";
            break;
        case static_cast<int>(months::MAY):
            cout << "Май" << "\n";
            break;
        case static_cast<int>(months::JUNE):
            cout << "Июнь" << "\n";
            break;
        case static_cast<int>(months::JULY):
            cout << "Июль" << "\n";
            break;
        case static_cast<int>(months::AUGUST):
            cout << "Август" << "\n";
            break;
        case static_cast<int>(months::SEPTEMBER):
            cout << "Сентябрь" << "\n";
            break;
        case static_cast<int>(months::OCTOBER):
            cout << "Октярбрь" << "\n";
            break;
        case static_cast<int>(months::NOVEMBER):
            cout << "Ноябрь" << "\n";
            break;
        case static_cast<int>(months::DECEMBER):
            cout << "Декабрь" << "\n";
            break;
        default:
            cout << "Неправильный номер!" << "\n";
            break;
        }
    } while (t != 0);


    cout << "До свидания!" << "\n";
}