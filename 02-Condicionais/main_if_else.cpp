#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    cout << "Digite o terceiro número: ";
    cin >> num3;

    if (num1 > num2 && num1 > num3) {
        cout << "O maior número é: " << num1 << endl;
    } else if (num2 > num1 && num2 > num3) {
        cout << "O maior número é: " << num2 << endl;
    } else if (num3 > num1 && num3 > num2) {
        cout << "O maior número é: " << num3 << endl;
    }

    return 0;
}
