//
//  main.cpp
//  Exponentiation_By_squaring
//
//  Created by 金心羽 on 2023/3/16.
//

#include <iostream>
#include "Quickly_Exponentiation.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    //code here to test your code
    /*test code*/
    Exponentiation exponentiation;
    long long ans = exponentiation.QuicklyExponentiation(2, 10);
    cout << ans << endl;
    return 0;
}
