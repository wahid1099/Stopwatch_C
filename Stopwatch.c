#include <stdio.h>
#define CYCLE 5
#include <conio.h>
#ifdef _WIN32
// #ifdef _WIN64
#define sleep(x) Sleep(x * 1000)
#include <Windows.h>
#else
// #define clrscr() printf("\e[1;1H\e[2j")

#include <unistd.h>
#endif
int main()
{
    int hour, minute, second;
    printf("Enter Hour Minute Second ");
    scanf("%d%d%d", &hour, &minute, &second);
    //clrscr();
    int h = 0, m = 0, s = 0;
    while (1)
    {
        printf("%.2d:%.2d:%.2d\n", h, m, s);
        if (h == hour && m == minute && s == second)
        {
            printf("Timer stopped\n");
            break;
        }
        else
        {
            // clrscr();
        }
        s++;
        sleep(1);
        if (s == CYCLE)
        {
            m++;
            s = 0;
        }
        if (m == CYCLE)
        {
            h++;
            m = 0;
        }
    }

    return 0;
}