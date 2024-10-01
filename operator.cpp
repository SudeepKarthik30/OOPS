#include<iostream>
using namespace std;
class BRO{
    int x,y;

    public:
    BRO(int a,int b){

        x = a;
        y = b;
    }

    void Display(){
        cout<<"\nX : "<<x<<endl;
        cout<<"Y : "<<y<<endl<<endl;
    }

    void operator+(BRO &A){
        x += A.x;
        y += A.y;
    }  
    void operator-(BRO &A){
        x -= A.x;
        y += A.y;
    }
    void operator*(BRO &A){
        x *= A.x;
        y *= A.y;
    }    
    void operator/(BRO &A){
        x /= A.x;
        y /= A.y;
    } 
};

int main(){
     BRO obj1(10,20);
     BRO obj2(5,10);

     cout<<"Displaying Values of 1st Object : ";
     obj1.Display();

     cout<<"Displaying Values of 2nd Object : ";
     obj2.Display();

     obj1+obj2;
     cout<<"Addition ";
     obj1.Display();
     
     obj1-obj2;
     cout<<"Substraction ";
     obj1.Display();

     obj1*obj2;
     cout<<"Multiplication ";
     obj1.Display();
     
     obj1/obj2;
     cout<<"Divide ";
     obj1.Display();
     
}