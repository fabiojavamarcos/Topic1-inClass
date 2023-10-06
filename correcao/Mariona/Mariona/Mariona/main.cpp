//Johnathan Mariona

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int i, x;
    char str[100];

    cout << "What would you like to Encrypt:\t";
    cin >> str;

    cout << "\nEnter the key:\n";
    cout << "1 = Encrypt the string.\n";
    cin >> x;

    switch (x)
    {
    case 1:
        for (i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] - 1;

        cout << "\nEncrypted message: " << str << endl;
        break;

    default:
        cout << "\nInvalid Input \n";
    }
    return 0;
}
