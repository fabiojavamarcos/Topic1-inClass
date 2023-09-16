//
//  main.cpp
//  SearchExample
//
//  Created by Fabio Marcos De Abreu Santos on 9/14/23.
//

#include <iostream>

using namespace std;

vector<int> getNumbers(int n){
    srand(time(0));
    
    vector<int> v(n, 0);
    int a;
    
    for (int i = 0; i < v.size() ; i++){
        a = rand() % 30;
        
        for (int j = 0; j < v.size(); j++){
            
            if (a == v[j]){
                cout << "Oh noooooo!!!!!!" << endl;
                a = rand() % 30;
                j = -1;
                
            }
        }
    
        v[i] = a;
    }
    
    for (int z = 0; z < v.size(); z++){
        cout << v[z] << endl;
    }
    
    return v;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Enter a the number of random values!\n";
    
    int n;
    
    cin >> n;
    
    vector<int> v;
    
    v = getNumbers(n);
    
    return 0;
}
