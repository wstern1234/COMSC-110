//
//  main.cpp
//  SternComputingAlgorithm
//
//  Created by Wills Stern on 7/17/20.
//  Copyright © 2020 Wills Stern. All rights reserved.
//


#include <iostream>

using namespace std;


int SternComputingAlgo(int num, int decr) {

    int res = 0;

    if (num < decr) {
        res = num;
    } else {
        res += num + SternComputingAlgo(num - decr, decr);
    }


    return res;
}


int main() {

    int in;
    int in2;
    
    cout << "Welcome to a walk through of the Stern Computing Algorithm (written by Wills Stern)." << endl;
    cout << "While it's a basic algorithm, it is a good example of recursive functions." << endl;
    cout << "Here's the english version of the algorithm: " << endl;
    
    cout << endl;
    cout << "If initial number [i] is greater the decremental number [d], then add i to the total sum and subtract d from i until d is greater than i." << endl;
    cout << endl;
    

    cout << "Enter initial number (i): ";
    cin >> in;
    cout << endl << "Enter decremental number (d): ";
    cin >> in2;

    cout << endl << endl;
    
    cout << "Result: " << SternComputingAlgo(in, in2) << endl;
    cout << endl;


   return 0;
}
