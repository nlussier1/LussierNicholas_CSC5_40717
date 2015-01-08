/* Purpose: Calculate Energy Drink Consumption
 * File:   main.cpp
 * Author: Nick_Lussier
 * Example Done in Class
 * Created on January 8, 2015, 8:17 AM
 */
//system Libraries
#include <iostream>

//User Libraries

//Global Constant
char CONVPCT=100;

//prototype functions

using namespace std;

//execution begins here
int main(int argc, char** argv) {
//declare variables
    short csurv=12467;//customers surveyed
    char perEDri=14; 
    char perCdri=64;//percentage of energy(E) and citrus(C) drinkers
    //calc customer numbers requested
    short custE=csurv*perEDri/CONVPCT;//Energy Drinkers
    short custC=custE*perCdri/CONVPCT;//Citrus Drinkers
    //out results
    cout<<"Customers surveyed that are energy drinkers\n";
    cout<<custE<<endl;
    cout<<"Customers surveyed that are citrus drinkers\n";
    cout<<custC<<endl;
    //sayonara
    
    return 0;
}

