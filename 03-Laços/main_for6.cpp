#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num, contadorPar = 0, somaPar = 0;
    double media;


    cout << "Digite 20 números:" << endl;


    for (int i = 0; i < 20; ++i) {
        cout << "Digite o " << i + 1 << "º número: ";
        cin >> num;


        if (num % 2 == 0) {
            somaPar += num;
            contadorPar++;
        }
    }


     media = somaPar / contadorPar;


    cout << "A média dos números pares digitados é: " << media << endl;

    return 0;
}
