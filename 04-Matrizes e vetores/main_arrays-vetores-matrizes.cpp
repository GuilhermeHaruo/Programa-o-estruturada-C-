#include <iostream>

using namespace std;

int main()
{
    int matriz [3][3];
    int i,j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << " Digite o valor da matriz: [" << i << " , " << j << "]: " <<endl;
            cin >> matriz [i][j];
        }
    }
     cout << "A matriz digitada é:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j == 0 && i == 0)
                cout << "[ "; // Colchete antes do primeiro valor
            cout << matriz[i][j];
            if (j < 2)
                cout << ", "; // Vírgula entre os valores
            if (j == 2 && i == 2)
                cout << " ]"; // Colchete depois do último valor
        }
        cout << endl; // Nova linha após cada linha da matriz
    }
    return 0;
}
