/* 
 * File:   main.cpp
 * Author: Nick_Lussier
 * Trendmill pace problem
 * Created on January 14, 2015, 8:02 AM
 */
//system libraries
#include <iostream>
using namespace std;
//user libraries
//global constant
const int HRS2MIN=60;
const int MIN2SEC=60;
//function prototype

//execution begins here

int main(int argc, char** argv) {
//set variables
    float mph,hpm, mpm,spph;
    int ipph;
    cout<<"Hello! Thank you for using this program.\n";
    cout<<"Our goal here today is to take your miles-per-hour, and convert ";
    cout<<"it to a easy to read pace for you.\n";
    cout<<"First of all, I will need the MPH that you ran.\n";
    cin>>mph;
    //convert to a pace
    hpm=1/mph;
    mpm=hpm*MIN2SEC;
    ipph=static_cast<int>(mpm);
    spph=(mpm-ipph)*HRS2MIN;
//Output
    cout<<mph<<" mph = ";
    cout<<ipph<<" mins ";
    cout<<spph<<" secs per mile\n";
    
    return 0;
}

