#include<iostream>
using namespace std;

class staff{
    protected:
    string name;
    int code;

    public:
    staff(string n,int c){
        name = n;
        code = c;
    }

    void Display_staff(){
        cout<<"Name : "<<name<<endl;
        cout<<"Code : "<<code<<endl;
    }
};

class teacher : public staff{
    int publication;
    string subject;

    public:
    teacher(string n,int c,int pub,string sub):staff(n,c){
        publication = pub;
        subject = sub;
    }
    void Display_teacher(){
        Display_staff();
        cout<<"Subject : "<<subject<<endl;
        cout<<"Publication : "<<publication<<endl;
    }
};

class officer : public staff{
    string grade;

    public:
    officer(string n,int c,string g):staff(n,c){
        grade = g;
    }

     void Display_grade(){
        Display_staff();
        cout<<"Grade : "<<grade<<endl;
    }
};

class typist : public staff{
    int speed;

    public:
    typist(string n,int c,int s):staff(n,c){
        speed = s;
    }

     void Display_type(){
        Display_staff();
        cout<<"Speed : "<<speed<<endl;
    }
};

class regular: public typist{
    public:
    regular(string n,int c,int s):typist(n,c,s){}

    void Display_regular(){
        Display_type();
    }
};

class casual : public typist{
    int dialy_wages;

    public:
    casual(string n,int c,int s,int dw):typist(n,c,s){
      dialy_wages = dw;
    }

    void Display_casual(){
        Display_type();
        cout<<"Daily Wages : "<<dialy_wages<<endl;
    }
};



int main(){
     teacher obj("Madam",2305,2014,"oops");
     cout<<"Displaying teacher Info : \n";
     obj. Display_teacher();

    officer obj2("Sir",1010,"AA");
    cout<<"\n\nDisplaying Officer Info : \n";
    obj2.Display_grade();

    regular obj3("Karthik",2020,20);
    cout<<"\n\nDisplaying Regular Typist Info : \n";
    obj3.Display_regular();

    casual obj4("Sudeep",5050,50,1000);
    cout<<"\n\nDisplaying Casual Typist Info :\n";
    obj4.Display_casual();

}