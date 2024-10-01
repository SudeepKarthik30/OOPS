#include<iostream>
using namespace std;
class student{
    protected:
    string gender; 

    public:
    void set_gender(string g){
        gender = g;
    }
    void display(){
        cout<<"Gender : "<<gender<<endl;
    }
};

class S1:public student{
    protected:
    string name;
    int age;
    
    public:
    void S1_data(string n,int a){
        name = n;
        age = a;
    }
    void display(){
        student::display();
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;

    }
};

class S2:public student{
    protected:
    string name;
    int age;
    
    public:
    void S2_data(string n,int a){
        name = n;
        age = a;
    }
    void display(){
        student::display();
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;

    }
};

int main(){
     S1 obj1;
     S2 obj2;
     obj1.S1_data("Jessu",18);
     obj1.set_gender("Male");
     obj1.display();

     obj2.set_gender("Female");
     obj2.S2_data("Siri",17);
     obj2.display();

}