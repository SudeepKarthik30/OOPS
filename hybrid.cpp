#include<iostream>
using namespace std;
class A{
     protected:
     int r;

     public:
     void get_data(int rr){
        r = rr;
     }
     void display(){
         cout<<"Area : "<<3.14*r*r<<endl;
     }
};

class B:virtual public A{
     protected:
     int l,b;

     public:
     void get_datarec(int ll,int bb){
        l = ll;
        b = bb;
     }
     void displayrec(){
        cout<<"Area Of Rectangle : "<<l*b<<endl;
     }
};

class C:virtual public A{
        protected:
        int s1,s2;

        public:
        void get_sqr(int ss1,int ss2){
            s1 = ss1;
            s2 = ss2;
        }
        void display_sqr(){
            cout<<"Area of Square : "<<s1*s2<<endl;
        }
};

class D:public B,public C{
    private:
    int a,b;

    public:
    void get_datasum(int aa,int bb){
         a = aa;
         b = bb;
    }
    void display_sum(){
         cout<<"Sum : "<<a+b<<endl;
    }
};

int main(){
     D x;
     x.get_data(5);
     x.display();
     x.get_datarec(10,20);
     x. displayrec();
     x.get_sqr(5,5);
     x.display_sqr();
     x.get_datasum(100,200);
     x.display_sum();
}