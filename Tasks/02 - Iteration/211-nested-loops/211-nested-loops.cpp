#include <stdio.h>

int main()
{
    // Outer loop 
    //for (int i = 1; i <= 2; i++)        // Outer loop executes twice
    //{
    //    printf("Outer loop number %d\n", i);

    //    // Inner loop
    //    for (int j = 1; j <= 5; j++)    // Inner loop executes 5 times for each outer loop run so 10 time in total
    //    {
    //        printf("\tInner loop number %d\n", j);  // note the use of the tab (\t) option at the start to improve the layout
    //        
    //        //Task - Write another level of nesting here
    //        printf("\n\t\ti,j,k\n\t\t------\n");
    //        for (int k = 1; k <= 3; k++)
    //        {
    //            printf("\t\t%d,%d,%d\n", i, j, k);
    //        }

    //    }
    //}

    for (int i = 1; i <= 12; i++)
    {
        for (int j = 1; j <= 12; j++)
        {
            printf("%d x %d = %d\n", i, j, (i * j));
        }
        printf("\n");
    }
}
