#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num;
    int contador=0;

    cout << "Digite um número inteiro:  " <<endl;
    cout << "Digite 0 para encerrar" << endl;

    while(true){
        cin >> num;
        if (num == 0){
        break;
        }
        contador++;

    }
    cout <<"Foram digitados:  " << contador << " números" <<endl;

    return 0;
}
