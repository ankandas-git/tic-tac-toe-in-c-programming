#include <stdio.h>
#include <windows.h> // we include windows.h because we use system("cls") and  system("color 2");
char box[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
void createBoard();              // Function for making a box
void markingBoard(int, char);   //  Function for players ( X,Y)
int checkWinner();             // Function to check winner
int main(){
    int choice, player = 1, i;
    char mark;
    do {
        createBoard();
        if(player % 2)
            player =1;
        else
           player =2;

        printf("\t\tPlayer %d, Enter Choice :", player);
        scanf("%d",&choice);

              if(player == 1)
               mark = 'X';

            else
               mark = 'O';

            markingBoard(choice, mark);

            i = checkWinner();
            player++;
    }
    while
        (i == -1);
    createBoard();

    if (i == 1)
        printf("\t\t Player %d You have won the game \n\n\n\n\n\n\n\n", --player);
    else
        printf("<-------Draw------->");
return 0;
}

void createBoard()
{
    system("cls"); // we use it to clear our Screen in every input
    system("color 2"); // Screen Color

    printf("\t\t\t\t\t Player 1 (X) -- Player 2 (O) \n\n");

    printf("\t\t\t\t\t You have to Enter any number from 0 to 9 \n\n");

    printf("\t\t\t\t\t\t     |    |   \n");
    printf("\t\t\t\t\t\t %c   | %c  |%c   \n", box[1], box[2], box[3]);
    printf("\t\t\t\t\t\t_____|____|____\n");
    printf("\t\t\t\t\t\t     |    |    \n");
    printf("\t\t\t\t\t\t %c   | %c  |%c   \n", box[4], box[5], box[6]);
    printf("\t\t\t\t\t\t_____|____|____\n");
    printf("\t\t\t\t\t\t     |    |    \n");
    printf("\t\t\t\t\t\t %c   | %c  |%c   \n", box[7], box[8], box[9]);
    printf("\t\t\t\t\t\t_____|____|____\n");
    printf("\t\t\t\t\t\t     |    |    \n");
}

void markingBoard(int choice, char mark)
{
    if (choice == 1 && box[1] == '1'){
        box[1] = mark;
    }
    else if (choice == 2 && box[2] == '2'){
        box[2] = mark;
    }
    else if (choice == 3 && box[3] == '3'){
        box[3] = mark;
    }
    else if (choice == 4 && box[4] == '4'){
        box[4] = mark;
    }
    else if (choice == 5 && box[5] == '5'){
        box[5] = mark;
    }
    else if (choice == 6 && box[6] == '6'){
        box[6] = mark;
    }
    else if (choice == 7 && box[7] == '7'){
        box[7] = mark;
    }
    else if (choice == 8 && box[8] == '8'){
        box[8] = mark;
    }
    else if (choice == 9 && box[9] == '9'){
        box[9] = mark;
    }
}

int checkWinner()
{
    //Condition to check horizontally matching ..
    if (box[1] == box[2] && box[2] == box[3])
        return 1;
    else if (box[4] == box[5] && box[5] == box[6])
        return 1;
    else if (box[7] == box[8] && box[8] == box[9])
        return 1;

    // Condition to check vertically matching
    else if (box[1] == box[4] && box[4] == box[7])
        return 1;
    else if (box[2] == box[5] && box[5] == box[8])
        return 1;
    else if (box[3] == box[6] && box[6] == box[9])
        return 1;

    // Condition to check   transverse matching
    else if (box[1] == box[5] && box[5] == box[9])
        return 1;
    else if (box[3] == box[5] && box[5] == box[7])
        return 1;

    // If none condition does not match then return 0
    else if (box[1]!= '1' && box[2]!= '2' && box[3]!= '3' && box[4]!= '4' && box[5]!= '5' && box[6]!= '6' && box[7]!= '7' && box[8]!= '8' && box[9]!= '9')  // no match...
        return 0;
    else {
        return -1; //If any condition does not match then the function will return -1 that means the match draw.
    }

}

/*  Ankan Das
    B.Sc. in CSE
    North Western University, Khulna,Bangladesh.
    https://www.facebook.com/ankandas.fb
*/
