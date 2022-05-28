// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
 class banking
    {
        public:
        int balance,withdraw_amt,deposit_amt;
        char holder[30];
        int acc_no;
        void deposit(){
            cout<<"Enter Amount you want to deposit";
            cin>>deposit_amt;
            balance = balance +deposit_amt;
            cout<<"Deposited amount"<<deposit_amt<<endl;
            cout<<"Total Balance:"<<balance<<endl;
        }
        void withdraw(){
             cout<<"Enter Amount you want to withdraw";
            cin>>withdraw_amt;
            if(withdraw_amt>balance){
                cout<<"Not availble balance"<<endl;
                
            }else{
            balance = balance-withdraw_amt;
            cout<<"Withdrawn amount"<<withdraw_amt<<endl;
            cout<<"Total Balance:"<<balance<<endl;
            }}
            void display(){
            cout<<"Name:"<<holder<<endl;
            cout<<"Account Number:"<<acc_no<<endl;
            cout<<"Balance:"<<balance<<endl;
            }
            
        };

int main() {
    int n;
    banking h1;
    cout<<"Enter Name of Holder:";
    cin>>h1.holder;
    cout<<"Enter Acc Number:";
    cin>>h1.acc_no;
    cout<<"Enter Balance:";
    cin>>h1.balance;
    h1.display();
lable:
     cout<<"Press 1 for deposit"<<endl;
     cout<<"Press 2 for withdrawl"<<endl;
     cout<<"Your Choice";
     cin>>n;
     if(n==1){
         h1.deposit();
     }else if(n==2){
         h1.withdraw();
     }else{
         cout<<"Invalid Entry";
         goto lable;
     }

    return 0;
}
