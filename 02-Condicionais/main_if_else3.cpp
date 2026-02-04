#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int valor;

    cout << "Digite um valor: " ;
    cin >> valor;

    if ( valor > 0){
        cout << "O valor é positivo" <<endl;
    } else if (valor < 0){
         cout << "O valor é negativo" <<endl;
    } else {
         cout << "O valor digitado é neutro" <<endl;
    }
    return 0;
}
