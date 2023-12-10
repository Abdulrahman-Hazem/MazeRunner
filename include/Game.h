#ifndef GAME_H
#define GAME_H


class Game
{
unsigned char action;

public:

    std::pair<int,int> playerAction (unsigned char maze[20][20], int posX, int posY, unsigned char player);

};

#endif // GAME_H
