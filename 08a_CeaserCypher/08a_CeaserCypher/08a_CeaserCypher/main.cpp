//
//  main.cpp
//  08a_CeaserCypher
//
//  Created by Fabio Marcos De Abreu Santos on 9/19/23.
//

#include <iostream>
using namespace std;

const int AlphaLength = 26;
char charCypher(char ch, int key);

char charCypher(char ch, int key)
{
    if (!isalpha(ch)) //<------------------------
        return ch;
    //cout << "ch:" << ch << endl;
    //cout << "key:" << key << endl;
    char offset = isupper(ch) ? 'A' : 'a';
    //cout << "offset:" << offset << endl;
    char res = (char)((((ch + key) - offset) % AlphaLength) + offset);
    return res;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Ceaser Cypher v1!\n";
    cout << "Enter the key!\n";

    int key = 0;
    cin >> key;

    char ch = charCypher('A', key);
    cout << " encrypted ch: " << ch << endl;
    ch = charCypher(ch, AlphaLength - key);
    cout << " decrypted ch: " << ch << endl;
  
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        char enCh = charCypher(ch, key);
        cout << ch << " Encrypted: " << enCh;
        char res = charCypher(enCh, AlphaLength - key);
        cout << " Decrypted: " << res << endl;

    }

    for (char ch = 'a'; ch <= 'z'; ch++) {
        char enCh = charCypher(ch, key);
        cout << ch << " Encrypted: " << enCh;
        cout << " Decrypted: " << charCypher(enCh, AlphaLength - key) << endl;

    }




    
    return 0;
}
