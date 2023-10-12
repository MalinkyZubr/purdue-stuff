#include <stdio.h>
#include <math.h>
#include "timestamp.h"


long long get_timestamp();
int is_leap(int);
int day(long long*);
void print_month_name(int);
void print_results(long long, int, int);

int main()
{
    long long timestamp;
    int year; // year of unix timestamp
    int month; // month of unix timestamp

    // get input unix timestamp
    timestamp = get_timestamp();

    // calculate the year and month from unix timestamp
    year = calcYear(&timestamp);
    month = calcMonth(&timestamp, year);

    // print results
    print_results(timestamp, year, month);

    return 0;
}

long long get_timestamp()
{
    long long timestamp; // hold the unix timestamp in seconds
    printf("Enter unix timestamp -> ");
    scanf("%lld", &timestamp);
    return timestamp;
}

int is_leap(int year)
{
    return (!(year % 4) && (year % 100)) || !(year % 100);
}

void print_month_name(int month)
{
    if(month == 1)
    {
        printf("JAN");
    }
    else if(month == 2)
    {
        printf("FEB");
    }
    else if(month == 3)
    {
        printf("MAR");
    }
    else if(month == 4)
    {
        printf("APR");
    }
    else if(month == 5)
    {
        printf("MAY");
    }
    else if(month == 6)
    {
        printf("JUN");
    }
    else if(month == 7)
    {
        printf("JUL");
    }
    else if(month == 8)
    {
        printf("AUG");
    }
    else if(month == 9)
    {
        printf("SEP");
    }
    else if(month == 10)
    {
        printf("OCT");
    }
    else if(month == 11)
    {
        printf("NOV");
    }
    else
    {
        printf("DEC");
    }
}

int day(long long *timestamp)
{
    int day;
    day = *timestamp / 60 / 60 / 24 + 1;
    *timestamp = (day * 60 * 60 * 24 + 1) - *timestamp;
    return day;
}

void print_results(long long timestamp, int year, int month)
{
    printf("\n=-=-=-=-=-=-=-=");
    printf("\nYear:  %d", year);
    if(is_leap(year))
    {
        printf("\nLeap:    Yes!");
    }
    else
    {
        printf("\nLeap:    No!");
    }
    printf("\nMonth:    %d ", month);
    print_month_name(month);
    printf("\nDay:       %lld", day(&timestamp));
    printf("\n=-=-=-=-=-=-=-=");
    printf("%d", timestamp);
    printf("Time: ");
}