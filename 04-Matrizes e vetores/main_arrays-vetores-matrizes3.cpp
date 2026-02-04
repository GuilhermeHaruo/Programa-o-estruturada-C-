#include <iostream>
#include <locale>
#define DIM 5
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int vetor [DIM] = {10,20,30,40,50};
    int vetor1[] = {10,20,30,40,50,60,-1};
    int i;

    cout << "Vetor com caminho pré-definido" << endl << endl;
    for (i=0; i < DIM; i++)
    {
        cout << "Vetor posição " << i << " = " << vetor[i] << endl;
    }
    cout << endl;
    cout << "Vetor terminado por -1" << endl << endl;
    for (i =0; vetor[i] > 0; i++)
    {
        cout << "Vetor na posição " << i << " = " << vetor[i] << endl;
    }

    return 0;
}
