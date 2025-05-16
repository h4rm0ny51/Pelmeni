#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int roundUp(double value) {
    int intPart = static_cast<int>(value);
    if (value > intPart) {
        return intPart + 1;
    }
    return intPart;
}

int main() {
    double M, t, af, qp, qf, qt;

    cout << "Введите суточную выработку цеха (M): "; cin >> M;
    cout << "Введите время смены (t): "; cin >> t;
    cout << "Введите массовую долю фарша (af): "; cin >> af;
    cout << "Введите производительность пельменей (qp): "; cin >> qp;
    cout << "Введите производительность фарша (qf): "; cin >> qf;
    cout << "Введите производительность теста (qt): "; cin >> qt;

    if (M <= 0 || t <= 0 || af < 0 || af > 1 || qp <= 0 || qf <= 0 || qt <= 0) {
        cerr << "Ошибка: недопустимые входные данные!" << endl;
        return 1;
    }

    double Qp = M / 2 * t;
    double np = Qp / qp;

