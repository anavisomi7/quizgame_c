/* Project by ANAVI SOMANI Rollno: 05 and RIHA SANJAY KOKODE Rollno: 36 */


// Header file for QUIZ GAME

// declaring struct
struct play
{
            char name[30];
            int score;
            int rat;
}x;


// function for start
void start(struct play* p)
{
          int ans;
          int count=0;
          
          // file pointer
          FILE *fp;

          if((fp=fopen("score.txt","a"))==NULL)
             {
                 printf("opps, error opening file!\n");
             }


         printf("\nEnter your name : ");
         scanf("%s", p->name);


        // quiz begins here

        printf("\n\n*************************** Hi %s !! Welcome to Quiz Game *************************** \n\n", p->name);


        printf("Q(1).Which of the following are components of Central Processing Unit (CPU)? \n 1. Arithmetic Logic Unit, Mouse\t\t\t\t 2. Arithmetic Logic Unit, Control Unit\n 3. Arithmetic Logic Unit, Integrated Circuits\t\t\t 4. Control Unit, Monitor\n\n");

        printf("Your answer: ");
        scanf("%d",&ans);

        if(ans==2)
        {
            printf("Correct! +10 points\n\n");
            ++count;

        }
        else
        {
            printf("Wrong answer! Correct answer is 2. Arithmetic Logic Unit, Control Unit\n\n");
        }

        printf("Q(2). In India which of the follownig have the largest inland saline wetland? \n1. GUJRAT\t\t2. HARYANA \n3. TAMIL NADU\t\t4. RAJASTHAN\n\n");
        printf("Your answer: ");
        scanf("%d",&ans);

        if(ans==4)
        {
            printf("Correct! +10 points\n\n");

                ++count;

        }
        else
        {
            printf("Wrong answer! Correct answer is 4. RAJASTHAN\n\n");
        }

        printf("Q(3) 'Red-cliff line' is a boundary line between \n1. India and Bangladesh\t\t2. India and Butan\n3. India and China\t\t4. India and Pakistan\n\n");

        printf("Your answer: ");
        scanf("%d",&ans);

        if(ans==4)
        {
            printf("Correct! +10 points\n\n");

                ++count;
        }
        else
        {
            printf("Wrong answer! Correct answer is 4. India and Pakistan\n\n");
        }


        printf("Q(4).Which Indian state had the first woman Chief Minister \n1. Utter Pradesh\t\t2. Assam\n3. Arunachal Pradesh\t\t4. Madhya Pradesh\n\n");
        printf("Your answer: ");
        scanf("%d",&ans);
        if(ans==1)
        {
            printf("Correct! +10 points\n\n");

                ++count;
        }
        else
        {
            printf("Wrong answer! Correct answer is 1.Utter Pradesh\n\n");
        }

        printf("Q(5).Founder(s) of Google \n1. Kevin Systrom\t\t\t2. Larry Page, Sergey Brin\n3. Jan Koum, Brian Acton\t\t4. Marc Tarpenning\n\n");
        printf("Your answer: ");
        scanf("%d",&ans);
        if(ans==2)
        {
            printf("Correct! +10 points\n\n");

                ++count;
        }
        else
        {
            printf("Wrong answer! Correct answer is 2. Larry Page, Sergey Brin\n\n");
        }

        printf("Q(6).Food factory of the plants is_____.  \n1. Nodes in roots\t2. Flowers\n3. Leaves\t\t4. Xylem and Phloem\n\n");
        printf("Your answer: ");
        scanf("%d",&ans);
        if(ans==3)
        {
            printf("Correct! +10 points\n\n");

                ++count;
        }
        else
        {
            printf("Wrong answer! Correct answer is 3. Leaves\n\n");
        }

        printf("Q(7). Name the state where 'Koli Dance' is most popular. \n1. Tamil Nadu\t\t2. Maharashtra\n3. Odisha\t\t4. None of the above\n\n");
        printf("Your answer: ");
        scanf("%d",&ans);
        if(ans==2)
        {
            printf("Correct! +10 points\n\n");

                ++count;
        }
        else
        {
            printf("Wrong answer! Correct answer is 2.Maharashtra\n\n");
        }

        printf("Q(8). Who regulates the activities of different banks? \n1. SBI\t\t\t\t2. RBI\n3. Union Bank Of India\t\t4. CBI \n\n");
        printf("Your answer: ");
        scanf("%d",&ans);
        if(ans==2)
        {
            printf("Correct! +10 points\n\n");

                ++count;
        }
        else
        {
            printf("Wrong answer! Correct answer is 2. RBI \n\n");
        }

        printf("Q(9). Who was the first man to orbit Earth?  \n1. Yuri Gagarin\t\t\t2. Polo Williamson\n3. Neil Armstrong\t\t4. John Glenn\n\n");
        printf("Your answer: ");
        scanf("%d",&ans);
        if(ans==1)
        {
            printf("Correct! +10 points\n\n");

                ++count;
        }
        else
        {
            printf("Wrong answer! Correct answer is 1. Yuri Gagarin\n\n");
        }

        printf("Q(10). Silk fibre is obtained from :\n1. fleece of sheep\t2. cotton ball\n3. cocoon/worm\t\t4. jute plant\n\n");
        printf("Your answer: ");
        scanf("%d",&ans);
        if(ans==3)
        {
            printf("Correct! +10 points\n\n");

                ++count;
        }
        else
        {
            printf("Wrong answer! Correct answer is 3. cocoon/worm\n\n");
        }

        printf("Q(11). Frames from one LAN can be transmitted to another LAN via the device \n1. Router\t2. Repeater\n3. Modem\t4. Bridge\n\n");
        printf("Your answer: ");
        scanf("%d",&ans);
        if(ans==4)
        {
            printf("Correct! +10 points\n\n");

                ++count;
        }
        else
        {
            printf("Wrong answer! Correct answer is 4. Bridge\n\n");
        }

        printf("Q(12). Which of the following condition is used to transmit two packets over a medium at the same time?\n1. Contention\t\t2. Collision\n3. Synchronous\t\t4. Asynchronous\n\n");
        printf("Your answer: ");
        scanf("%d",&ans);
        if(ans==2)
        {
            printf("Correct! +10 points\n\n");

                ++count;
        }
        else
        {
            printf("Wrong answer! Correct answer is 2. Collision\n\n");
        }


        //counting number of correct answers and, ratings
        // displaying them using star ratings
        if(count > 0)
        {
                printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t It's the END! Thanks for playing :):)\n");
                printf("\t\t\t\t\t\t\t\t\t\t\tYou scored : %d points \n", count*10);

                p->score = count*10;

                if(p->score == 120)
                {
                  printf("\t\t\t\t\t\t\t\t\t\t\tYeah! Your are CHAMPIAN\n");
                  printf("\t\t\t\t\t\t\t\t\t\t\tYou scored highest :):)\n");
                  printf("\t\t\t\t\t\t\t\t\t\t\tYOUR Rating: * * * * * *\n");
                  p->rat=6;
                }
                else if(p->score >= 100)
                {
                    printf("\t\t\t\t\t\t\t\t\t\t        YOUR Rating : * * * * *\n");
                    p->rat=5;
                }
                else if(p->score >= 80 && p->score < 100)
                {
                    printf("\t\t\t\t\t\t\t\t\t\t\tYOUR RATING : * * * *\n");
                    p->rat=4;
                }
                else if(p->score >= 60 && p->score < 80)
                {
                    printf("\t\t\t\t\t\t\t\t\t\t\t YOUR RATING : * * *\n");
                  p->rat=3;
                }
                else if(p->score >= 40 && p->score < 60)
                {
                    printf("\t\t\t\t\t\t\t\t\t\t\t  YOUR RATING : * *\n");
                    p->rat=2;
                }
                else if(p->score < 40)
                {
                    printf("\t\t\t\t\t\t\t\t\t\t\t   YOUR RATING : *\n");
                     p->rat=1;
                }

            //writing in file

                    fprintf(fp,"%s %d %d", p->name,p->score,p->rat);
                    fclose(fp);    // closing the file 
        }
        else
        {
            printf("Try again!");
        }
}


// function for help

void help()
{
     int choice;

     printf("\n\n******************************* GAME HELP *******************************");
     printf("\n-------------------------------------------------------------------------\n");

     printf("\n >> There will be total 12 questions");
     printf("\n >> You will be given 4 options and you have to press 1, 2, 3 or 4 for the");
     printf("\n    right option");
     printf("\n >> Each question will carry 10 points");
     printf("\n >> There is no negative marking for wrong answer");

     printf("\n\n-------------------------------------------------------------------------");
     printf("\n******************************* GOOD LUCK *******************************");

     printf("\n\nContinue playing ? (1/0) :  ");
     scanf("%d",&choice);
     printf("\n\n");

     if(choice == 1)
      {
        start(&x);
      }

     else
      {
        exit(1);
      }
     
}


// function for max score
void maxx_score(struct play* p)
{

    int ch;

    FILE *fp;
    if((fp=fopen("score.txt", "r"))==NULL)
          {
                //printf("Error opening file.\n");
                printf("\nNo games played yet!\n");
            }
            else
            {

    printf("\n******************************* HIGH SCORES *******************************\n\n");
    printf("\t\t\tNAME     POINTS     RATING\n");
    while(fscanf(fp,"\t\t\t%s %d %d",p->name,&(p->score), &(p->rat)) !=EOF)
    {
        printf("\t\t\t____________________________\n\n");
        printf("\t\t\t%s      %d       %d star(s)\n\n",p->name,p->score,p->rat);
    }

    printf("\t\t\t____________________________\n\n");
    printf("\n***************************************************************************\n\n");

    fclose(fp);

    }
    printf("\nContinue playing ? (1 - Yes and 0 - No) :  ");
    scanf("%d",&ch);
    printf("\n\n");

    if(ch==1)
    {
        start(&x);
    }
    else
    {
        exit(1);
    }

}



