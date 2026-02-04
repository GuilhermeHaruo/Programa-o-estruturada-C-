#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;


struct PET {
    string nomeAnimal;
    string especie;
    string raca;
    char sexo;
    int idade;
    string nomeDono;
    string rgDono;
    string telefoneDono;
};

int main() {
    int N;
    cout << "Digite o numero de PETs para cadastrar: ";
    cin >> N;


    vector<PET> pets(N);


    for (int i = 0; i < N; i++) {
        cout << "\nCadastro do PET " << i+1 << ":\n";

        cout << "Nome do animal: ";
        cin.ignore();
        getline(cin, pets[i].nomeAnimal);

        cout << "Especie: ";
        getline(cin, pets[i].especie);

        cout << "Raca: ";
        getline(cin, pets[i].raca);

        cout << "Sexo (M/F): ";
        cin >> pets[i].sexo;

        cout << "Idade: ";
        cin >> pets[i].idade;

        cout << "Nome do dono: ";
        cin.ignore();
        getline(cin, pets[i].nomeDono);

        cout << "RG do dono: ";
        getline(cin, pets[i].rgDono);

        cout << "Telefone do dono: ";
        getline(cin, pets[i].telefoneDono);
    }


    ofstream arquivo("pets.txt");


    if (arquivo.is_open()) {

        for (int i = 0; i < N; i++) {
            arquivo << "Cadastro do PET " << i+1 << ":\n";
            arquivo << "Nome do animal: " << pets[i].nomeAnimal << endl;
            arquivo << "Especie: " << pets[i].especie << endl;
            arquivo << "Raca: " << pets[i].raca << endl;
            arquivo << "Sexo: " << pets[i].sexo << endl;
            arquivo << "Idade: " << pets[i].idade << endl;
            arquivo << "Nome do dono: " << pets[i].nomeDono << endl;
            arquivo << "RG do dono: " << pets[i].rgDono << endl;
            arquivo << "Telefone do dono: " << pets[i].telefoneDono << endl;
            arquivo << endl;
        }
        cout << "Dados dos PETs foram salvos no arquivo pets.txt\n";

        arquivo.close();
    } else {
        cout << "Erro ao abrir o arquivo pets.txt\n";
    }

    return 0;
}
