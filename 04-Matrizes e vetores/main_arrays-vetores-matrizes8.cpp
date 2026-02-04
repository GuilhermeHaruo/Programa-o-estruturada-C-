#include <iostream>
#include <locale>
using namespace std;

int main() {

    setlocale(LC_ALL,"Portuguese");
    int vetor[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};


    cout << "Vetor na ordem original: ";
    for (int i = 0; i < 10; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    cout << "Vetor na ordem inversa: ";
    for (int i = 9; i >= 0; i--) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
