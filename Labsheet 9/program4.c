#include<stdio.h>
#include <conio.h>
struct time 
{
int hrs;
int min;
int sec;
};

int main () 
{
    struct time previous, current, diff, sum;
    printf ("ENter previous time in HH-MM-SS format:");
    scanf ("%d%d%d", &previous.hrs, &previous.min, &previous.sec);
    printf ("ENter currrent time in HH-MM-SS format:");
    scanf ("%d%d%d", &current.hrs, &current.min, &current.sec);
    if (previous.sec > current.sec)
    {
        current.min--;
        current.sec += 60;
    }
    diff.sec = current.sec - previous.sec;
    if (previous.min > current.min)
    {f
        current.hrs--;
        current.min += 60;
    }
    diff.min = current.min - previous.min;
    if (previous.hrs > current.hrs)
    {
        current.hrs += 24;
    }
    diff.hrs = current.hrs - previous.hrs;
    printf ("Time diffrence in HH-MM-SS format:");
    printf ("%d-%d-%d", diff.hrs, diff.min, diff.sec);
    return 0;
}
