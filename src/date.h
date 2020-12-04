/*
 *
 * 
 * 
 */ 
extern int todate_f(int opt, int month, int day, int year);
extern void extract_month(int month);
extern void extract_day(int day);
extern void extract_year(int year);
struct Date
{
    unsigned int month : 4, day : 5, year : 7;

};
