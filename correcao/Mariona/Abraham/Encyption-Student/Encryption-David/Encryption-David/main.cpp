//
//  main.cpp
//  DavidMansilla.CeasearCypher
//
//  Created by David Mansilla on 9/19/23.

#include <iostream>
using namespace std;

const int alphaLength = 26; //will be used later to ensure that the encryption wraps around the alphabet corectly

//function returns an encrypted string of the word, given a key and an orginal string
string encrypt(string s, int key){ //uses pass by value so that the original string is not changed
    string toRet = "";
    for(char x : s){
        if(isalpha(x)){
            if(!islower(x))//ensures that the word is all lowercase
                x = tolower(x);
            char enc = static_cast<char>((x - 'a' + key + alphaLength) % alphaLength + 'a'); //shifts each letter in the string the same amount
            toRet += enc;
        }
        else
            toRet += x;
    }
    return toRet;
}

//gets the right amount of spaces printed so that the end result looks neat in the terminal
void printFormatted(string str){
    int numSpaces = 10 - static_cast<int>(str.length());
    for(int i = 0; i<numSpaces; i++){
        str += " ";
    }
    
    cout << str;
}

int main(int argc, const char * argv[]) {

    cout << "Enter the key: "; //asks user for the key of how much they want to shift their words by
    int key;
    cin >> key;
    
    cout << "Enter the words you want to encrypt ('quit' to stop): "; //asks user for all the words
    while(true){
        string wrd;
        cin >> wrd;
        
        if(wrd == "quit")
            break;
        
        string enc = encrypt(wrd, key); //calls the function and jumbles the word
        
        printFormatted(wrd); cout << "\t" << enc  << endl;
    }
    
    return 0;
}
