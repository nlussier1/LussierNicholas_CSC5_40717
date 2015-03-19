/* 
 * File:   main.cpp
 * Author: Nick_Lussier
 * Babylonian Calculator
 * Created on January 13, 2015, 10:46 AM
 */
//system libraries
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
//user libraries
//global constant
//function prototype

//execution begins here
int main(int argc, char** argv) {
//declare variables
    float num, guess, r;
    string repeat;
    int y;
    //input number
    cout<<"Input a number to estimate it's square root\n";
    cout<<"The format is a positive float\n";   
    cin>>num;
    guess=num/2;   
    r=num/guess;
    guess=(guess+r)/2;
    //output first pass
    cout<<guess<<" is a possible square root\n";
    cout<<"Keep running until solution?\n";
    cout<<"Y/N\n";
    cin>>repeat;
    y=true;
    while (true)
    {
        guess=num/2;   
        r=num/guess;
        guess=(guess+r)/2;
        //output first pass
        cout<<guess<<" is a possible square root\n";
    }
        



            
    return 0;
}
