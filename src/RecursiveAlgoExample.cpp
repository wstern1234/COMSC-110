//
//  RecursiveAlgoExample.cpp
//
//  Created by Wills Stern on 7/17/20.
//  Copyright © 2020 Wills Stern. All rights reserved.
//


#include <iostream>

using namespace std;


int RecursiveAlgo(int num, int decr) {

    int res = 0;

    if (num < decr) {
        res = num;
    } else {
        res += num + RecursiveAlgo(num - decr, decr);
    }


    return res;
}


int main() {

    int in;
    int in2;
    
    cout << "Welcome to this walk through of an example recursive algorithm (written by Wills Stern)." << endl;
    cout << "While it's a basic algorithm, it is a good example of recursive functions." << endl;
    cout << "Here's the english version of the algorithm: " << endl;
    
    cout << endl;
    cout << "If initial number [i] is greater the decremental number [d], then add i to the total sum and subtract d from i until d is greater than i." << endl;
    cout << endl;

    cout << "One example could be a weight rack. On this weight rack, I have 2 dumbbells of each weight. So, I have 100 lbs from the 50 lb dumbbells," << endl;
    cout << "90 lbs from the 45s, 80 lbs from the 40s, and so on until I reach 10 lbs from the 5s. What I could do is set i to 100, then set d to 10." << endl;
    cout << "This will return the total amount of weight that the rack is holding, which in this case is 550 lbs. Go ahead and try this or another" << endl;
    cout << "example yourself." << endl;
    

    cout << "Enter initial number (i): ";
    cin >> in;
    cout << endl << "Enter decremental number (d): ";
    cin >> in2;

    cout << endl << endl;
    
    cout << "Result: " << RecursiveAlgo(in, in2) << endl;
    cout << endl;


   return 0;
}
