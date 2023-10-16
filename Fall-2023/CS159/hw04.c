#include <stdio.h>
#include <math.h>
#include "timestamp.h"


long long get_timestamp();
int is_leap(int);
void print_month_name(int);
void print_results(long long, int, int);
void print_time(int, int);
int second_to_minute(long long, int*);
int minutes_to_hours(int*);
int hours_to_days(int*);

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
    return (!(year % 4) && (year % 100)) || !(year % 400);
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

int second_to_minutes(long long timestamp, int *seconds)
{
    int minutes;

    minutes = timestamp / 60;

    *seconds = timestamp - (minutes * 60);

    return minutes;
}

int minutes_to_hours(int *minutes)
{
    int hours;

    hours = *minutes / 60;

    *minutes -= (hours * 60);

    return hours;
}

int hours_to_days(int *hours)
{
    int days;

    days = *hours / 24;

    *hours -= (days * 24);

    return days + 1;
}

void print_time(int time, int put_colon)
{
    if(time <= 9)
    {
        printf("0%d", time);
    }
    else
    {
        printf("%d", time);
    }
    if(put_colon)
    {
        printf(":");
    }
}

void print_results(long long timestamp, int year, int month)
{
    int seconds;
    int minutes;
    int hours;
    int days;

    char am_pm1;
    char am_pm2;

    am_pm1 = 'A';
    am_pm2 = 'M';

    minutes = second_to_minutes(timestamp, &seconds);
    hours = minutes_to_hours(&minutes);
    days = hours_to_days(&hours);

    printf("\n=-=-=-=-=-=-=-=");
    printf("\nYear:  %d", year);
    if(is_leap(year))
    {
        printf("\nLeap:   Yes!");
    }
    else
    {
        printf("\nLeap:   No.");
    }
    printf("\nMonth:%5d ", month);
    print_month_name(month);
    printf("\nDay:%7d ", days);
    printf("\n=-=-=-=-=-=-=-=");
    printf("\nTime: ");
    if((hours + minutes + seconds) == 0)
    {
        printf("midnight");
    }
    else
    {
        if(hours >= 13)
        {
            hours -= 12;
            am_pm1 = 'P';
        }
        if(minutes)
        {
            print_time(hours, 1);
        }
        else
        {
            print_time(hours, 0);
        }
        if(minutes && seconds)
        {
            print_time(minutes, 1);
        }
        else if(minutes)
        {
            print_time(minutes, 0);
        }
        else if(seconds)
        {
            print_time(0, 1);
        }
        if(seconds)
        {
            print_time(seconds, 0);
        }
        printf(" %c%c", am_pm1, am_pm2);
    }
}