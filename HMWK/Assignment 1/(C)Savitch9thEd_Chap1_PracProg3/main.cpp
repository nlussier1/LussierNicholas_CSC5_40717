/* Savitch 9th Edition Practice Programs, Ch1, #3
 * File:   main.cpp
 * Author: Nick_Lussier
 * Purposeful Errors
 * Created on January 6, 2015, 7:21 PM
 */

//System Library
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//execution begins here
int main(int argc, char** argv) 
{
    int number_of_pods, peas_per_pod, total_peas;//maintained int this time
    cout<<"Hello!\n";
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the number of pods:\n";
    cin>>number_of_pods;
    cout<<"Enter the number of peas in a pod: \n";
    cin>>peas_per_pod;
    total_peas=number_of_pods/peas_per_pod;//added division, fails after putting 0 for numer_of_pods
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" pea pods\n";
    cout<<"and ";
    cout<<peas_per_pod;
    cout<<" peas in each pod, then\n";
    cout<<"you have ";
    cout<<total_peas;
    cout<<" peas in all the pods.\n";
    cout<<"Good-Bye and Take Care!\n";
    return 0;
}
//Fin
