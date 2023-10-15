#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{



    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");


    // TODO: Compute and return score for string
    //need to check every characther in word1 and word2, for as many charcthers there are in each word. A strlen function seems useful
    int lengthword1=strlen(word1);
    int lengthword2=strlen(word2);
    //define array for word1 and word2
    //char wordone[lengthword1];
    //char wordtwo[lengthword2];
    //defining variables for 1,2,3,4,5,8, and 10 points to compute score of word
    int onepoint=0;
    int twopoint=0;
    int threepoint=0;
    int fourpoint=0;
    int fivepoint=0;
    int eightpoint=0;
    int tenpoint=0;

    int onepoint2=0;
    int twopoint2=0;
    int threepoint2=0;
    int fourpoint2=0;
    int fivepoint2=0;
    int eightpoint2=0;
    int tenpoint2=0;

    //const int N=51;
    char letters[52];
    letters[0]='A';
    letters[1]='B';
    letters[2]='C';
    letters[3]='D';
    letters[4]='E';
    letters[5]='F';
    letters[6]='G';
    letters[7]='H';
    letters[8]='I';
    letters[9]='J';
    letters[10]='K';
    letters[11]='L';
    letters[12]='M';
    letters[13]='N';
    letters[14]='O';
    letters[15]='P';
    letters[16]='Q';
    letters[17]='R';
    letters[18]='S';
    letters[19]='T';
    letters[20]='U';
    letters[21]='V';
    letters[22]='W';
    letters[23]='X';
    letters[24]='Y';
    letters[25]='Z';
    letters[26]='a';
    letters[27]='b';
    letters[28]='c';
    letters[29]='d';
    letters[30]='e';
    letters[31]='f';
    letters[32]='g';
    letters[33]='h';
    letters[34]='i';
    letters[35]='j';
    letters[36]='k';
    letters[37]='l';
    letters[38]='m';
    letters[39]='n';
    letters[40]='o';
    letters[41]='p';
    letters[42]='q';
    letters[43]='r';
    letters[44]='s';
    letters[45]='t';
    letters[46]='u';
    letters[47]='v';
    letters[48]='w';
    letters[49]='x';
    letters[50]='y';
    letters[51]='z';


    int point1=0;
    for(int i=0;i<lengthword1;i++)
    {
        //key insight is that I must add word1[i]==letters[N] for every single or clause, instead of just saying word1[1]==letters[0]||letters[3].
        if (word1[i] == letters[0] || word1[i]==  letters[4] || word1[i]== letters[8]|| word1[i]== letters[11] || word1[i]== letters[13] || word1[i]== letters[14] || word1[i]==  letters[17] || word1[i]==  letters[18] || word1[i]== letters[19] || word1[i]== letters[20] || word1[i]== letters[26] || word1[i]== letters[30] || word1[i]== letters[34]|| word1[i]== letters[37]|| word1[i]== letters[39] || word1[i]== letters[40] || word1[i]== letters[43] || word1[i]== letters[44] || word1[i]== letters[45] || word1[i]== letters[46])
        {
            point1=point1+1;
        }

        else if(word1[i]==letters[3] || word1[i]==  letters[6] || word1[i]== letters[29] || word1[i]== letters[32])
        {
            point1=point1+2;
        }
        else if(word1[i]== letters[1] || word1[i]== letters[2] || word1[i]==  letters[12] || word1[i]== letters[15] || word1[i]== letters[27] || word1[i]== letters[28] || word1[i]== letters[38] || word1[i]== letters[41])
        {
            point1=point1+3;
        }
        else if(word1[i]==  letters[5] ||  word1[i]== letters[7] || word1[i]==  letters[21] || word1[i]==  letters[22] || word1[i]==letters[24] || word1[i]== letters[31] ||  word1[i]==letters[33] ||   word1[i]==letters[47] ||  word1[i]==letters[48] || word1[i]==letters[50])
        {
            point1=point1+4;
        }

        else if(word1[i]== letters[10]|| word1[i]==letters[36])
        {
            point1=point1+5;
        }

        else if(word1[i]== letters[9] || word1[i]==  letters[23] || word1[i]==  letters[35] || word1[i]==  letters[49])
        {
            point1=point1+8;
        }
        else if(word1[i]==  letters[16] || word1[i]==  letters[25] || word1[i]==  letters[42] || word1[i]==  letters[51])
        {
            point1=point1+10;
        }
    }
    //int sum1=onepoint+fourpoint;
    printf("Word 1's score is %i\n",point1);

    int point2=0;

    for(int y=0;y<lengthword2;y++)
    {

        if(word2[y]==letters[0] || word2[y]== letters[4] || word2[y] == letters[8]|| word2[y] == letters[11] || word2[y] == letters[13] || word2[y] ==letters[14] || word2[y] == letters[17] || word2[y] == letters[18] || word2[y] == letters[19] || word2[y] == letters[20] || word2[y] == letters[26] || word2[y] == letters[30] || word2[y] == letters[34]|| word2[y] == letters[37]|| word2[y] == letters[39] || word2[y] == letters[40] || word2[y] == letters[43] || word2[y] == letters[44] || word2[y] == letters[45] || word2[y] == letters[46])
        {
            point2=point2+1;
        }
        else if (word2[y]== letters[3] || word2[y] == letters[6] || word2[y] == letters[29] || word2[y] == letters[32])
        {
            point2=point2+2;
        }
        // plug in

        else if(word2[y]== letters[1] || word2[y] == letters[2] || word2[y] == letters[12] || word2[y] == letters[15] || word2[y] == letters[27] || word2[y] == letters[28] || word2[y] == letters[38] || word2[y] == letters[41])
        {
            point2=point2+3;
        }

        else if(word2[y]==letters[5] || word2[y] ==  letters[7] || word2[y] ==  letters[21] || word2[y] ==  letters[22] || word2[y] ==  letters[24] || word2[y] ==  letters[31] || word2[y] ==  letters[33] || word2[y] ==  letters[47] || word2[y] ==  letters[48] || word2[y] ==  letters[50])
        {
            point2=point2+4;
        }
        else if(word2[y]==letters[10]|| word2[y] == letters[36])
        {
            point2=point2+5;
        }
        else if(word2[y]==letters[9] || word2[y] ==  letters[23] || word2[y] ==  letters[35] || word2[y] ==  letters[49])
        {
            point2=point2+8;
        }
        else if(word2[y]== letters[16] || word2[y] ==  letters[25] || word2[y] ==  letters[42] || word2[y] ==  letters[51])
        {
            point2=point2+10;
        }
    }
    printf("Word 2's score is %i\n", point2);

    if(point2>point1)
    {
         printf("Player 2 Wins!\n");
    }
        else if(point1>point2)
    {
         printf("Player 1 Wins!\n");
    }
    else
    {
        printf("Tied.\n");
    }
}