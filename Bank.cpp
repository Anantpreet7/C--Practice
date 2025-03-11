#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    double balance = 0;
    int choice = 0;

    do {
        std::cout << "Enter what you want to do from given choices:\n";
        std::cout << " 1. Show available balance \n";
        std::cout << " 2. Deposit cash in your bank account \n";
        std::cout << " 3. Withdraw money from your bank account \n";
        std::cout << " 4. Exit \n";
        std::cout << "Your choice: ";
        
        std::cin >> choice;

        switch (choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                std::cout << "Thank you for using our service!\n";
                break;
            default:
                std::cout << "Invalid choice, please try again.\n";
                break;
        }

    } while (choice != 4);

    return 0;
}

void showBalance(double balance) {
    std::cout<<"Your balance is : " <<std::setprecision(2)<<std::fixed<< balance << '\n' ;    
}

double deposit(){
    double amount = 0;
    std::cout<<"How much amount do you want to deposit :";
    std::cin>>amount;
    if(amount>0) {
        return amount ;
    } else {
        std::cout<<"Enter valid amount ";
    }
}
 
double withdraw(double balance){
    double amount = 0;
    std::cout<<"enter amount to withdraw : ";
    std::cin>>amount;
    if(amount>balance){
        std::cout<<"Insufficient amount in your Bank account Please enter according to your Balance" ;
        return 0;
    } else if (amount <= 0) {
        std::cout<<"Enter a valid amount " ;
        return 0;
    } else {
        return amount;
    }
}