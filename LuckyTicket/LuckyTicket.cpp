#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int ticketNum;
    int one_digit;
    int digit = 0;
    int secondDigit = 0;
    int count = 0;
    cout << "Введите номер вашего билетика: "; cin >> ticketNum;

    while (ticketNum != 0) {
        one_digit = ticketNum % 10;
        digit += one_digit;
        ticketNum /= 10;
        count++;
        if (count == 4) break;
    }
    while (ticketNum != 0) {
        one_digit = ticketNum % 10;
        secondDigit += one_digit;
        ticketNum /= 10;
        count++;
        if (count == 4) break;
    }
    if (digit == secondDigit) {
        cout << "Это счастливый билет!";
    }
    else {
        cout << "Повезет в следующий раз";
    }


}

