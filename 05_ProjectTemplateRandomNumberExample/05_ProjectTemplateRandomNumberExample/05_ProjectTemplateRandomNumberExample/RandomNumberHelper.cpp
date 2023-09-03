//
//  RandomNumberHelper.cpp
//  05_ProjectTemplateRandomNumberExample
//
//  Created by Fabio Marcos De Abreu Santos on 9/3/23.
//

#include "RandomNumberHelper.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>

RandomNumberHelper::RandomNumberHelper()
{
    srand((unsigned int) time(NULL));
}

int RandomNumberHelper::getRandomInInclusiveRange(int min, int max)
{
    int r = rand(); // returns a pseudo-random number in the range of [0, RAND_MAX).
    int rd = r % (max + 1 - min) + min; //rand() function to get a value from the range 0 to N-1
    std::cout << "min: " << min << " max: " << max << " generated: " << rd << std::endl;
    std::cout << " random: " << r << std::endl;

    std::cout << " computation: " << (max + 1 - min) + min << std::endl;
    
    
    return rd;
}
