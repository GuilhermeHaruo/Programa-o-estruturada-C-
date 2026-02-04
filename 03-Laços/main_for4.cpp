#include <iostream>
#include <locale>
#include <string>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    string nome;
    int  ano, soma = 0, idade, i;

    for(i = 0; i < 5;++i){

    cout << "Digite seu nome:  " <<endl;
    cin >> nome;
    cout << "Digite seu ano de nascimento:  " <<endl;
    cin >> ano;

    int idade = 2024 - ano;
    soma += idade;
    }

    cout << "A soma das idades é de:  " << soma <<endl;


    return 0;
}
