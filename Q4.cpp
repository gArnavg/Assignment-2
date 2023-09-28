/*WAP for finding the volume of the cylinder by taking radius and height as input.*/
#include<iostream>
using namespace std;
int main()
{
    float r,h;
    cout<<"Please Enter The Required Radius ";
    cin>>r;
    cout<<"Please Enter The Required Height ";
    cin>>h;
    float volume = 3.14*r*r*h;
    cout<<"The Volume Is "<<volume<<" Cubic Units";
    return 0;
}