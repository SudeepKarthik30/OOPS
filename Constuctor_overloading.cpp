#include<iostream>
using namespace std;
class A{
    int a,b,c;

    public:
    A(int,int,int);
    void display();
    A();
};

void A::display(){
    cout<<"A : "<<a<<endl;
    cout<<"B : "<<b<<endl;
    cout<<"C : "<<c<<endl;
}

A::A(){
    cout<<"Enter A , B and C : ";
    cin>>a>>b>>c;
}

A::A(int x,int y,int z){
    a = x;
    b = y;
    c = z;
}

int main(){
    A k(2,3,5);
    k.display();
    A m;
    m.display();
}
