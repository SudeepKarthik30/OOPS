#include<iostream>
using namespace std;

class A{
      int num;

      public:
      A(int g){
        num = g;
      }

      friend void Reverse(A);
};

void Reverse(A n){
    int num1 = 0;

    while(n.num >0){
        int rem = n.num%10;
        num1 = num1 * 10 + rem;
        n.num /=10;
    }

    cout<<"Reversed Number : "<<num1;
}

int main(){
    int k;
    cout<<"Enter Number : ";
    cin>>k;

    A obj(k);
    Reverse(obj);
}
