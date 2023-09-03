//
//  CeaserCypher.cpp
//  08_CeaserCypher
//
//  Created by Fabio Marcos De Abreu Santos on 9/3/23.
//

#include "CeaserCypher.hpp"

#include <iostream>



char CaesarCypher::charCypher(char ch, int key)
{
    if (!isalpha(ch))
        return ch;

    char offset = isupper(ch) ? 'A' : 'a';
    return (char)((((ch + key) - offset) % AlphaLength) + offset);
}


