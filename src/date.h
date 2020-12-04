


extern int todate_f(int opt, int month, int day, int year);
extern void enter_dt(void);
extern void extract_month(int month);
struct Date
{
    unsigned int month : 4, day : 5, year : 7;

};
