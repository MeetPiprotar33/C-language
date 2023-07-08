#include <stdio.h>
#include <stdlib.h>

int isLeap(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int getDaysInMonth(int month, int year) {
    switch(month) {
        case 2: return isLeap(year) ? 29 : 28;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        default: return 31;
    }
}

int getDaysInYear(int year) {
    return isLeap(year) ? 366 : 365;
}

int parseDate(char* str, int* day, int* month, int* year) {
    return sscanf(str, "%d/%d/%d", day, month, year);
}

int daysBetweenDates(int day1, int month1, int year1, int day2, int month2, int year2) {
    int days = 0;

    // Calculate days in year 1 from day1/month1 to 31/12/year1
    for (int month = month1; month <= 12; month++) {
        int daysInMonth = getDaysInMonth(month, year1);
        if (month == month1) {
            daysInMonth -= day1 - 1;
        }
        days += daysInMonth;
    }

    // Calculate days in years between year1 and year2
    for (int year = year1 + 1; year < year2; year++) {
        days += getDaysInYear(year);
    }

    // Calculate days in year 2 from 1/1/year2 to day2/month2
    for (int month = 1; month < month2; month++) {
        int daysInMonth = getDaysInMonth(month, year2);
        days += daysInMonth;
    }
    days += day2 - 1;

    return days;
}

int main() {
    char dateStr1[11], dateStr2[11];
    int day1, month1, year1, day2, month2, year2;

    printf("Enter start date (dd/mm/yyyy): ");
    scanf("%s", dateStr1);
    parseDate(dateStr1, &day1, &month1, &year1);

    printf("Enter end date (dd/mm/yyyy): ");
    scanf("%s", dateStr2);
    parseDate(dateStr2, &day2, &month2, &year2);

    int days = daysBetweenDates(day1, month1, year1, day2, month2, year2);

    printf("Number of days between %s and %s: %d\n", dateStr1, dateStr2, days-365);

    return 0;
}

