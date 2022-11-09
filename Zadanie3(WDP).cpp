#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cmath>
#include <string> 

using namespace std;

int x = 10, y = 2, z{};
char operation, question[] = "suma", question2[4], answer[30];

/// <summary>
/// wykonać kilka operacji na x i y
/// </summary>
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
        printf("suma: %d + %d = %d\n", x, y, z = x + y);
        break;
    case '*':
        printf("iloczyn: %d * %d = %d\n", x, y, z = x * y);
        break;
    case '/':
        printf("iloraz: %d / %d = %d\n", x, y, z = x / y);
        break;
    case '-':
        printf("roznica: %d - %d = %d\n", x, y, z = x - y);
        break;
    default: 
        cout << "Nieznana operacja\n\n";
        break;
    }
}

int main()
{
    // wywołać kilka funkcji, aby je sprawdzić
    SummXAndY();
    PerformNumOperations();

    // wykonać wybraną przez użytkownika operację na x i y
    cout << "Podaj operacje (-, +, /, *): ";
    cin >> operation;
    GetOperation(x, y, operation);

    // zagadka, w której pyta się o prawidłowe działanie
    char partOfQuestion2[1024] = "jaka operacje nalezy wykonac n",
        partOfQuestion3[1024] = "a 2 i 6, aby otrzymac 8?";
    strcpy(question2, question);
    strcat(partOfQuestion2, partOfQuestion3);

    // powtarzać pytanie do momentu udzielenia prawidłowej odpowiedzi
    do {
        printf("\nodpowiedz sklada sie z %I64u leter\n%s\n", strlen(question), partOfQuestion2);
        cin >> answer;
    } while (strcmp(question2, answer) != 0);

    cout << "prawidlowa odpowiedz!\n";

    return 0;
}