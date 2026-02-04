#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;


struct Pessoa {
    string nome;
    float peso;
    float altura;
    float imc;
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


        pessoas[i].imc = calcularIMC(pessoas[i].peso, pessoas[i].altura);
    }


    ofstream arquivo("imc_pessoas.txt");

    if (arquivo.is_open()) {
        arquivo << "Resultado do IMC:\n";
        for (int i = 0; i < N; i++) {
            arquivo << "Nome: " << pessoas[i].nome << endl;
            arquivo << "IMC: " << fixed << setprecision(2) << pessoas[i].imc << endl;
            arquivo << endl;


            cout << "\nNome: " << pessoas[i].nome << endl;
            cout << "IMC: " << fixed << setprecision(2) << pessoas[i].imc << endl;
            cout << endl;
        }
        cout << "Resultados salvos no arquivo imc_pessoas.txt\n";
        arquivo.close();
    } else {
        cout << "Erro ao abrir o arquivo imc_pessoas.txt\n";
    }

    return 0;
}
