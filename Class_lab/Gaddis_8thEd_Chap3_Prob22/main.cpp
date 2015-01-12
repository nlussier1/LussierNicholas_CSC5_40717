/* 
 * File:   main.cpp
 * Author: Nick_Lussier
 * Purpose: Use cmath functions
 * Created on January 12, 2015, 10:58 AM
 */
//system libraries
#include <cstdlib>//random rand(), srand()
#include <iostream>//Keyboard/Monitor I/o
#include <fstream>//file I/O
#include <ctime>//time functions
#include <cmath>
#include <iomanip>
using namespace std;
//user libraries
//global function

const float PIDIV4=atan(1);

const float CNVDGRD=PIDIV4/45;
//prototype functions

//execution begins here
int main(int argc, char** argv) {
//set random number seed
    srand(static_cast<unsigned int>(time(0)));
//declare file object
    ofstream output;
//open file
    output.open("SinCosTan.dat");
//declare the angle variable as an integer
//in degrees, and the radian angle as a float
    int angDeg=rand() %361-180;//angle [-180 to +180]
    float angRad=angDeg*CNVDGRD;
//output the angle to the screen
    cout<<"Angle in degrees =>"<<angDeg<<endl;
    cout<<"Angle in radians =>"<<angRad<<endl;
//output sin, cos, tan
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"sin("<<angDeg<<") = "<<setw(8)<<sin (angRad)<<endl;
    cout<<"cos("<<angDeg<<") = "<<setw(8)<<cos (angRad)<<endl;
    cout<<"tan("<<angDeg<<") = "<<setw(8)<<tan (angRad)<<endl;
//to file
    //output the angle to the screen
    output<<"Angle in degrees =>"<<angDeg<<endl;
    output<<"Angle in radians =>"<<angRad<<endl;
//output sin, cos, tan
    output<<fixed<<setprecision(4)<<showpoint;
    output<<"sin("<<angDeg<<") = "<<setw(8)<<sin (angRad)<<endl;
    output<<"cos("<<angDeg<<") = "<<setw(8)<<cos (angRad)<<endl;
    output<<"tan("<<angDeg<<") = "<<setw(8)<<tan (angRad)<<endl;

//close now
    output.close();
    return 0;
}

