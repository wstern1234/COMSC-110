//
//  main.cpp
//  PrimeNumberFinder
//
//  Created by Wills Stern on 7/9/20.
//  Copyright © 2020 Wills Stern. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int main() {
    
    string input;
    int inNum;
    string result;
    string res;
    
    getline(cin, input);

    stringstream ss(input);

    while (ss >> inNum) {
        
        res = ( (inNum == 2) || (inNum == 3) ) ? " " : " not ";
        
        result = ( (inNum % 2 != 0) && (inNum % 3 != 0) ) ? " " : res;
        
        result = ( inNum == 1 ) ? " not " : result;
        
        cout << inNum << " is" << result << "a prime number." << endl;
        
    }
    

   return 0;
}
