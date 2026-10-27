//-------------------All in Second-------------------

#include <stdio.h>

int main()
{
    int days,hour,min,sec, all_in_second;
    printf("select the time (day,hour,minute,second )");
    scanf("%d %d %d %d", &days, &hour, &min, &sec);
    min = min*60;
    hour = hour*3600;
    days = days*86400;
    all_in_second = days+hour+min+sec;
    printf("total time in seconds: %d", all_in_second);
    return 0;
}