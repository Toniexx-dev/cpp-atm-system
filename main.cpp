#include <iostream>  
using namespace std;  
  
int main(){  
    int choice;  
    int balance = 50000;  
    int amount;
  
    cout << "====== ATM ======\n";  
    cout << " 1. Check Balance\n";  
    cout << " 2. Withdraw\n";  
    cout << " 3. Exit\n";  
    cout << "Enter your choice: \n";  
    cin >> choice;  
  
    switch (choice){  
        case 1:  
        cout << " Your balance is "  << balance;  
        break;  
  
        case 2:      
        cout << "Enter Amount: \n";      
        cin >> amount;      
        if (amount>0 && amount <= balance){      
        cout << "Successful\n" ;   
        balance -= amount;   
        cout << "Your Balance is "<< balance;      
    }      
        else {      
            cout << "Insufficient Balance";      
    }      
        break;      
  
        case 3:      
    cout << " Thank you for using our ATM ";      
        break;      
  
        default:      
        cout << " invalid Choice";  
    } 
  
return 0;  
}
