#include<iostream>
#include<ctime>
char getUserChoice();
char getComputerChoice();
void showchoice(char choice);
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