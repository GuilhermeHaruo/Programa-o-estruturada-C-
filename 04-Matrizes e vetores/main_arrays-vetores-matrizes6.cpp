#include <iostream>
using namespace std;

int main() {

    int matriz[6][6];

    cout << "Digite 36 numeros para preencher a matriz 6x6:" << endl;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }


    cout << "A matriz 6x6 e:" << endl;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }


    cout << "A diagonal secundaria e:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << matriz[i][5 - i] << " ";
    }
    cout << endl;

    return 0;
}
