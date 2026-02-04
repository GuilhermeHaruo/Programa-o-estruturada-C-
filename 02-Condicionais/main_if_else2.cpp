#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    string nome;
    float salario, imposto;

    cout << "Digite seu nome:  " <<endl;
    getline (cin, nome);

    cout << "Digite aqui seu salário: R$  " <<endl;
    cin >> salario;

    if (salario < 2000.00){
        cout << nome << ",você tem isenção de pagamento do IRPF";
    }
    else if (salario >= 2000.00){
        imposto = salario * 0.15;
        cout << nome << ", você terá que pagar R$ " << imposto << " de IRPF" << endl;
    }
    else if ( salario >= 3000.00){
        imposto = salario * 0.20;
        cout << nome << ", você terá que pagar R$ " << imposto << " de IRPF" <<endl;
    }
    else if (salario >= 5000.00){
        imposto = salario * 0.23;
        cout << nome << ", você terá que pagar R$ " <<imposto << " de IRPF" <<endl;
    }
    else if (salario >= 10000.00){
        imposto = salario * 0.27;
        cout << nome << ", você terá que pagar R$ " <<imposto << " de IRPF" <<endl;
    }

    return 0;
}
