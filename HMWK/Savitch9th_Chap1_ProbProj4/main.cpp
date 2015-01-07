/* Chapter 1. Program Project 4, Savitch 9th Edition.
 * File:   main.cpp
 * Author: Nick_Lussier
 * For CSC 5, Class Code 40717. 
 * Instructor: Dr. Mark Lehr
 * Created on January 6, 2015, 10:08 AM
 * Purpose: HMWK W.1, Solution to Free Fall problem
 */

//System Library
#include <iostream>

using namespace std;

//User Libraries

//Global Constants
const float GRAVITY=32.174;//ft/sec^2

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int time;//(sec)
    float dist;//distance(ft)
    //Prompt User for Input
    cout<<"This program calculates free fall"<<endl;
    cout<<"Distance dropped in feet with an"<<endl;
    cout<<"Object starting from rest"<<endl;
    cout<<"Input the free-fall time to drop in seconds"<<endl;
    cout<<"The Time input is a positive interger"<<endl;
    cin>>time;
    //Calculate the Distance Dropped
    dist=.5*GRAVITY*time*time;
    //output results
    cout<<"Distance Dropped ="<<dist<<" (ft)"<<endl;
    //Exit Stage Right
    return 0;
}

