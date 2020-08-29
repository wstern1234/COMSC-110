//
//  main.cpp
//  BinarySearchAlgo
//
//  Created by Wills Stern on 8/4/20.
//  Copyright © 2020 Wills Stern. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;


string binarySearchAlgo(int lowNum, int highNum) {
    int midNum;
    char input = NULL;
    

    midNum = (highNum + lowNum) / 2;

    if (input == 'Y') {
        return "^^ Above is your number";
    } else {
        cout << midNum << endl;
        cin >> input;
        input = toupper(input);
        if (input == 'G') {
            binarySearchAlgo(midNum, highNum);
        } else if (input == 'L') {
            binarySearchAlgo(lowNum, midNum);
        }
    }

    return "^^ Above is your number";
}


int main() {
    int low, high;

    cout << "Declare the boundaries." << endl;

    cout << "Choose the low range number: ";
    cin >> low;

    cout << "Choose the high range number: ";
    cin >> high;
    


    cout << binarySearchAlgo(low, high) << endl;


    return 0;
}
