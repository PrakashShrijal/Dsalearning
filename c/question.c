#include <stdio.h>
int main()
{
    int weight;
    int team1Weight = 0, team2Weight = 0;
    int players;
    printf("enter the number of players in each team :");
    scanf("%d", &players);
    int weights[players * 2];
    printf("Enter the weight of players  :");
    for (int i = 0; i < players * 2; i++)
    {
        scanf("%d", &weights[i]);
    }
    // to print weight of each player including their team number
    for (int i = 0; i < players * 2; i++)
    {
        if (i % 2 == 0)
        {
            printf("weight of team 1 : %d  \n", weights[i]);
        }
        else
        {

            printf("weightt of team 2 : %d \n", weights[i]);
        }
    }
    printf("\n");
    for (int i = 0; i < players * 2; i++)
    {
        if (i % 2 == 0)
        {
            team1Weight += weights[i];
        }
        else
        {
            team2Weight += weights[i];
        }
    }
    printf("total weight of team 1: %d\n", team1Weight);
    printf("Total weight of team 2 : %d\n ", team2Weight);

    if (team1Weight > team2Weight)
    {
        printf("Team 1 has an advantage \n");
    }
    else
    {
        printf("Team 2 has an advantage \n");
    }
    return 0;
}