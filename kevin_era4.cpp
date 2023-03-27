#include<iostream>

using namespace std;

class Data{
	
	public:
		
	int car_id;
	char car_company_name[50];	
	char car_color[50];
	int car_model;
	int car_release_year;
	
};

int main(){
	
	Data d1,d2,d3,d4;
	
	cout<<"Enter Id : "; 
	cin>>d1.car_id;
	
	cout<<"Enter company name : "; 
	cin>>d1.car_company_name;
	
	cout<<"Enter color : "; 
	cin>>d1.car_color;
	
	cout<<"Enter model : "; 
	cin>>d1.car_model;
	
	cout<<"Enter ry : "; 
	cin>>d1.car_release_year;
	
	cout<<d1.car_id<<endl;
	cout<<d1.car_company_name<<endl;
	cout<<d1.car_color<<endl;
	cout<<d1.car_model<<endl;
	cout<<d1.car_release_year<<endl;
	
	cout<<"Enter Id : "; 
	cin>>d2.car_id;
	
	cout<<"Enter company name : "; 
	cin>>d2.car_company_name;
	
	cout<<"Enter color : "; 
	cin>>d2.car_color;
	
	cout<<"Enter model : "; 
	cin>>d2.car_model;
	
	cout<<"Enter ry : "; 
	cin>>d2.car_release_year;
	
	cout<<d2.car_id<<endl;
	cout<<d2.car_company_name<<endl;
	cout<<d2.car_color<<endl;
	cout<<d2.car_model<<endl;
	cout<<d2.car_release_year<<endl;
	
	cout<<"Enter Id : "; 
	cin>>d3.car_id;
	
	cout<<"Enter company name : "; 
	cin>>d3.car_company_name;
	
	cout<<"Enter color : "; 
	cin>>d3.car_color;
	
	cout<<"Enter model : "; 
	cin>>d3.car_model;
	
	cout<<"Enter ry : "; 
	cin>>d3.car_release_year;
	
	
	cout<<d3.car_id<<endl;
	cout<<d3.car_company_name<<endl;
	cout<<d3.car_color<<endl;
	cout<<d3.car_model<<endl;
	cout<<d3.car_release_year<<endl;

	cout<<"Enter Id : "; 
	cin>>d4.car_id;
	
	cout<<"Enter company name : "; 
	cin>>d4.car_company_name;
	
	cout<<"Enter color : "; 
	cin>>d4.car_color;
	
	cout<<"Enter model : "; 
	cin>>d4.car_model;
	
	cout<<"Enter ry : "; 
	cin>>d4.car_release_year;

	cout<<d4.car_id<<endl;
	cout<<d4.car_company_name<<endl;
	cout<<d4.car_color<<endl;
	cout<<d4.car_model<<endl;
	cout<<d4.car_release_year<<endl;
		
	return 0;
}
