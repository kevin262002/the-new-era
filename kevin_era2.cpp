#include<iostream>

using namespace std;

class a{
	
	private :
		
		int emp_id;
		
	public:
		
	char emp_cn[50];	
	char emp_color[50];
	int emp_model;
	int emp_ry;
	
};
int main(){
	
	a d1,d2,d3,d4;
	
	cout<<"Enter Id : "; 
	cin>>d1.emp_id;
	
	cout<<"Enter company name : "; 
	cin>>d1.emp_cn;
	
	cout<<"Enter color : "; 
	cin>>d1.emp_color;
	
	cout<<"Enter model : "; 
	cin>>d1.emp_model;
	
	cout<<"Enter ry : "; 
	cin>>d1.emp_ry;
	cout<<endl;
	
	
	cout<<"Enter Id : "; 
	cin>>d2.emp_id;
	
	cout<<"Enter company name : "; 
	cin>>d2.emp_cn;
	
	cout<<"Enter color : "; 
	cin>>d2.emp_color;
	
	cout<<"Enter model : "; 
	cin>>d2.emp_model;
	
	cout<<"Enter ry : "; 
	cin>>d2.emp_ry;
	
	cout<<endl;
	
	cout<<"Enter Id : "; 
	cin>>d3.emp_id;
	
	cout<<"Enter company name : "; 
	cin>>d3.emp_cn;
	
	cout<<"Enter color : "; 
	cin>>d3.emp_color;
	
	cout<<"Enter model : "; 
	cin>>d3.emp_model;
	
	cout<<"Enter ry : "; 
	cin>>d3.emp_ry;
	
	
	cout<<endl;

	cout<<"Enter Id : "; 
	cin>>d4.emp_id;
	
	cout<<"Enter company name : "; 
	cin>>d4.emp_cn;
	
	cout<<"Enter color : "; 
	cin>>d4.emp_color;
	
	cout<<"Enter model : "; 
	cin>>d4.emp_model;
	
	cout<<"Enter ry : "; 
	cin>>d4.emp_ry;
	
	
	cout<<endl;


	cout<<d1.emp_id<<endl;
	cout<<d1.emp_cn<<endl;
	cout<<d1.emp_color<<endl;
	cout<<d1.emp_model<<endl;
	cout<<d1.emp_ry<<endl;
		
		cout<<endl;
		
	cout<<d2.emp_id<<endl;
	cout<<d2.emp_cn<<endl;
	cout<<d2.emp_color<<endl;
	cout<<d2.emp_model<<endl;
	cout<<d2.emp_ry<<endl;
		
		cout<<endl;

	cout<<d3.emp_id<<endl;
	cout<<d3.emp_cn<<endl;
	cout<<d3.emp_color<<endl;
	cout<<d3.emp_model<<endl;
	cout<<d3.emp_ry<<endl;
		
		cout<<endl;

	cout<<d4.emp_id<<endl;
	cout<<d4.emp_cn<<endl;
	cout<<d4.emp_color<<endl;
	cout<<d4.emp_model<<endl;
	cout<<d4.emp_ry<<endl;
		
		cout<<endl;
	return 0;
}

