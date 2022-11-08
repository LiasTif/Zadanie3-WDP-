#include <iostream>
#include <cmath>
#include <string> 

using namespace std;

int x = 10, y = 2, z{};

void PerformNumOperations() {
    printf("%d do potegi %d = %g\n", x, y, pow(x, y));
    printf("pierwiastek z %d = %g\n", x, sqrt(x));
    printf("pierwiastek szescienny z %d = %g\n\n", y, cbrt(y));
}

/// <summary>
/// Zapisuje w z sumę x i y
/// </summary>
void SummXAndY() {
    printf("%d + %d = %d\n\n", x, y, z = x + y);
}

/// <summary>
/// Metoda, która generuje proste operacje matematyczne
/// </summary>
/// <param name="a">pierwsza cyfra</param>
/// <param name="b">druga cyfra</param>
/// <param name="operation">rodzaj operacji, która ma być wykonana</param>
/// <returns></returns>
void GetOperation(int a, int b, char operation) {
    switch (operation) {
    case '+':
        printf("suma: %d + %d = %d\n\n", x, y, z = x + y);
        break;
    case '*':
        printf("iloczyn: %d * %d = %d\n\n", x, y, z = x * y);
        break;
    case '/':
        printf("iloraz: %d / %d = %d\n\n", x, y, z = x / y);
        break;
    case '-':
        printf("roznica: %d - %d = %d\n\n", x, y, z = x - y);
        break;
    default: 
        cout << "Nieznana operacja\n\n";
        break;
    }
}

int main()
{
    char operation;
    char question[] = "suma";
    char answer[10] ;

    SummXAndY();
    PerformNumOperations();

    cout << "Podaj operacje (-, +, /, *): ";
    cin >> operation;
    GetOperation(x, y, operation);

    do {
        cout << "jaka operacje nalezy wykonac na 2 i 6, aby otrzymac 8?\n";
        cin >> answer;
    } while (strcmp(question, answer) != 0);

    cout << "prawidlowa odpowiedz!\n";

    return 0;
}