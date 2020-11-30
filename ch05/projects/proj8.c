#include <stdio.h>

int main()
{

    int hour, mins, time_mins,
        dep1 = 8 * 60 + 0,
        dep2 = 9 * 60 + 43,
        dep3 = 11 * 60 + 19,
        dep4 = 12 * 60 + 47,
        dep5 = 14 * 60 + 0,
        dep6 = 15 * 60 + 45,
        dep7 = 19 * 60 + 0,
        dep8 = 21 * 60 + 45;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &mins);

    time_mins = hour * 60 + mins;


    if (time_mins <= dep1 + (dep2 - dep1) / 2 ){
        printf("Closest departure time is 8:00am\nArrival time is 10:16am\n");
    } else if (time_mins < dep2 + (dep3 - dep2) / 2 ){
        printf("Closest departure time is 9:43am\nArrival time is 11:52am\n");
    } else if (time_mins < dep3 + (dep4 - dep3) / 2 ){
        printf("Closest departure time is 11:19am\nArrival time is 1:31pm\n");
    } else if (time_mins < dep4 + (dep5 - dep4) / 2 ){
        printf("Closest departure time is 12:47pm\nArrival time is 3:00pm\n");
    } else if (time_mins < dep5 + (dep6 - dep5) / 2 ){
        printf("Closest departure time is 2:00pm\nArrival time is 4:08pm\n");
    } else if (time_mins < dep6 + (dep7 - dep6) / 2 ){
        printf("Closest departure time is 3:45pm\nArrival time is 5:55pm\n");
    } else if (time_mins < dep7 + (dep8 - dep7) / 2 ){
        printf("Closest departure time is 7:00pm\nArrival time is 9:20pm\n");
    } else if (time_mins < dep2 + (dep3 - dep2) / 2 ){
        printf("Closest departure time is 9:45pm\nArrival time is 11:58pm\n");
    } 

    return 0;
}