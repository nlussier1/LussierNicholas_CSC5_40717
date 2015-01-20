/* 
 * File:   main.cpp
 * Author: Nick_Lussier
 * bitcoin conversion
 * Created on January 13, 2015, 10:01 AM
 */
//system libraries
#include <iostream>
//user libraries
//global constants
//function prototype
using namespace std;
//execution begins here

int main(int argc, char** argv) {
//declare variables
    float bit2dol=232.3;//Jan 13th, 2015 1017
    float eur2dol=0.849381;//jan 13th, 2015 1020
    float yen2dol=118.03;//jan 13th, 2015 1021
    float bitcoin, dollars, euros, yen;
    //input bitcoin then convert
    cout<<"Hello!\n";
    cout<<"Please input the number of bitcoin you wish you purchase at this time\n";
    cin>>bitcoin;
    cout<<"Thank you!\n";
    //convert yo dollars
    dollars=bit2dol*bitcoin;
    euros=eur2dol*dollars;
    yen=yen2dol*dollars;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout<<"In US Dollars, bitcoin will cost "<<dollars<<" currently\n";
    cout<<"In Euros, you can expect the cost to be "<<euros<<" currently\n";
    cout<<"And it will cost "<<yen<<" in Japanese Yen\n";
    cout<<"ADVISORY; Currencies are constantly in flux\n";
//sayonara
    
    return 0;
}

