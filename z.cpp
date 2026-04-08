#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // задача 1a: Вычислить сумму ряда
    double sum = 0.0;
    for (int n = 1; n <= 25; n++) {
        sum = sum + (pow(-1, n) / (n * (n + 1)));
    }
    cout << "Сумма ряда (1a): " << sum << endl;

    // задача 1b: найти максимальное значение и его номер среди первых 25 элементов
    double max_u = -1.0;
    int max_index = 0;
    for (int i = 1; i <= 25; i++) {
        double u = i * i * exp(-0.2 * i);
        if (u > max_u) {
            max_u = u;
            max_index = i;
        }
    }
    cout << "Максимальное значение (1b): " << max_u << endl;
    cout << "Номер элемента (1b): " << max_index << endl;

    // задача 1c: вычислить сумму для x= 2 с оптимизацией
    double s = 0.0;
    double a = -2;
    int i = 1;
    while (abs(a) > 1e-10) {
        s += a;
        i++;
        a = -a * 2 * 2 * (i - 1) / (2.0 * i * i * (2 * i + 1));
    }
    cout << "Сумма ряда (1c): " << s << endl;

    // задача 1d: определить наименьший номер элемента последовательности, где A_n > 100
    int A0 = 1, A1 = 1, A2;
    int n = 1;
    do {
        A2 = A1 + A0;
        A0 = A1;
        A1 = A2;
        n++;
    } while (A2 <= 100);

    cout << "Наименьший номер элемента (1d), для которого A_n > 100: " << n << endl;

    return 0 ;
}


