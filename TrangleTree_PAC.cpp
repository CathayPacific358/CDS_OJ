#include<stdio.h>
int main()
{
    int col , row = 1, j, count;
    scanf("%d", &col);

    count = col;

        for(; col >= 1; col--)
        {
            for(j = 1; j <= count; j++)
            {
                if(j <= ((col - row)/2))
                {
                    printf(" ");
                }
                else if(j > ((row + col)/2) + (row - 1))
                {
                    printf(" ");
                }
                else
                    printf("*");

            }

            if(row < (count + 1)/2)
            {
                row++;
                printf("\n");
            }
            else
                break;
        }


}