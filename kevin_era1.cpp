#include<iostream>

using namespace std;
class a{
	public:
		
	int bedroom;
	int kitchen;	
	int bathroom;
	int floor;
	int balcony;
	
};
int main(){
	
	a d1;
	
	cout<<"Enter number bedroom : "; 
	cin>>d1.bedroom;
	
	cout<<"Enter number of kitchen : "; 
	cin>>d1.kitchen;
	
	cout<<"Enter number of bathroom : "; 
	cin>>d1.bathroom;
	
	cout<<"Enter number of floor : "; 
	cin>>d1.floor;
	
	cout<<"Enter number of balcony : "; 
	cin>>d1.balcony;
	
	cout<<endl;

	cout<<"Bedroom : "<<d1.bedroom<<endl;
	cout<<"Kitchen : "<<d1.kitchen<<endl;
	cout<<"Bathroom : "<<d1.bathroom<<endl;
	cout<<"Floor : "<<d1.floor<<endl;
	cout<<"Balcony : "<<d1.balcony<<endl;
		
		
	return 0;
}
