//
//  main.cpp
//  10_NavalBattle
//
//  Created by Fabio Marcos De Abreu Santos on 9/19/23.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cout << "Enter the coordinates of your destroyer" << endl;
    int dx1, dx2, dy1, dy2 = 0;
    int hits = 0;
    
    // input destroyer position
    cout << "Enter the coordinates of your destroyer x1"  << endl;
    cin >> dx1;
    cout << "Enter the coordinates of your destroyer y1"  << endl;
    cin >> dy1;
    cout << "Enter the coordinates of your destroyer x2"  << endl;
    cin >> dx2;
    cout << "Enter the coordinates of your destroyer y2"  << endl;
    cin >> dy2;
    
    int battlefield [10] [10];
    
    // initializing the battlefield
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            battlefield [i][j] = 0;
        }
    }
    srand((unsigned int) time(NULL));
    // setting up the destroyer position
    battlefield [dx1][dy1] = 1;
    battlefield [dx2][dy2] = 1;
    
    cout << "Computer will fire !!!"  << endl;
    const int max = 9;
    const int min = 0;
    int r = rand();
    // fire position
    int fireX = r % (max + 1 - min) + min;
    srand((unsigned int) time(NULL));
    r = rand();
 
    int fireY = r % (max + 1 - min) + min;
    
    // check hit/miss
    if (battlefield [fireX][fireY] == 1)
    {
        cout << "We got a hit !!!" << fireX << "-" << fireY  << endl;
        hits++ ;
    }
    else {
        cout << "You missed hahahahah !!!" << fireX << "-" << fireY << endl;
    }
    //updating the fire position
    battlefield [fireX][fireY] = -1;
    
    cout << "number of hits !!!" << hits << endl;
    
    // update the code to have 3 computer fires
    
    // check if the destroyer was sunk
    
    // create a cruiser with 3 positions in length
    
    // check for repeated fire (same position)
    
    return 0;
}
