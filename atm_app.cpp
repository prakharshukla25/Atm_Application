#include <iostream>
using namespace std;

void showMenu(){
    cout<<"***************************"<<endl;
    cout<<"@@@@@@@@@@ MENU @@@@@@@@@@@"<<endl;
    cout<<"@@@@ 1. Check Balance  @@@@"<<endl;
    cout<<"@@@@@@@ 2. Deposit   @@@@@@@"<<endl;
    cout<<"@@@@@@@ 3. Withdraw  @@@@@@@"<<endl;
    cout<<"@@@@@@@@  4. Exit  @@@@@@@@@"<<endl;
    cout<<"***************************"<<endl;
}
int main()
{
    //check balance , deposit money , withdraw money, show menu
int option;
    
do
{
    showMenu();
    
    cout<<"******************************************************"<<endl;
    cout<<"@@ Please Chosse The Transaction You Want To Perform :";
    cin>>option;
    system("cls");
    double balance = 500 ;
    

    switch(option) {
        case 1: cout<<"@@@@ Balance is :"<<balance<<"$"<<endl; break;
        case 2: cout<<"@@@@ Deposit Amount:";
              double depositAmount;
              cin>>depositAmount;
              balance += depositAmount;
              break;
        case 3: cout<<"@@@@ Withdraw Amount:";
              double withdrawAmount;
              cin>>withdrawAmount;
              balance += withdrawAmount;
              if(withdrawAmount <= balance)
                   balance -= withdrawAmount;
              else
                  cout<<"@@ Not Enough Balance"<<endl;
              break;

    }
} while(option!=4);
   
}