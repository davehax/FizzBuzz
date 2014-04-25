//
//  main.cpp
//  FizzBuzz
//
//  Created by David Falconer on 16/04/2014.
//  Copyright (c) 2014 Dave. All rights reserved.
//

#include <iostream>

using namespace std;

/*
 * FizzBuzz
 
    print Fizz if multiple of 3
    print Buzz if multiple of 5
    print FizzBuzz if multiple of 15
 
    between arbitrary numbers
 
 */

int main(int argc, const char * argv[])
{
    for (int i = -50; i < 100; i++) {
        
        if (i % 3 == 0) {
            cout << "Fizz";
        }
        
        if (i % 5 == 0) {
            cout << "Buzz";
        }
        
        if (i % 3 != 0 && i % 5 != 0) {
            cout << i;
        }
        
        cout << endl;
    }
    
    
    char a = 'a';
    cin >> a;
    return 0;
}

