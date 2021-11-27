#include <iostream>
using namespace std;
char matrix[3][3] = { '1', '2', '3', '4','5', '6', '7', '8', '9'};
char player = 'X';
void draw()
{
    system("cls");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
/*FIGURE OUT HOW TO STOP PLAYER X AND O FROM CHOOSING THE SAME SPACES*/
void input()
{
    int a;
    cout << "Press the number of the field you'd like to put you shape in: ";
    cin >> a;
    if (a == 1)
        matrix[0][0] = player;
    else if (a == 2)
        matrix[0][1] = player;
    else if (a == 3)
        matrix[0][2] = player;
    else if (a == 4)
        matrix[1][0] = player;
    else if (a == 5)
        matrix[1][1] = player;
    else if (a == 6)
        matrix[1][2] = player;
    else if (a == 7)
        matrix[2][0] = player;
    else if (a == 8)
        matrix[2][1] = player;
    else if (a == 9)
        matrix[2][2] = player; 
    /* Here is where I tried to figure out how to stop a player choosing the same space as each other...
    Do I need to make 2 seperate players? char player1 and char player 2?
    
    if (a == )
    {
        return 'O';
    }
    else
    {
        cout << "Player X has already chosen that space\n";
    }*/
}
void toggle_player()
{
    if (player == 'X')
        player = 'O';
    else
        player = 'X';
}

char win()
{
    if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X') 
    {
        return 'X';
    }
    else if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X') 
    {
        return 'X';
    }
    else if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X') 
    {
        return 'X';
    }
    else if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
    {
        return 'X';
    }
    else if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
    {
        return 'X';
    }
    else if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
    {
        return 'X';
    }
    else if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
    {
        return 'X';
    }
    else if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
    {
        return 'X';
    }
    else if (matrix[0][2] == 'X' && matrix[1][1] == 'X' && matrix[2][0] == 'X')
    {
        return 'X';
    }
    else if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
    {
        return 'O';
    }
    else if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
    {
        return 'O';
    }
    else if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
    {
        return 'O';
    }
    else if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
    {
        return 'O';
    }
    else if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
    {
        return 'O';
    }
    else if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
    {
        return 'O';
    }
    else if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
    {
        return 'O';
    }
    else if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
    {
        return 'O';
    }
    else if (matrix[0][2] == 'O' && matrix[1][1] == 'O' && matrix[2][0] == 'O')
    {
        return 'O';
    }
    return '/';
}
int main()
{
    draw();
    while (1)
    {
        input();
        draw();
        if (win() == 'X')
        {
            cout << "Player X is the winner!\n";
                break;
        }
        else if (win() == 'O')
        {
            cout << "Player O is the winner!";
                break;
        }
        toggle_player();
   }
}
/* Why can't I use a switch loop? when I the space I chose is auto increased by one? 
exp. int a = 1 which is matrix [0][0] yet somehow X takes of the place of matrix [0][1] whcih is 2 */  

/*switch (a)
    {
    case 0:
        (a == 1);
        matrix[0][0] = player;
        break;
    case 1:
        (a == 2);
        matrix[0][1] = player;
        break;
    case 2:
        (a == 3);
        matrix[0][2] = player;
        break;
    case 3:
        (a == 4);
        matrix[1][0] = player;
        break;
    case 4:
        (a == 5);
        matrix[1][1] = player;
        break;
    case 5:
        (a == 6);
        matrix[1][2] = player;
        break;
    case 6:
        (a == 7);
        matrix[2][0] = player;
        break;
    case 7:
        (a == 8);
        matrix[2][1] = player;
        break;
    case 8:
        (a == 9);
        matrix[2][2] = player;
        break;
    } */
