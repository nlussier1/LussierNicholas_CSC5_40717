/* 
 * File:   main.cpp
 * Author: Nick_Lussier
 * Conversion of Metric Ton to Oz
 * Created on January 12, 2015, 9:47 AM
 */
//system libraries
#include <iostream>
#include <string>
//User Libraries
//global constant
float MET2OZ=35273.97;
//function prototypes
using namespace std;
//execution begins here
int main(int argc, char** argv) {
    char ans;
    string cereal;//might as well use the name of the brand as well
    float ceraloz;//user input oz of cereal
    float ozinmet=ceraloz/MET2OZ;//weight in metric tonnes
    float oztomet=MET2OZ/ceraloz;//rough estimate of how many boxes needed to reach a ton
        do
        {
            //declare variables
            cout<<"Hello, I am here to calculate the ounces of cereal to metric ton\n";
            cout<<"The purpose of he program is to take any cereal, take it's weight and to";
            cout<<" tell you how many boxes you would need to reach a metric ton.\n";
            cout<<"You should be able to repeat this program as many times as necessary\n";
            cout<<"So what cereal will you be measuring?\n";
            cout<<"(One word Please)\n";//one word needed or the program repeats infinitum
            cin>>cereal;//user input, one world need, displays cereal
            cout<<"Thank you, now please tell me the weight in Ounces of ";
            cout<<cereal<<"?\n";
            cin>>ceraloz;//user input, used float for oz
            cout<<"As I understand it, "<<cereal<<" weighs "<<ceraloz<<endl;
            cout<<"That means your cereal weighs ";
            ozinmet=ceraloz/MET2OZ;//weight, typically using e powers
            cout<<ozinmet<< " tonnes!\n";
            cout<<"It also means that you ";
            oztomet=MET2OZ/ceraloz;//amount needed, non rounded
                if (oztomet<1)
                        cout<<"already have more than a ton of cereal!\n";
                if (oztomet>=1)    
                    cout<<"need"<<oztomet<<" boxes of "<<cereal<<" to equal one metric ton!\n";
            cout<<"Would you like to try again?\n";
            cout<<"Press any y to continue.\n";//using y as yes inputs es as a cereal brand  
            cin>>ans;
        } while (ans=='y' || ans=='Y');
        cout<<"Thank you and goodbye\n";
        return 0;
}