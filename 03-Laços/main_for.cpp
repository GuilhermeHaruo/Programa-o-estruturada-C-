#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i;

    cout << "Números no intervalo de 10 a 100: " << endl;

    for( i= 10; i <= 100;++i ){
        cout << i << endl;
    }

    return 0;
}
