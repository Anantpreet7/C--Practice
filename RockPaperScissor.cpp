#include<iostream>
#include<ctime>
char getUserChoice();
char getComputerChoice();
void showcase(char choice);
void choosewinner(char player, char computer);

int main() {
    return 0;
}

char getUserChoice(){
    char player;
    std::cout<<" ****** Rock Paper Scissor Game ******* \n";
    do {
        std::cout<<" Choose r for Rock \n";
        std::cout<<" Choose p for Paper \n";
        std::cout<<" Choose s for Scissor \n";
        std::cin>>player;
        std::cout<<player;
}while(player != 'r' && player != 's' && player != 'p') ;
return player ;
}

char getComputerChoice() {
    srand(time(0));
    int num = rand() % 3 +1;
    switch(num){
        case 1 : return 'r' ;
        case 2 : return 'p' ;
        case 3 : return 's' ;
    }
}

void showcase(char choice) {
    switch(choice){
        case 'r' : std::cout<<"Rock";
        case 'p' : std::cout<<"Paper";
        case 's' : std::cout<<"Scissor";
    }
}

void choosewinner(char player, char computer){
    switch(player){
        case 'r' : if(computer == 'r'){
            std::cout<<"It is a tie";
        } else if (computer == 'p') {
            std::cout<<"You lose";
        }else {
            std::cout<<"You win ";
        } 
        break;

        case 'p' : if(computer == 'p'){
            std::cout<<"It is a tie";
        } else if (computer == 's') {
            std::cout<<"You lose";
        }else {
            std::cout<<"You win ";
        } break;

        case 's' : if(computer == 's'){
            std::cout<<"It is a tie";
        } else if (computer == 'r') {
            std::cout<<"You lose";
        }else {
            std::cout<<"You win ";
        } break;

    }
}