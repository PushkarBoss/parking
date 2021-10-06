#include<iostream>
using namespace std;

int main()
{
	int input; 
    int amt = 0, count = 0;
	int car=0, bus=0, ricksha=0;


    while (true)
    {
        cout<<"Welcome To iPushkar's Vehicle Parking!!\n"<<endl;
	    cout<<"Press 1 for Rickshaw"<<endl;
	    cout<<"Press 2 for Car"<<endl;
	    cout<<"Press 3 for Bus"<<endl;
	    cout<<"Press 4 for Show Record"<<endl;
	    cout<<"Press 5 for Delete Record"<<endl;
        cin>>input;
        
        
            if (input==1) {
                if(count<=50){
                     amt = amt + 100;
                     count++;
                     ricksha++;
                } else {
                    cout<<"Parking Slot Is Full!!"<<endl;
                }
            } else if (input==2) {
                if(count<=50){
                     amt = amt + 200;
                     count++;
                     car++;
                } else {
                    cout<<"Parking Slot Is Full!!"<<endl;
                }
            } else if (input==3) {
                if(count<=50){
                     amt = amt + 300;
                     count++;
                     bus++;
                } else {
                    cout<<"Parking Slot Is Full!!"<<endl;
                }
            } else if (input==4) {
                cout<<"***************"<<endl;
                cout<<"The total amount = "<<amt<<endl;
                cout<<"The total number of Rikshaws parked are = "<<ricksha<<endl;
                cout<<"The total number of Cars parked are = "<<car<<endl;
                cout<<"The total number of Buses parked are = "<<bus<<endl;
                cout<<"***************"<<endl;
            } else if (input==5) {
                amt = 0;count = 0;
                ricksha= 0;car = 0;bus = 0;
                cout<<"**********"<<endl;
                cout<<"Record Deleted"<<endl;
                cout<<"**********"<<endl;
            } else {
                cout<<"Invalid Number Clicked"<<endl;
            }
    }
    
	return 0;
}