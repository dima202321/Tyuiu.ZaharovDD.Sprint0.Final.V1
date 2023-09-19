#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, z;
    cout << "Введите значения переменных x, y и z через пробел: ";
    cin >> x >> y >> z;

    double result = 5 + 2 * x - z / 3 + pow(y, 2);

    cout << "Значение выражения 5 + 2x - z/3 + y^2 равно: " << result << endl;

    return 0;
}
