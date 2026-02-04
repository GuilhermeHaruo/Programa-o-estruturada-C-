#include <iostream>
using namespace std;

int main() {

    float matriz[4][5];
    float matrizMetade[4][5];


    cout << "Digite 20 numeros reais para preencher a matriz 4x5:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }


    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            matrizMetade[i][j] = matriz[i][j] / 2.0;
        }
    }


    cout << "A matriz original 4x5 e:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }


    cout << "A matriz com a metade dos valores e:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrizMetade[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
