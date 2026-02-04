#include <iostream>

using namespace std;

int main()
{
    int M;

    cout << "Digite o tamanho da matriz (M x M): ";
    cin >> M;

    int matriz[M][M];

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << "Digite o valor da matriz [" << i << " , " << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    cout << "Os números da diagonal principal são:" << endl;
    for (int i = 0; i < M; i++)
    {
        cout << matriz[i][i] << " ";
    }
    cout << endl;

    return 0;
}
