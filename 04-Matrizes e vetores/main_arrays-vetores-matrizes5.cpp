#include <iostream>
#include <locale>
using namespace std;

int main() {

    setlocale(LC_ALL,"Portuguese");
    int matriz[4][4];


    cout << "Digite 16 números para a matriz 4x4:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Matriz [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }


    cout << " matriz 4x4 :" << endl;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
