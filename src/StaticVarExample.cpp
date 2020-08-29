//
//  main.cpp
//  StaticVarExample
//
//  Created by Wills Stern on 7/16/20.
//  Copyright © 2020 Wills Stern. All rights reserved.
//

#include <iostream>

using namespace std;


void staticTest() {
    
    static int funcCallCount = 0;
    
    ++funcCallCount;
    
    
    cout << funcCallCount << endl;
    
}


int main() {
    
    for (int i = 0; i < 12; ++i) {
        staticTest();
    }
    
    //  Should output 1 - 12
    
    
    return 0;
}
