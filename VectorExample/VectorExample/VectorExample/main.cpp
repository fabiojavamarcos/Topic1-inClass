//
//  main.cpp
//  VectorExample
//
//  Created by Fabio Marcos De Abreu Santos on 9/14/23.
//

#include <iostream>

using namespace std;

void vectorExample(){
    vector<string> fruits;
    
    fruits.push_back("Banana");
    fruits.push_back("Apple");
    
    cout << "vector content: " << endl;
    
    for (const auto &fruit : fruits){
        cout << fruit << endl;
    }
    
}

void vectorExampleInteger(){
    vector<int> numbers;
    
    numbers.push_back(100);
    numbers.push_back(1000);
    
    cout << "vector content (int): " << endl;
    
    for (int j = 0; j < numbers.size(); j++){
        cout << "numbers["<< j << "] = " << numbers[j] << endl;
    }
    
    cout << "I will delete the last: " << endl;
    numbers.pop_back();
    
    for (int j = 0; j < numbers.size(); j++){
        cout << "numbers["<< j << "] = " << numbers[j] << endl;
    }
 
}
int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Vector Example!\n";
    
    vectorExample();
    
    /* call a vector function and populate an integer vector*/
    vectorExampleInteger();
    
    return 0;
}
