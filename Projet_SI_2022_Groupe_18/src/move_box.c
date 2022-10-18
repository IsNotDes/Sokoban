#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "move_box.h"
#include "player_position.h"

int move_box_up(int x, int y, char** tab) {
    if (tab[x][y] == '@' && x >= 2) {
        if (tab[x-1][y] == '$') {
            if (tab[x-2][y] == ' ') {
                tab[x][y] = ' ';
                tab[x-1][y] = '@';
                tab[x-2][y] = '$';
                x--;
                return 1;
            }
            else if (tab[x-2][y] == '.') {
                tab[x][y] = ' ';
                tab[x-1][y] = '@';
                tab[x-2][y] = '*';
                x--;
                return 1;
            }
        }
        else if (tab[x-1][y] == '*') {
            if (tab[x-2][y] == ' ') {
                tab[x][y] = ' ';
                tab[x-1][y] = 'a';
                tab[x-2][y] = '$';
                x--;
                return 1;
            }
            else if (tab[x-2][y] == '.') {
                tab[x][y] = ' ';
                tab[x-1][y] = 'a';
                tab[x-2][y] = '*';
                x--;
                return 1;
            } 
        }
    }
    else if (tab[x][y] == 'a' && x >= 2) {
        if (tab[x-1][y] == '$') {
            if (tab[x-2][y] == ' ') {
                tab[x][y] = '.';
                tab[x-1][y] = '@';
                tab[x-2][y] = '$';
                x--;
                return 1;
            }
            else if (tab[x-2][y] == '.') {
                tab[x][y] = '.';
                tab[x-1][y] = '@';
                tab[x-2][y] = '*';
                x--;
                return 1;
            }
        }
        else if (tab[x-1][y] == '*') {
            if (tab[x-2][y] == ' ') {
                tab[x][y] = '.';
                tab[x-1][y] = 'a';
                tab[x-2][y] = '$';
                x--;
                return 1;
            }
            else if (tab[x-2][y] == '.') {
                tab[x][y] = '.';
                tab[x-1][y] = 'a';
                tab[x-2][y] = '*';
                x--;
                return 1;
            } 
        }
    }
    return 0;
}

int move_box_down(int x, int y, int *nb_lignes, char** tab) {
    if (tab[x][y] == '@' && x <= *nb_lignes - 2) {
        if (tab[x+1][y] == '$') {
            if (tab[x+2][y] == ' ') {
                tab[x][y] = ' ';
                tab[x+1][y] = '@';
                tab[x+2][y] = '$';
                x++;
                return 1;
            }
            else if (tab[x+2][y] == '.') {
                tab[x][y] = ' ';
                tab[x+1][y] = '@';
                tab[x+2][y] = '*';
                x++;
                return 1;
            }
        }
        else if (tab[x+1][y] == '*') {
            if (tab[x+2][y] == ' ') {
                tab[x][y] = ' ';
                tab[x+1][y] = 'a';
                tab[x+2][y] = '$';
                x++;
                return 1;
            }
            else if (tab[x+2][y] == '.') {
                tab[x][y] = ' ';
                tab[x+1][y] = 'a';
                tab[x+2][y] = '*';
                x++;
                return 1;
            } 
        }
    }
    else if (tab[x][y] == 'a' && x <= *nb_lignes - 2) {
        if (tab[x+1][y] == '$') {
            if (tab[x+2][y] == ' ') {
                tab[x][y] = '.';
                tab[x+1][y] = '@';
                tab[x+2][y] = '$';
                x++;
                return 1;
            }
            else if (tab[x+2][y] == '.') {
                tab[x][y] = '.';
                tab[x+1][y] = '@';
                tab[x+2][y] = '*';
                x++;
                return 1;
            }
        }
        else if (tab[x+1][y] == '*') {
            if (tab[x+2][y] == ' ') {
                tab[x][y] = '.';
                tab[x+1][y] = 'a';
                tab[x+2][y] = '$';
                x++;
                return 1;
            }
            else if (tab[x+2][y] == '.') {
                tab[x][y] = '.';
                tab[x+1][y] = 'a';
                tab[x+2][y] = '*';
                x++;
                return 1;
            } 
        }
    }
    return 0;
}

int move_box_right(int x, int y, int *nb_colonnes, char** tab) {
    if (tab[x][y] == '@' && y <= *nb_colonnes - 2) {
        if (tab[x][y+1] == '$') {
            if (tab[x][y+2] == ' ') {
                tab[x][y] = ' ';
                tab[x][y+1] = '@';
                tab[x][y+2] = '$';
                y++;
                return 1;
            }
            else if (tab[x][y+2] == '.') {
                tab[x][y] = ' ';
                tab[x][y+1] = '@';
                tab[x][y+2] = '*';
                y++;
                return 1;
            }
        }
        else if (tab[x][y+1] == '*') {
            if (tab[x][y+2] == ' ') {
                tab[x][y] = ' ';
                tab[x][y+1] = 'a';
                tab[x][y+2] = '$';
                y++;
                return 1;
            }
            else if (tab[x][y+2] == '.') {
                tab[x][y] = ' ';
                tab[x][y+1] = 'a';
                tab[x][y+2] = '*';
                y++;
                return 1;
            } 
        }
    }
    else if (tab[x][y] == 'a' && y <= *nb_colonnes - 2) {
        if (tab[x][y+1] == '$') {
            if (tab[x][y+2] == ' ') {
                tab[x][y] = '.';
                tab[x][y+1] = '@';
                tab[x][y+2] = '$';
                y++;
                return 1;
            }
            else if (tab[x][y+2] == '.') {
                tab[x][y] = '.';
                tab[x][y+1] = '@';
                tab[x][y+2] = '*';
                y++;
                return 1;
            }
        }
        else if (tab[x][y+1] == '*') {
            if (tab[x][y+2] == ' ') {
                tab[x][y] = '.';
                tab[x][y+1] = 'a';
                tab[x][y+2] = '$';
                y++;
                return 1;
            }
            else if (tab[x][y+2] == '.') {
                tab[x][y] = '.';
                tab[x][y+1] = 'a';
                tab[x][y+2] = '*';
                y++;
                return 1;
            } 
        }
    }
    return 0;
}

int move_box_left(int x, int y, char** tab) {
    if (tab[x][y] == '@' && y >= 2) {
        if (tab[x][y-1] == '$') {
            if (tab[x][y-2] == ' ') {
                tab[x][y] = ' ';
                tab[x][y-1] = '@';
                tab[x][y-2] = '$';
                y--;
                return 1;
            }
            else if (tab[x][y-2] == '.') {
                tab[x][y] = ' ';
                tab[x][y-1] = '@';
                tab[x][y-2] = '*';
                y--;
                return 1;
            }
        }
        else if (tab[x][y-1] == '*') {
            if (tab[x][y-2] == ' ') {
                tab[x][y] = ' ';
                tab[x][y-1] = 'a';
                tab[x][y-2] = '$';
                y--;
                return 1;
            }
            else if (tab[x][y-2] == '.') {
                tab[x][y] = ' ';
                tab[x][y-1] = 'a';
                tab[x][y-2] = '*';
                y--;
                return 1;
            } 
        }
    }
    else if (tab[x][y] == 'a' && y >= 2) {
        if (tab[x][y-1] == '$') {
            if (tab[x][y-2] == ' ') {
                tab[x][y] = '.';
                tab[x][y-1] = '@';
                tab[x][y-2] = '$';
                y--;
                return 1;
            }
            else if (tab[x][y-2] == '.') {
                tab[x][y] = '.';
                tab[x][y-1] = '@';
                tab[x][y-2] = '*';
                y--;
                return 1;
            }
        }
        else if (tab[x][y-1] == '*') {
            if (tab[x][y-2] == ' ') {
                tab[x][y] = '.';
                tab[x][y-1] = 'a';
                tab[x][y-2] = '$';
                y--;
                return 1;
            }
            else if (tab[x][y-2] == '.') {
                tab[x][y] = '.';
                tab[x][y-1] = 'a';
                tab[x][y-2] = '*';
                y--;
                return 1;
            } 
        }
    }
    return 0;
}