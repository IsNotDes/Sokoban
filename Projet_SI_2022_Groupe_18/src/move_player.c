#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "move_player.h"
#include "player_position.h"

int move_player_up(int x, int y, char** tab) {
    if (tab[x][y] == '@' && x >= 1) {
        if (tab[x-1][y] == ' ') {
            tab[x][y] = ' ';
            tab[x-1][y] = '@';
            x--;
            return 1;
        }
        else if (tab[x-1][y] == '.') {
            tab[x][y] = ' ';
            tab[x-1][y] = 'a';
            x--;
            return 1;
        }
    }
    else if (tab[x][y] == 'a' && x >= 1) {
        if (tab[x-1][y] == ' ') {
            tab[x][y] = '.';
            tab[x-1][y] = '@';
            x--;
            return 1;
        }
        else if (tab[x-1][y] == '.') {
            tab[x][y] = '.';
            tab[x-1][y] = 'a';
            x--;
            return 1;
        }
    }
    return 0;
}   

int move_player_down(int x, int y, int *nb_lignes, char** tab) {
    if (tab[x][y] == '@' && x <= *nb_lignes - 1) {
        if (tab[x+1][y] == ' ') {
            tab[x][y] = ' ';
            tab[x+1][y] = '@';
            x++;
            return 1;                    
        }
        else if (tab[x+1][y] == '.') {
            tab[x][y] = ' ';
            tab[x+1][y] = 'a';
            x++;
            return 1;
        }
    }
    else if (tab[x][y] == 'a' && x <= *nb_lignes - 1) {
        if (tab[x+1][y] == ' ') {
            tab[x][y] = '.';
            tab[x+1][y] = '@';
            x++;
            return 1;
        }
        else if (tab[x+1][y] == '.') {
            tab[x][y] = '.';
            tab[x+1][y] = 'a';
            x++;
            return 1;
        }
    }
    return 0;
}

int move_player_right(int x, int y, int *nb_colonnes, char** tab) {
    if (tab[x][y] == '@' && y <= *nb_colonnes - 1) {
        if (tab[x][y+1] == ' ') {
            tab[x][y] = ' ';
            tab[x][y+1] = '@';
            y++;
            return 1;                    
        }
        else if (tab[x][y+1] == '.') {
            tab[x][y] = ' ';
            tab[x][y+1] = 'a';
            y++;
            return 1;
        }
    }
    else if (tab[x][y] == 'a' && y <= *nb_colonnes - 1) {
        if (tab[x][y+1] == ' ') {
            tab[x][y] = '.';
            tab[x][y+1] = '@';
            y++;
            return 1;
        }
        else if (tab[x][y+1] == '.') {
            tab[x][y] = '.';
            tab[x][y+1] = 'a';
            y++;
            return 1;
        }
    }
    return 0;
}

int move_player_left(int x, int y, char** tab) {
    if (tab[x][y] == '@' && y >= 1) {
        if (tab[x][y-1] == ' ') {
            tab[x][y] = ' ';
            tab[x][y-1] = '@';
            y--;
            return 1;                    
        }
        else if (tab[x][y-1] == '.') {
            tab[x][y] = ' ';
            tab[x][y-1] = 'a';
            y--;
            return 1;
        }
    }
    else if (tab[x][y] == 'a' && y >= 1) {
        if (tab[x][y-1] == ' ') {
            tab[x][y] = '.';
            tab[x][y-1] = '@';
            y--;
            return 1;
        }
        else if (tab[x][y-1] == '.') {
            tab[x][y] = '.';
            tab[x][y-1] = 'a';
            y--;
            return 1;
        }
    }
    return 0;
}