//
//  Quickly_Exponentiation.cpp
//  Exponentiation_By_squaring
//
//  Created by 金心羽 on 2023/3/16.
//

#include "Quickly_Exponentiation.hpp"

long long Exponentiation::QuicklyExponentiation(long long Base, long long Exp)
{
    if(Exp == 0)
    {
        return 1;
    }
    else if(Exp % 2 == 1)
    {
        return Base * QuicklyExponentiation(Base, Exp - 1);
    }
    else
    {
        long long temp = QuicklyExponentiation(Base, Exp / 2);
        return temp * temp;
    }
    return -1;
}
