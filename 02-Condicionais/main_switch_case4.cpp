#include <iostream>
#include <locale>


using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int codigo, quantidade;
    double valorProduto, valorFinal;

    cout << " 100 - para Cachorro quente" <<endl;
    cout << " 101 - para Bauru simples" <<endl;
    cout << " 102 - para Bauru com ovo" <<endl;
    cout << " 103 - para Hamburguer " <<endl;
    cout << " 104 - para Cheeseburguer" <<endl;
    cout << " 105 - para Refrigerante lata" <<endl;
    cout << " 106 - para Água" <<endl <<endl;


    cout << "Digite o código do produto: ";
    cin >>codigo;

    switch(codigo){
       case 100:
           valorProduto = 9.20;
           break;

       case 101:
           valorProduto = 12.00;
           break;

       case 102:
           valorProduto = 13.00;
           break;

       case 103:
           valorProduto = 10.00;
           break;

       case 104:
           valorProduto = 12.00;
           break;

       case 105:
            valorProduto = 5.00;
            break;

       case 106:
            valorProduto = 3.00;
            break;

       default:
            cout << "Código inválido" <<endl;
    }
    cout << "Digite a quantidade do produto: ";
    cin >> quantidade;

    valorFinal = valorProduto * quantidade;

    cout << "O valor é de: " << valorFinal <<endl;

    return 0;
}
