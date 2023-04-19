#include<iostream>
#include<string.h>

using namespace std;

class student{

   private :
   	
   	int cust_id;
    char cust_name[50];
    int cust_age;
    char cust_telecome_brand_name[22];
    char cust_mobile[50];
    char cust_city[12];
    char cust_simcard_validity[40];
    
    public :
    
    void setter(int cust_id, char cust_name[],  int cust_age, char cust_telecome_brand_name[], char cust_mobile[], char cust_city[], char cust_simcard_validity[]){
    	
    	this->cust_id=cust_id; 
    	strcpy(  this->cust_name,cust_name );
    	this->cust_age=cust_age;
    	strcpy(  this->cust_telecome_brand_name,cust_telecome_brand_name );
    	strcpy(  this->cust_mobile,cust_mobile  );
    	strcpy(  this->cust_city,cust_city );
    	strcpy(  this->cust_simcard_validity,cust_simcard_validity );	 
	}
	
	
	
	
	void getter(){
		
		cout<<cust_id<<endl;
		cout<<cust_name<<endl;
	    cout<<cust_age<<endl;
	    cout<<cust_telecome_brand_name<<endl;
	    cout<<cust_mobile<<endl;
	    cout<<cust_city<<endl;
	    cout<<cust_simcard_validity<<endl;
	    
	}
};

int main(){
	
	student obj1,obj2, obj3, obj4, obj5, obj6, obj7; 
	
    char cust_name[50];	
	char cust_telecome_brand_name[50];	
	char cust_mobile[50];	
	char cust_city[50];	
	char cust_simcard_validity[50];	
	
	
	obj1.setter(1, "name : vishal", 23, "brand_name_jio", "mobiel : 1234567890", "city : surat", "simcard_validity : 1 year");
	obj1.getter();
	cout<<endl;
		
	obj1.setter(2, "name : manish", 33, "brand_name_airtel", "mobiel : 1234527490", "city : bardoli", "simcard_validity : 2 year");
	obj1.getter();
	cout<<endl;
		
	obj1.setter(3, "name : rahul", 22, "brand_name_vi", "mobiel : 1234567890", "city : yadajan", "simcard_validity : 4 year");
	obj1.getter();
	cout<<endl;
		
	obj1.setter(4, "name : naresh", 26, "brand_name_airtel", "mobiel : 1234563820", "city : kosmadi"," simcard_validity : 1 year");
	obj1.getter();
	cout<<endl;
		
	obj1.setter(5, "name : rajesh", 29,"brand_name_vi","mobiel : 1234527895","city : morthana","simcard_validity : 5 year");
	obj1.getter();
	cout<<endl;
		
	obj1.setter(6, "name : nikhil", 31,"jio", "1234667892", "city : sachin", "simcard_validity : 1 year");
	obj1.getter();
	cout<<endl;
		
	obj1.setter(7, "name : raj", 24, "airtel", "1543234567", "city : shimadi", "simcard_validity : 2 year");
	obj1.getter();
	cout<<endl;
	
	
    
	return 0;
}
