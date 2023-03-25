#include<stdio.h>

void make_squares(int length, int width)
{
    if(length == width)
    {
        printf("%d x %d\n\n", length, width);
    }
    else
    {
        if(length>width)
        {
            printf("%d x %d, ", width, width);
            length = length - width;
        }
        else
        {
            printf("%d x %d, ", length, length);
            width = width - length;
        }


        make_squares(length, width);                    
    }
    return;
}

int main()
{
    int length = 0, width = 0;

    printf("\nEnter length and width of the paper separated by spaces: ");
    scanf("%d %d", &length, &width);

    printf("\nlength of paper:%d\nwidth of paper:%d\n", length, width);

    printf("\nSquares: ");
    make_squares(length, width);

    return 0;
}
