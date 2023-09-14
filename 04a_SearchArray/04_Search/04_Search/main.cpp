//
//  main.cpp
//  04_Search
//
//  Created by Fabio Marcos De Abreu Santos on 9/14/23.
//

#include <iostream>

using namespace std;

// generate numbers
vector<int> getNumbers(int n){
    srand(time(0));

    vector<int> v(n, 0); // vector with n positions and initialized with 0

    int a;
    for (int i = 0; i < v.size(); i++ ) {
        a = rand() % 20;
        for (int j = 0; j < v.size(); j++) {
            if (a == v[j]) {
                cout << "Oh no!!!! We got an existing number!!! " << endl;
                a = rand() % 20;
                j = -1; // This should not be a zero!!!!
            }
        }
        v[i] = a;
    }
    sort(v.begin(), v.end());
    
    for (int &bob : v) {
        cout << bob << endl;
    }
    return v;
}

int main() {
    cout << "Search Vector\n";

    cout << "How many numbers?\n";
    cout << "Enter here -> ";
    int n; //number
    cin >> n;
    vector<int> v;
    
    v = getNumbers(n);
    return 0;
}
