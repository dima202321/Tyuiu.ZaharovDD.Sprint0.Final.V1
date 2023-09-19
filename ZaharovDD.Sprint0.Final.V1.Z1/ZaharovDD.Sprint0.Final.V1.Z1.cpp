#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Введите трехзначное число: ";
    cin >> number;

    if (number < 100 || number > 999) {
        cout << "Ошибка: Введите трехзначное число." << endl;
        return 1;
    }

    int digit1 = number % 10;
    int digit2 = (number / 10) % 10;
    int digit3 = number / 100;

    int product = digit1 * digit2 * digit3;

    cout << "Произведение цифр: " << product << endl;

    return 0;
}
