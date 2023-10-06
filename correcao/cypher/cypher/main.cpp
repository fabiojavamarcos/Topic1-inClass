//
//  main.cpp
//  cypher
//
//  Created by Fabio Marcos De Abreu Santos on 9/30/23.
//

#include <iostream>
#include <ctype.h>
#include <string>
#include <vector>

#include<sstream>
using namespace std;

class runner{
    public:
    string encrypt(string& s, int& z){
    for(char&c :s){
        for(int i = 0;i<z;i++){
            if(isupper(c)){
                c=tolower(c);
            }
            if(c=='z'){
                c='a';
            }

            else if(isalpha(c)){
                c++;
            }
        }

}
return s;
    }
};

int main(){
runner r;
vector<string> f;
string s;

int z;
string word;

cout<<"Enter the key: ";
cin>>z;
cin.ignore();
cout<<"Enter words to encrypt: ";

getline(cin,s);
stringstream ff(s);
while(ff>>word){
    f.push_back(word);
}
for(int i = 0;i<f.size();i++){
    cout<<f[i]<<"       ";
    cout<<r.encrypt(f[i],z)<<endl;
}


}

