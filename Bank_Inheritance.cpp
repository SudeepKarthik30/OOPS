#include<iostream>
#include<cmath>
using namespace std;
class Bank{
    protected:
    string name;
    double acc_no;
    double amount;

    public:

    void get_data(){
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Account Number : ";
        cin>>acc_no;
        cout<<"Enter Amount to Frist Deposit : ";
        cin>>amount;
    };

    void Display_balance(){
        cout<<"Balance Amount : "<<amount<<endl;
    }

    void Deposit_amount(){
        int amt;
        cout<<"Enter Deposit Amount : ";
        cin>>amt;
        amount+=amt;
        cout<<"Amount Deposited Successfully"<<endl;
    }

    void Withdrawal(){
        int with;
        cout<<"Enter Withdrawal Amount : ";
        cin>>with;
        while(true){
            if(with>amount){
                cout<<"Inficent found !"<<endl;
                cout<<"Re-enter Withdrawal Amount : ";
                cin>>with;
            }
            else{
                cout<<"Amount Withdraw : "<<with<<endl;
                amount-=with;
                break;
            }
        }    
    }

};

class Acc_savings : public Bank{
    float interestRate;
    int time;

    public:
    void interest(){
       cout<<"Enter Interest Rate : ";
       cin>>interestRate;
       cout<<"Enter Time Period : ";
       cin>>time;
    }

    void Display_interest(){
        int add = amount * pow((1+interestRate/100),time) - amount;
        
    }
};

class Acc_current : public Bank{
};

int main(){

    string type;
    cout<<"Enter Account Type (Savings/Current) : ";
    cin>>type;

    if(type == "savings"){
        Acc_savings obj;
        obj.get_data();
        obj.Display_balance();
        obj.Deposit_amount();
        obj.Display_balance();
        obj.Withdrawal();
        obj.Display_balance();
        obj.interest();
    }
    cout<<"Enter Account Type (Savings/Current) : ";
    cin>>type;
    
    if(type == "current"){
        Acc_current obj2;
        obj2.get_data();
        obj2.Display_balance();
        obj2.Deposit_amount();
        obj2.Display_balance();
        obj2.Withdrawal();
        obj2.Display_balance();
    }

}