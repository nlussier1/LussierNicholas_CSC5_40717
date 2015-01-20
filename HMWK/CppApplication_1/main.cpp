/* 
 * File:   main.cpp
 * Author: Nick_Lussier
 * Conversion of Metric Ton to Oz
 * Created on January 12, 2015, 9:47 AM
 */
//system libraries
#include <iostream>
//User Libraries
//global constant
float MET2OZ=35273.97;
//function prototypes
using namespace std;
//execution begins here
int main(int argc, char** argv) {
    //declare variables
    char cereal[21];//might as well use the name of the brand as well
    float ceraloz;//user input oz of cereal
    float ozinmet=ceraloz/MET2OZ;
    float oztomet=MET2OZ/ceraloz;
    char rpeat;
    cout<<"Hello, I am here to calculate the ounces of cereal to metric ton\n";
    cout<<"The purpose of he program is to take any cereal, take it's weight and to";
    cout<<" tell you how many boxes you would need to reach a metric ton.\n";
    cout<<"You should be able to repeat this program as many times as necessary\n";

    while (rpeat=yes) {
        cout<<"So what cereal will you be measuring?\n";
        cout<<"(One word Please)\n";
        cin>>cereal;
        cout<<"Thank you, now please tell me the weight in Ounces of ";
        cout<<cereal<<"?\n";
        cin>>ceraloz;
        cout<<"As I understand it, "<<cereal<<" weighs "<<ceraloz<<endl;
        cout<<"That means your cereal weighs ";
        ozinmet=ceraloz/MET2OZ;
        cout<<ozinmet<< "tonnes!\n";
        cout<<"It also means that you will need ";
        oztomet=MET2OZ/ceraloz;
        cout<<oztomet;
        cout<<" boxes of "<<cereal<<" to equal one metric ton!\n";
        cout<<"Would you like to try again?\n";
        cout<<"Press yes to continue, no to end.\n";
        cin>>rpeat;
        if yes
                
                
        
    
    return 0;
}