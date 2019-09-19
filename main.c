#include <stdio.h>

//helped by Haley of the IAM department
int main()
{
    int whileLoop = 1;
    int floorOn = 0;
    int floorsMoved = 0;
    int floorTo = 0;

    //make floors moved turn to 0 every time. make eq to add find how many floors they moved.
    //find way to store units for the floors they visited

    printf("Welcome! You are on floor %d.\n", floorOn);
    printf("Please select what floor you would like to be on (0-10).");
    
    //scanf() brings up an error that I'm not sure is actually an error. The error suggestion says to use _CRT_SECURE_NO_WARNINGS which seems to be just more of a way to ignore the error, which I don't think you want.
    do
    {

        scanf("%d", &floorTo);
        if(floorTo == 0 || floorTo == 1 || floorTo == 2 || floorTo == 3 || floorTo == 4 || floorTo == 5 || floorTo == 6 || floorTo == 7 || floorTo == 8 || floorTo == 9 || floorTo == 10)
        //if (0 <= floorTo && floorTo <= 10)
        {
            //floorOn = floorTo;

            //if up
            //floorsMoved = floorTo-floorOn
            if(floorTo > floorOn)
            {
                floorsMoved = floorTo-floorOn;
                for(int i = floorOn; i < floorTo; i++)
                {
                    printf("moving %d\n", i);
                }
            }
        //else if down
        //floorsMoved = floorOn-floorTo
        else if(floorTo<floorOn)
        {
            floorsMoved = floorOn-floorTo;
            for(int i = floorOn; i > floorTo; i--)
            { //change this going down
                printf("moving %d\n", i);
            }
        }
            floorOn = floorTo;
            printf("You have moved to floor %d, and have moved %d floors.\n", floorOn, floorsMoved);
            //printf("You have been to floors 0 and %d", floorOn);
        }
        else
        {
            printf("That is not a valid floor");
        }
    }while(whileLoop == 1);
}