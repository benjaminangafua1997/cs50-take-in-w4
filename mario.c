#include <stdio.h>
void draw(int h);

int main (void)
{
    int height;
    printf("Height: ");
    scanf("%i", &height);
    draw(height);
}
void draw(int h)
{
    //reccursion
    /*
    if(h == 0)
    {
        return;
    }
    
    draw(h - 1);
    for(int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
    */

    //iteration
    /* 
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    */
}