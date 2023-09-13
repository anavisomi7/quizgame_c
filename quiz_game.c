/* Project quiz_game by ANAVI SOMANI Rollno: 05 and RIHA SANJAY KOKODE Rollno: 36 */


#include<stdio.h>

#include<stdlib.h>

#include"game.h" // user defined header file


struct play p;

void maxx_score(struct play*);

void start(struct play*);


// main function


void main()

{

    int quig = 0;

    printf("Press ~\t 1 : To start the game\n\t 2 : To see high scores \n\t 3 : To see game help\n\t 0 : To exit \t\t\t :   ");

    scanf("%d",&quig);

   if(quig==1)

	{

	    start(&p);

	}

    else if(quig==2)

	{

	    maxx_score(&p);

	}

    else if(quig==3)

	{

	    help();

	}

    else if(quig==0)

	{

	    exit(0);

	}

    else

       {

         printf("\n\nINVALID INPUT :( :( \nTRY AGAIN !! \n");

       }


}



