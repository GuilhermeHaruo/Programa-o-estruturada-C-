#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao;

    cout << "Escolha um time" <<endl;
    cout << "1 - São Paulo" <<endl;
    cout << "2 - Santos" <<endl;
    cout << "3 - corinthians" <<endl;
    cout << "4 - Palmeiras" <<endl;
    cout << "Digite o número desejado ao escolher o time" <<endl;
    cin >> opcao;

    switch(opcao){
    case 1:
        cout <<"Você escolheu o São Paulo!!" <<endl;
        break;
    case 2:
        cout <<"Você escolheu o Santos!!" <<endl;
        break;
    case 3:
        cout <<"Você escolheu o Corinthians!!" <<endl;
        break;
    case 4:
        cout <<"Você escolheu o Palmeiras!!" <<endl;
        break;

    default:
        cout <<"Opção inválida, escolha um número de 1 a 4" <<endl;
        break;
    }


    return 0;
}
