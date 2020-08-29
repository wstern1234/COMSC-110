//
//  ConditionalPrimeNumFinder.cpp
//  
//  Created by Wills Stern on 7/16/20.
//  Copyright © 2020 Wills Stern. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int main() {
    
    string input;
    int inNum;
    
    getline(cin, input);

    stringstream ss(input);

    while (ss >> inNum) {
        
        cout << inNum << " is" << ( ( inNum == 1 ) ? " not " : ( ( (inNum % 2 != 0) && (inNum % 3 != 0) ) ? " " : ( ( (inNum == 2) || (inNum == 3) ) ? " " : " not " ) ) ) << "a prime number." << endl;
        
    }
    

   return 0;
}
