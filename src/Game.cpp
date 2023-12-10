#include <iostream>
#include <fstream>
#include "Game.h"

using namespace std;

pair<int,int> Game::playerAction(unsigned char maze[20][20], int posX, int posY, unsigned char player)
{
    cout << "\nAction: ";
    cin >> action;

    int prevposX = posX;
    int prevposY = posY;
    unsigned char space = {32};

        maze [posX][posY] = player;

        switch (action)
        {
        case 'w':
        case 'W':
            if (maze [posX - 1][posY] != '#')
            {
                posX--;
                maze [prevposX][prevposY] = space;
                system("cls");
                break;
            }
            if (maze [posX - 1][posY] = '#')
            {
                system("cls");
                break;
            }
        case 'a':
        case 'A':
            if (maze [posX][posY - 1] != '#')
            {
                if (maze [posX][posY - 1] != '>')
                {
                    posY--;
                    maze [prevposX][prevposY] = space;
                    system("cls");
                    break;
                }
            }
            if (maze [posX][posY - 1] = '#')
            {
                system("cls");
                break;
            }
        case 's':
        case 'S':
            if (maze [posX + 1][posY] != '#')
            {
                posX++;
                maze [prevposX][prevposY] = space;
                system("cls");
                break;
            }
            if (maze [posX + 1][posY] = '#')
            {
                system("cls");
                break;
            }
        case 'd':
        case 'D':
            if (maze [posX][posY + 1] != '#')
            {
                posY++;
                maze [prevposX][prevposY] = space;
                system("cls");
                break;
            }
            if (maze [posX][posY + 1] = '#')
            {
                system("cls");
                break;
            }
        default:
            system("cls");
            cout << "Incorrect character please use WASD!" << endl;
            break;
        }

        if(posX == 18 && posY == 19)
        {
            cout<< "Game over. you win!" << endl;
            ofstream file("Maze runner.txt");
            string text = "Congratulations you have successfully completed the maze!";

            file << text << endl;

            file.close();
            exit(0);
        }
        std::make_pair(posX, posY);
    }
