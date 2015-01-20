/* 
 * File:   main.cpp
 * Author: Nicholas Lussier *
 * Created on January 14, 2015, 11:35 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    bool cusp=false;
    int month,day;
    string sign;
    //Prompt for the input
    cout<<"Input the numerical/integer month you were born in"<<endl;
    cin>>month;
    cout<<"Input the integer day you were born on"<<endl;
    cin>>day;
    //Determine the sign
    if(month==1&&day<20)sign="Capricorn.";
    else if(month==1&&day>=20)sign="Aquarius.";
    else if(month==2&&day<=18)sign="Aquarius.";
    else if(month==2&&day>=19)sign="Pisces.";
    else if(month==3&&day<=20)sign="Pisces.";
    else if(month==3&&day>=21)sign="Aries.";
    else if(month==4&&day<=19)sign="Aries."; 
    else if(month==4&&day>=20)sign="Taurus.";
    else if(month==5&&day<=20)sign="Taurus.";
    else if(month==5&&day>=21)sign="Gemini.";
    else if(month==6&&day<=21)sign="Gemini.";
    else if(month==6&&day>=22)sign="Cancer.";
    else if(month==7&&day<=22)sign="Cancer.";
    else if(month==7&&day>=23)sign="Leo.";
    else if(month==8&&day<=22)sign="Leo.";
    else if(month==8&&day>=23)sign="Virgo.";
    else if(month==9&&day<=22)sign="Virgo.";
    else if(month==9&&day>=23)sign="Libra.";
    else if(month==10&&day<=22)sign="Libra.";
    else if(month==10&&day>=23)sign="Scorpio.";
    else if(month==11&&day<=21)sign="Scorpio.";
    else if(month==11&&day>=22)sign="Sagittarius.";
    else if(month==12&&day<=21)sign="Sagittarius.";
    else if(month==12&&day>=22)sign="Capricorn.";
    //Output the sign and the cusp
    if(month==1&&day>17&&day<22)cusp=true;
    if(month==2&&day>16&&day<21)cusp=true;
    if(month==3&&day>18&&day<23)cusp=true;
    if(month==4&&day>17&&day<22)cusp=true;
    if(month==5&&day>18&&day<23)cusp=true;
    if(month==6&&day>19&&day<24)cusp=true;
    if(month==7&&day>20&&day<25)cusp=true;
    if(month==8&&day>20&&day<25)cusp=true;
    if(month==9&&day>20&&day<25)cusp=true;
    if(month==10&&day>20&&day<25)cusp=true;
    if(month==11&&day>19&&day<24)cusp=true;
    if(month==12&&day>19&&day<24)cusp=true;
    cout<<"Your sign is "<<sign;
    if(cusp)cout<<" and you are on the cusp"<<endl;
    else cout<<endl;
    return 0;
}