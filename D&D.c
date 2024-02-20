#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void goomba();
void lucario();
void conker();
void megaman();
struct dd
{
    int characters;
    int difficulty;
    int abilityscore;
    int rabilityscore;
    int dice1;
} * d1;

int main()
{
    printf("----------------------------------------------\n");
    printf("\t WELCOME TO DUNGEONS AND DRAGONS\n");
    printf("----------------------------------------------\n");
    int answer;
    printf("Press 1 to play the game, Press anyother key to exit\n");
    printf("Are you ready to play the game: ");
    scanf("%d", &answer);
    d1 = (struct dd *)malloc(sizeof(struct dd));
    while (answer != 0)
    {
        if (answer == 1)
        {
            printf("Lets dive into the game. Please select your character\n");
            printf("Press 1 for Adrik \nPress 2 for Diessa\nPress 3 for Cleric\nPress 4 for Paladin\n");
            scanf("%d", &d1->characters);

            if (d1->characters == 1)
                goomba();
            else if (d1->characters == 2)
                lucario();
            else if (d1->characters == 3)
                conker();
            else if (d1->characters == 4)
                megaman();
            else
            {
                printf("Please enter a valid input!");
            }
        }
        else
        {
            printf("Please enter a valid input!");
        }
        printf("\nPress 1 to play the game, Press 0 to exit\n");
        printf("Enter your choice:");
        scanf("%d", &answer);
    }

    return 0;
}
void goomba()
{
    d1 = (struct dd *)malloc(sizeof(struct dd));
    printf("Welcome Adrik\n");
    printf("Adrik is a zoologist and a great cartographist\n");
    printf("Select the level of difficulty \nFor easy game press 1 \nFor hard game press 2\n");
    scanf("%d", &d1->difficulty);

    if (d1->difficulty == 1)
    {
        printf("Lets dive into the game\n");
        printf("DM: Now your spawned into the middle of the desert your task is to reach the nearby oasis within dawn to survive, by using your mapping skills, Well I know you are a great cartographist but make sure that you survive this dangerous desert which is full of poisonous snakes and reptiles.\n");
        printf("Ability score = 15. Require ability score = 20 points to pass this level\n");
        d1->abilityscore = 15;
        srand(time(NULL));
        d1->dice1 = (rand() % 12) + 1;
        printf("Dice value= %d\n", d1->dice1);
        d1->rabilityscore = d1->abilityscore + d1->dice1;
        printf("Your score: %d\n", d1->rabilityscore);
        if (d1->rabilityscore >= 20)
        {
            printf("Congrats, you have won the game!!\n");
            printf("----------------------------------------------\n");
            printf("\tTHANK YOU FOR PLAYING WITH US\n");
            printf("----------------------------------------------\n");
        }
        else
        {
            printf("Oops, better luck next time:)\n");
            printf("----------------------------------------------\n");
            printf("\tTHANK YOU FOR PLAYING WITH US\n");
            printf("----------------------------------------------\n");
        }
    }
    else if (d1->difficulty == 2)
    {
        printf("Lets have a challenging game!\n");
        printf("DM: Now you are spawned into a jungle, your task is to find the jaguar gem and place it at the jaguar statue which is at the peak of the mountain. In order to get the gem, you have to pass the dangerous paths of venomous snakes and other dangerous animals. Use your skills to complete this task.\n");
        printf("Ability score = 15. Require ability score = 25 points to pass this difficult level\n");
        d1->abilityscore = 15;

        srand(time(NULL));
        d1->dice1 = (rand() % 12) + 1;
        printf("Dice value= %d\n", d1->dice1);
        d1->rabilityscore = d1->abilityscore + d1->dice1;
        printf("Your score: %d\n", d1->rabilityscore);
        if (d1->rabilityscore >= 25)
        {
            printf("Congrats, you have won the game!!\n");
            printf("----------------------------------------------\n");
            printf("\tTHANK YOU FOR PLAYING WITH US\n");
            printf("----------------------------------------------\n");
        }
        else
        {
            printf("Oops, better luck next time:)\n");
            printf("----------------------------------------------\n");
            printf("\tTHANK YOU FOR PLAYING WITH US\n");
            printf("----------------------------------------------\n");
        }
    }
    else
    {
        printf("Enter a valid input");
    }
}
void lucario()
{
    d1 = (struct dd *)malloc(sizeof(struct dd));
    printf("Welcome Diessa");
    printf("Diesa is an excellent swimmer and one of the finest character in this game\n");
    printf("Select the level of difficulty \nFor easy game press 1 \nFor hard game press 2\n");
    scanf("%d", &d1->difficulty);

    if (d1->difficulty == 1)
    {
        printf("lets dive into the game\n");
        printf("DM: Diesa now you are spawned into an island, your task is to find the tressure which is underneath the sea. In order to get to the tressure you have to swim across dangerous sharks.\n");
        printf("Ability score = 15. Required ability score is 20 points to pass this level\n");
        d1->abilityscore = 15;

        srand(time(NULL));
        d1->dice1 = (rand() % 12) + 1;
        printf("Dice value= %d\n", d1->dice1);
        d1->rabilityscore = d1->abilityscore + d1->dice1;
        printf("Your score: %d\n", d1->rabilityscore);
        if (d1->rabilityscore >= 20)
        {
            printf("Congrats, you have won the game!!\n");
            printf("----------------------------------------------\n");
            printf("\tTHANK YOU FOR PLAYING WITH US\n");
            printf("----------------------------------------------\n");
        }
        else
        {
            printf("Oops, better luck next time:)\n");
            printf("----------------------------------------------\n");
            printf("\tTHANK YOU FOR PLAYING WITH US\n");
            printf("----------------------------------------------\n");
        }
    }
    else if (d1->difficulty == 2)
    {
        printf("Lets have a challenging game!\n");
        printf("DM: Diesa you are spawned into an island your task is to save the people who lost the control of the boat and fell into the sea. They are fighting to survive in the middle of the sea. In order to save them you have to swim across the sea. Make sure that none of them dies\n");
        printf("Ability score = 15. Required ability points is 25 points to pass this difficult level\n");
        d1->abilityscore = 15;

        srand(time(NULL));
        d1->dice1 = (rand() % 12) + 1;
        printf("Dice value= %d\n", d1->dice1);
        d1->rabilityscore = d1->abilityscore + d1->dice1;
        printf("Your score: %d\n", d1->rabilityscore);
        if (d1->rabilityscore >= 25)
        {
            printf("Congrats, you have won the game!!\n");
            printf("----------------------------------------------\n");
            printf("\tTHANK YOU FOR PLAYING WITH US\n");
            printf("----------------------------------------------\n");
        }
        else
        {
            printf("Oops, better luck next time:)\n");
            printf("----------------------------------------------\n");
            printf("\tTHANK YOU FOR PLAYING WITH US\n");
            printf("----------------------------------------------\n");
        }
    }
    else
    {
        printf("Enter a valid input");
    }
}
void conker()
{
    d1 = (struct dd *)malloc(sizeof(struct dd));
    printf("Welcome Cleric\n");
    printf("Cleric is an excellent fighter and one of the finest character in this game\n");
    printf("Select the level of difficulty \nFor easy game press 1 \nFor hard game press 2\n");
    scanf("%d", &d1->difficulty);

    if (d1->difficulty == 1)
    {
        printf("lets dive into the game\n");
        printf("DM: Cleric lost in the desert. The only survival lies in a ruined city which is ruled by strange race of masked beings, Your task is to overcome all the difficulties faced in the city by using your shooting skills\n");
        printf("Ability score = 15. Required ability score is 20 points to pass this level\n");
        d1->abilityscore = 15;

        srand(time(NULL));
        d1->dice1 = (rand() % 12) + 1;
        printf("Dice value= %d\n", d1->dice1);
        d1->rabilityscore = d1->abilityscore + d1->dice1;
        printf("Your score: %d\n", d1->rabilityscore);
        if (d1->rabilityscore >= 20)
        {
            printf("Congrats, you have won the game!!\n");
            printf("----------------------------------------------\n");
            printf("\tTHANK YOU FOR PLAYING WITH US\n");
            printf("----------------------------------------------\n");
        }
        else
        {
            printf("Oops, better luck next time:)\n");
            printf("----------------------------------------------\n");
            printf("\tTHANK YOU FOR PLAYING WITH US\n");
            printf("----------------------------------------------\n");
        }
    }
    else if (d1->difficulty == 2)
    {
        printf("Lets have a challenging game!\n");
        printf("DM:There is a haunted house in which 2 kids went inside and got trapped in that house, your task is to overcome the difficult situations and rescue those 2 kids without causing any harm.\n");
        printf("Ability score = 15. Required ability points is 25 points to pass this difficult level\n");
        d1->abilityscore = 15;

        srand(time(NULL));
        d1->dice1 = (rand() % 12) + 1;
        printf("Dice value= %d\n", d1->dice1);
        d1->rabilityscore = d1->abilityscore + d1->dice1;
        printf("Your score: %d\n", d1->rabilityscore);
        if (d1->rabilityscore >= 25)
        {
            printf("Congrats, you have won the game!!\n");
            printf("----------------------------------------------\n");
            printf("\tTHANK YOU FOR PLAYING WITH US\n");
            printf("----------------------------------------------\n");
        }
        else
        {
            printf("Oops, better luck next time:)\n");
            printf("----------------------------------------------\n");
            printf("\tTHANK YOU FOR PLAYING WITH US\n");
            printf("----------------------------------------------\n");
        }
    }
    else
    {
        printf("Enter a valid input");
    }
}
void megaman()
{
    d1 = (struct dd *)malloc(sizeof(struct dd));
    printf("Welcome Paladin\n");
    printf("Paladin is good at archery and one of the finest character in this game\n");
    printf("Select the level of difficulty \nFor easy game press 1 \nFor hard game press 2\n");
    scanf("%d", &d1->difficulty);

    if (d1->difficulty == 1)
    {
        printf("lets dive into the game\n");
        printf("DM: In rime of frostmaid,Paladin opens a crack in the glacier that leads to the dungeon. Your task is to discover what's been hidden here. \n");
        printf("Ability score = 15. Required ability score is 20 points to pass this level\n");
        d1->abilityscore = 15;

        srand(time(NULL));
        d1->dice1 = (rand() % 12) + 1;
        printf("Dice value= %d\n", d1->dice1);
        d1->rabilityscore = d1->abilityscore + d1->dice1;
        printf("Your score: %d\n", d1->rabilityscore);
        if (d1->rabilityscore >= 20)
        {
            printf("Congrats, you have won the game!!\n");
            printf("----------------------------------------------\n");
            printf("\tTHANK YOU FOR PLAYING WITH US\n");
            printf("----------------------------------------------\n");
        }
        else
        {
            printf("Oops, better luck next time:)\n");
            printf("----------------------------------------------\n");
            printf("\tTHANK YOU FOR PLAYING WITH US\n");
            printf("----------------------------------------------\n");
        }
    }
    else if (d1->difficulty == 2)
    {
        printf("Lets have a challenging game!\n");
        printf("DM: There is a dangerous tribe called Yaifo living in the island who theft a powerful crystal jua, your task is to bring the jua back by fighting with them using your archery skills. \n");
        printf("Ability score = 15. Required ability points is 25 points to pass this difficult level\n");
        d1->abilityscore = 15;

        srand(time(NULL));
        d1->dice1 = (rand() % 12) + 1;
        printf("Dice value= %d\n", d1->dice1);
        d1->rabilityscore = d1->abilityscore + d1->dice1;
        printf("Your score: %d\n", d1->rabilityscore);
        if (d1->rabilityscore >= 25)
        {
            printf("Congrats, you have won the game!!\n");
            printf("----------------------------------------------\n");
            printf("\tTHANK YOU FOR PLAYING WITH US\n");
            printf("----------------------------------------------\n");
        }
        else
        {
            printf("Oops, better luck next time:)\n");
            printf("----------------------------------------------\n");
            printf("\tTHANK YOU FOR PLAYING WITH US\n");
            printf("----------------------------------------------\n");
        }
    }
    else
    {
        printf("Enter a valid input");
    }
}
