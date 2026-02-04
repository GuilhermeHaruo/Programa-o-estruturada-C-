#include <iostream>

using namespace std;

int main() {
    int habitantes = 15, filhos, somaFilhos = 0;
    double salario, somaSalario = 0,maiorSalario = 0;

    cout << "Digite o salário e o número de filhos para cada habitante:" << endl;

    for (int i = 0; i < habitantes; ++i) {
        cout << "Habitante " << i + 1 << ":" << endl;
        cout << "Salário: ";
        cin >> salario;
        cout << "Número de filhos: ";
        cin >> filhos;


        somaSalario += salario;
        somaFilhos += filhos;


        if (salario > maiorSalario) {
            maiorSalario = salario;
        }
    }


    double mediaSalario = somaSalario / habitantes;


    double mediaFilhos = static_cast<double>(somaFilhos) / habitantes;


    cout << "Média do salário da população: " << mediaSalario << endl;
    cout << "Média do número de filhos: " << mediaFilhos << endl;
    cout << "Maior salário: " << maiorSalario << endl;

    return 0;
}

