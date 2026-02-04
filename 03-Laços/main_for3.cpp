#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int soma = 0,i;

    for( i == 100; i <= 200; ++i){

      if ( i%2 == 0) {
        soma += i;
      }
    }
    cout << "A soma dos números pares é de :  " << soma <<endl;


    return 0;
}
