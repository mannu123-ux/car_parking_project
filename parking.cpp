#include<iostream>
using namespace std;

int main()
{
    int c=0;
    int b=0;
    int r=0;
    int num;
    int amount=0,count=0;
    //menu
     while(true)
     {

    cout<<"Enter 1 for RIKSHA"<<endl;
    cout<<"Enter 2 for  CAR"<<endl;
    cout<<"Enter 3 for  BUS"<<endl;
    cout<<"Enter 4 for  to show the record"<<endl;
    cout<<"Enter 5  to delete the record"<<endl;
    cin>>num;

    if(num==1)
    {
        if(count<=50){
        r++;
        amount=amount+100;
        count=count+1;
    }
    else{
        cout<<"Parking is full......."<<endl;
    }
    }
         
    else if(num==2)
    {
        if(count<=50){
         c++;
        
        amount=amount+200;
        count=count+1;
     }
     else{
         cout<<"Parking is full........"<<endl;
     } }
    else if(num==3)
    {
        if(count<=50){
         b++;   
        amount=amount+300;
        count=count+1;
    }
    else{
        cout<<"Parking is full..........."<<endl; 
    }
    }
    else if(num==4)
    {
        cout<<"*********************************************"<<endl;
         cout<<" the total amount = "<<amount<<endl;
         cout<<"the total number of vehicles parked = "<<count<<endl;    
         cout<<"the total number of  riksha parked = "<<r<<endl;    
         cout<<"the total number of  car parked = "<<c<<endl;    
         cout<<"the total number of  bus parked = "<< b<<endl;    
        cout<<"*********************************************"<<endl<<endl;
    }
    else if(num==5)
    {
        amount=0;
        count= 0;
        r=0;
        b=0;
        c=0;

         cout<<"*********************************************"<<endl ;
          cout<<"RECORD DELETED"<<endl;
          cout<<"*********************************************"<<endl<<endl;
        
    }
     }
    return 0;
}