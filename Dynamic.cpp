#include<iostream>
#include<string.h>
using namespace std;

class student{
   private:
     string name;
     int roll;
     
   public:
     student(string title,int num){
       name = title;
       roll = num;
     }
     
     void display(int i)
     {
       cout<<"details of student- "<<i+1 <<endl;
       cout<<"name: "<<name<<endl;
       cout<<"roll_no: "<<roll<<endl;
     }
};

int main()
{
  int i,n,roll;
  string name;
  static int count2=0;
  cout<<"enter no of student details: "<<endl;
  cin>>n;
  for(i=0;i<n;i++)
  {
     cout<<"enter name, roll of student- "<<i+1 <<endl;
     cin>>name>>roll;
     student si(name,roll);
     student *ptr = &si;
     ptr->display(count2);
     count2++;
  }
 
  return 0;
}



















