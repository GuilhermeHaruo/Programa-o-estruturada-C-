#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i;

    cout << "Números no intervalo de 50 a 10: " << endl;

    for( i= 50; i >=10;--i ){
        cout << i << endl;
    }

    return 0;
}

