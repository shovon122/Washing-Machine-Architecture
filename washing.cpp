#include<iostream>
using namespace std;
void manualMode();
void defaultMode();
int temp, timeToWash, operation;
int main() {
     int mode =0, part=3, waterLevel;
     int doorSensor=0, timer = 3,waterLevelSensor = 0, tempSensor = 25;
     char startPause;
     cout<<"\n\n************ Welcome To Our Controlling Washing Machine Project **********\n\n"<<endl;
 do{
      cout<<"\nChoose Mode:\n    (1)Default\n    (2)Manual \n";
      cin>>mode;
      if (mode == 1)
                 defaultMode();
      if (mode == 2)
                 manualMode();
 }
 while(mode == 0);
 cout<<"\nChoose Types of Cloths to wash:\n(1)Cotton\n(2)Silk\n(3)Woolen \n";
 cin>>part;
 switch(part){
            case 1:
            case 2:
                 waterLevel= 0.5;
                 break;
            case 3:
                 waterLevel = 1;
                 break;
 }
 if (doorSensor == 0){
      do{
                 cout<<"\nPress (S/s) to Start,and close the Door.\n"<<endl;
                 cin>>startPause;
                 cout<<"\nLED is On\n";
                 while(waterLevelSensor != waterLevel){
                             waterLevelSensor++;
                 }
                 while(tempSensor != temp){
                             tempSensor++;
                 }
                 cout<<"Washing Operation Started!               Time Left:"<<timeToWash<<endl;
                 cout<<"Washing with Powder Operation Started!\n";
                 timeToWash = timeToWash / 2 ;
                 cout<<"Deep Wash Operation Started!               Time Left:"<<timeToWash<<endl;
                 timeToWash = timeToWash / 2 ;
                 cout<<"Drying Operation Started!               Time Left:"<<timeToWash<<endl;
                 timeToWash = 0 ;
                 startPause = 'P';
      }
      while((startPause == 's') || (startPause =='S'));
 }
 cout<<"End!\nLED is Off";
 return 0;
}
void manualMode(){
     cout<<"\nEnter Temperature: \n";
     cin>>temp;
     cout<<"\nEnter Time to wash: \n";
     cin>>timeToWash;
     cout<<"\nChoose Operation:\n(1)Water Only\n(2)Water and Powder\n(3)Deep Wash\n(4)Dry\n(5)All\n";
     cin>>operation;
}
void defaultMode(){
     int whatToWash;
     cout<<"\nChoose what to Wash:\n(1)Shirt\n(2)Jeans Pant\n(3)Jacket\n";
     cin>>whatToWash;
     switch(whatToWash){
          case 1:
                temp = 30;
                timeToWash = 3;
                break;
          case 2:
                temp = 40;
                timeToWash = 3;
                break;
          case 3:
                temp = 60;
                timeToWash = 3;
                break;     }
 }
