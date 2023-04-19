#include<iostream>
#include<string.h>

using namespace std;

class student{

   private :
   	
   	int stu_id;
	char stu_name[10];
    int stu_age;
    char stu_course[22];
    char stu_email[50];
    char stu_city[12];
    char stu_college[40];
    
    public :
    
    void setter(int stu_id, char stu_name[],  int stu_age, char stu_course[], char stu_email[], char stu_city[],char stu_college[]){
    	
    	this->stu_id=stu_id; 
    	strcpy(  this->stu_name,stu_name );
    	this->stu_age=stu_age;
    	strcpy(  this->stu_course,stu_course );
    	strcpy(  this->stu_email,stu_email );
    	strcpy(  this->stu_city,stu_city );
    	strcpy(  this->stu_college,stu_college );	 
	}

	void getter(){
		
		cout<<stu_id<<endl;
		cout<<stu_name<<endl;
	    cout<<stu_age<<endl;
	    cout<<stu_course<<endl;
	    cout<<stu_email<<endl;
	    cout<<stu_city<<endl;
	    cout<<stu_college;
	    
	}
};

int main(){
	
	student obj1,obj2, obj3, obj4, obj5; 
	
    char stu_name[50];	
	char stu_course[50];	
	char stu_email[50];	
	char stu_city[50];	
	char stu_college[50];	
		
	obj1.setter(1,"stu_name : vishal",19,"stu_cours : bsc","stu_email : abc33@gmail.com","stu_city : surat","stu_college : s.v nit");
	obj1.getter();
	cout<<endl<<endl;
	
 	obj2.setter(2,"stu_name : manish",22,"stu_cours : mca","stu_email : abc55@gmail.com","stu_city : delhi","stu_college : veer narmad");
	obj2.getter();
	cout<<endl<<endl;
	
	obj3.setter(3,"stu_name : rahul",55,"stu_cours : msc","stu_email : abc44@gmail.com","stu_city : mumbai","stu_college : sd jain");
	obj3.getter();
	cout<<endl<<endl;
	
	obj4.setter(4,"stu_name : mohan",22,"stu_cours : bas-it","stu_email : abc66@gmail.com","stu_city : goa","stu_college : IIT bombay");
	obj4.getter();
	cout<<endl<<endl;
	
	obj5.setter(5,"stu_name : mehul",56,"stu_cours : mac-it","stu_email : abc88@gmail.com","stu_city : hyderabad","stu_college : IIT delhi");
	obj5.getter();
	cout<<endl<<endl;
	
	
}
