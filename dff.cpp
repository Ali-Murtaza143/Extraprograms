#include <iostream>
using namespace std;
int main()
{
int milesPerGallon;
int tankcapacity;
int milesanautomobilecandrive;
cout<<"Enter the capacity of tank "<<endl;
cin>>tankcapacity;
cout<<"Enter the miles per gallon "<<endl;
cin>>milesPerGallon;
milesanautomobilecandrive=tankcapacity*milesPerGallon;

cout<<"NO OF MILES AN AUTOMOBILE CAN DRIVE= "<<milesanautomobilecandrive;
return 0;
}
