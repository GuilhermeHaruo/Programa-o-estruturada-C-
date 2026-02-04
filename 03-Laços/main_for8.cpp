#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    double n1,n2,n3, media;
    int codigo;

    for(;;){

    cout << "Digite o código do aluno: ";
    cin >> codigo;

    if (codigo < 0){
        cout << "Programa encerrado.";
        return 1;
    }

    cout << "Digite a nota 1: ";
    cin >> n1;

    cout << "Digite a nota 2: ";
    cin >> n2;

    cout << "Digite a nota 3: ";
    cin >> n3;

    media = ( n1 *4 + n2 * 3 + n3 * 3) / ( 4 + 3 + 3);

    if ( media >= 5){
        cout << "O aluno " << codigo << " foi aprovado com nota: " << media << endl;
    } else{
        cout << "O aluno " << codigo << " foi reprovado com nota: " << media << endl;
    }
    }


    return 0;
}
