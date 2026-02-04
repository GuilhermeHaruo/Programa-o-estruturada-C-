#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n,m,i=0;

    cout << "Digite o valor de n"<< endl;
    cin >> n;
    cout << "Digite o valor de m" <<endl;
    cin >> m;

    if (n <= m){

        cout << "O intervalo de " << n << " a " << m << ": " <<endl;
        for ( i> n; i <= m ; ++i){
            cout << i << " ";
        }
    cout << endl;
    } else{
        cout << "n deve ser menor ou igual a m" <<endl;
    }

    return 0;
}
