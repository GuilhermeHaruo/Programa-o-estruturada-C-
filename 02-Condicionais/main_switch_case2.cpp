#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    float num1,num2;
    char operacao;

    cout <<"Escolha a operação desejada: " <<endl;
    cout <<" + Para soma" <<endl;
    cout <<" - Para subtração" <<endl;
    cout <<" / Para divisão" <<endl;
    cout <<" * Para multiplicação" <<endl;
    cout <<" s para encerrar programa"<< endl;
    cin >> operacao;

    switch (operacao){

    case '+' :
        cout << "Digite dois números para somar: ";
        cin >> num1 >> num2;
        cout << "O resultado da soma é: " << num1 + num2 <<endl;
        break;
    case '-' :
        cout << "Digite dois números para subtrair: ";
        cin >> num1 >> num2;
        cout << "O resultado da subtração é: " << num1 - num2<< endl;
        break;
    case '/':
        cout <<"Digite dois números para dividir: ";
        cin >> num1 >> num2;
        if (num2 != 0)
            cout << "O resultado da divisão é: " << num1 / num2 <<endl;
        else
            cout << "Não é possível dividir por zero" <<endl;
        break;
    case '*':
        cout <<"Digite dois números para multiplicar: ";
        cin >> num1 >> num2;
        cout << "O resultado da multiplicação é: " << num1 * num2 <<endl;
        break;
    case 's':
        cout << "O programa foi encerrado!";
        break;

    default:
        cout <<"Opção inválida, escolha alguma das operações" <<endl;
        break;
      }

    return 0;
}
