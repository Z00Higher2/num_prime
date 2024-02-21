// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab 5A
// Write a program numbers.cpp that defines a function
// bool isDivisibleBy(int n, int d);
// If n is divisible by d, the function should return true, otherwise return false.
// A prime number is an integer greater or equal to 2 that is only divisible by 1 and by itself. 
// The first few primes are: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 …
// N is a prime if and only if it is not divisible evenly by any of the numbers from 2 to N−1. Let’s implement this decision as a function.
// In the same program numbers.cpp, add a function bool isPrime(int n)

#include <iostream>
using namespace std;


// Lab 5A

// bool isDivisibleBy(int n, int d){ // declare the boolean fucntion that determines whether n is divisible by d or not

//     if( d == 0 ){
//         cout << "No" << endl;
//         return false;
//     }

//     if (n % d == 0){ // if n is divisible by d

//         cout << "Yes" << endl; // prints yes 
//         return true; // return true

//     } else{

//         cout << "No" << endl; // prints no
//         return false; // returns false;

//     }
    

//     return false; // return false
// }


// Lab 5B

bool isPrime(int n){
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;

}


int main() {

    int num_1, num_2;

    cout << "Enter the first number: ";
    cin >> num_1;


    // cout << "Enter the second number: ";
    // cin >> num_2;

    // cout << isDivisibleBy(num_1, num_2) << endl;

    // Lab 5B

    cout << isPrime(num_1) << endl;

    return 0;

}