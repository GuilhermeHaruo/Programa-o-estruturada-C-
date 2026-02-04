#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;


struct Pessoa {
    string nome;
    float peso;
    float altura;
};


float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

int main() {
    int N;


    cout << "Digite o numero de pessoas para calcular o IMC: ";
    cin >> N;


    vector<Pessoa> pessoas(N);


    for (int i = 0; i < N; i++) {
        cout << "\nDados da pessoa " << i+1 << ":\n";
        cout << "Nome: ";
        cin.ignore();
        getline(cin, pessoas[i].nome);
        cout << "Peso (em kg): ";
        cin >> pessoas[i].peso;
        cout << "Altura (em metros): ";
        cin >> pessoas[i].altura;
    }


    cout << "\nResultado do IMC:\n";
    for (int i = 0; i < N; i++) {
        float imc = calcularIMC(pessoas[i].peso, pessoas[i].altura);
        cout << "Nome: " << pessoas[i].nome << endl;
        cout << "IMC: " << fixed << setprecision(2) << imc << endl;
        cout << endl;
    }

    return 0;
}
