#include <iostream>
#include "main.h"

int main(int argc, char ** argv){
    dohyun::Player player(0,0);
    dohyun::Monster monster(5,4,50);

    while (1){
        std::cout<<"Type Command(A/U/D/R/L/S)"<<std::endl;
        char cmd;
        std::cin>>cmd;
        switch (cmd)
        {
        case 'A':
            player.Attack(monster);
            break;
        case 'U':
            player.Y_move(1);
            break;
        case 'D':
            player.Y_move(-1);
            break;
        case 'R':
            player.X_move(1);
            break;
        case 'L':
            player.X_move(-1);
            break;
        case 'S':
            player.Show_Status();
            break;
        }
    }

    return 0;
}