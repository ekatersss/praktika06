// Практика6

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    int l;
    cout << "Введите длину последовательности S (от 0 до 30): ";
    cin >> l;
    
    if (l < 0 || l>30) {
        cout << "Длина не корректна";
        return 1;
    }

    int S[30];
    int D[30];
    int R[30];

    cout << "Введите последовательность той длины, которую вы указали ранее, через пробел: ";
    for (int i = 0; i < l; ++i) {
        cin >> S[i];
        if (S[i] != 0 && S[i] != 1) {
            cout << "Ошибка. Последовательность состоит только из 0 и 1" << endl;
            return 1;
        }
    }

    D[0] = S[0];
    for (int i = 1; i < l; ++i) {
        if (S[i] == S[i - 1]) {
            D[i] = 1;
        }
        else {
            D[i] = 0;
        }
    }

    R[0] = D[0];
    for (int i = 1; i < l; ++i) {
        if (D[i] == 1) {
            R[i] = R[i - 1];
        }
        else {
            R[i] = 1 - R[i - 1];
        }
    }

    cout << "S: ";
    for (int i = 0; i < l; ++i) cout << S[i] << " ";
    cout << endl;

    cout << "D: ";
    for (int i = 0; i < l; ++i) cout << D[i] << " ";
    cout << endl;

    cout << "R: ";
    for (int i = 0; i < l; ++i) cout << R[i] << " ";
    cout << endl;

    return 0;


}
