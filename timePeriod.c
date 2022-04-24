#include <stdio.h>
struct st
{
    int sec;
    int hour;
    int min;
};
struct st difference(struct st start,struct st end)
{
    struct st diff;
    if(end.sec < start.sec)
    {
        end.sec = end.sec + 60;
        diff.sec = end.sec - start.sec;
        end.min -= 1;

    }
    else
    {
        diff.sec = end.sec - start.sec;
    }

    if(end.min < start.min)
    {
        end.min = end.min + 60;
        diff.min = end.min - start.min;
        end.hour -= 1;

    }
    else
    {
        diff.min = end.min - start.min;
    }
    diff.hour = end.hour - start.hour;

    return diff;
    
}

int main()
{
    struct st start , stop, diff;
    printf("Enter the starting time in hh:mm:ss format\n");
    scanf("%d%d%d",&start.hour,&start.min,&start.sec);
    printf("Enter the ending time in hh:mm:ss format\n");
    scanf("%d%d%d",&stop.hour,&stop.min,&stop.sec);
    diff = difference( start, stop);
    printf("%d %d %d",diff.hour,diff.min,diff.sec);

    return 0;
}
