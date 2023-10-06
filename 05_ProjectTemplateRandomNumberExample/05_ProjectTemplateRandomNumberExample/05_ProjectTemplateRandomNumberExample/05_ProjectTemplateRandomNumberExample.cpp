//
//  05_ProjectTemplateRandomNumberExample.cpp
//  05_ProjectTemplateRandomNumberExample
//
//  Created by Fabio Marcos De Abreu Santos on 9/3/23.
//


#include <iostream>
#include "05_ProjectTemplateRandomNumberExample.hpp"
#include "RandomNumberHelper.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "";

    cout << "Hello" << endl;
    RandomNumberHelper random = RandomNumberHelper();

    auto sum = 0;
    for (auto i = 0; i < 10; i++) {
        int r = random.getRandomInInclusiveRange(1, 1000);
        cout << r << endl;
        sum += r;
    }

    cout << "average: " << sum / 10 << endl;
    return 0;
}
