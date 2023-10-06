// Abraham Rodriguez
// Caesar Cipher Encryption
// CST-210
// Fabio Marcos De Abreu Santos

#include <iostream>  // Input & Output Operations AR 9/24/2023
#include <string>  // Works with strings manipulation AR 9/24/2023
#include <vector>  // Standard vector container AR 9/24/2023

using namespace std;

// Function to encrypt a word using the Caesar Cipher AR 9/24/2023
string encrypt(const string& word, int shift)
{
    string encryptedWord = "";
    for (char c : word)
    {
        if (isalpha(c)) // Check if the character is an alphabet character AR 9/24/2023
        {
            char base = islower(c) ? 'a' : 'A'; // Determine the base ('a' for lowercase, 'A' for uppercase) AR 9/24/2023
            encryptedWord += static_cast<char>((c - base + shift) % 26 + base); // Apply Caesar cipher shift AR 9/24/2023
        }
        else
        {
            encryptedWord += c; // Keep non-alphabet characters unchanged AR 9/24/2023
        }
    }
    return encryptedWord;
}

int main()
{
    int shift;

    cout << "Enter the shift value: ";
    cin >> shift;
    cin.ignore(); // Consume the newline character left in the buffer AR 9/24/2023

    vector<string> words;
    string inputWord;

    cout << "Enter words to be encrypted, enter 'quit' to quit: ";

    while (cin >> inputWord)
    {
        if (inputWord == "quit")
        {
            break; // Stop input when "quit" is entered AR 9/24/2023
        }
        words.push_back(inputWord);
    }

    // Display the header AR 9/24/2023
    cout << "Original Word\tEncrypted Word" << endl;

    // Encrypt and display each word AR 9/24/2023
    for (const string& word : words)
    {
        string encryptedWord = encrypt(word, shift);
        cout << word << "\t\t" << encryptedWord << endl;
    }

    return 0;
}
