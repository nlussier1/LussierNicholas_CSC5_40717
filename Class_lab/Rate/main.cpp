/* 
 * File:   main.cpp
 * Author: Nick_Lussier
 * car payment
 * Created on January 12, 2015, 11:27 AM
 */
//system libraries
#include <iostream>
#include <cmath>
#include <iomanip>
//user libraries
//global constants
//function prototypes


using namespace std;

//execution begins here
int main(int argc, char** argv) {
//declare variable
    float intRate=0.0319f/12;//capital one loans
    float msrplus=4e4f;//loan amount
    char nPaymnt=60; //number of monthly payments
//calculate monthly payments
    float temp=pow((1+intRate), nPaymnt);
    float mPayment=(intRate*temp*msrplus/(temp-1));
    //output
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"My Avenir will cost $"<<mPayment<<endl;

    return 0;
}

