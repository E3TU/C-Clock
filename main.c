#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <ncurses.h>

int main(void)
{
    initscr();
    noecho();
    curs_set(0);

    time_t t;
    struct tm *tm_info;

    while (1) {
        time(&t);
        tm_info = localtime(&t);

        // printf("%02d:%02d:%02d\n", tm_info->tm_hour, tm_info->tm_min, tm_info->tm_sec);
        clear();
        mvprintw(LINES / 2, (COLS - 8) / 2, "%02d:%02d:%02d", tm_info->tm_hour, tm_info->tm_min, tm_info->tm_sec);
        refresh();

        sleep(1);
    }
    endwin();
    return 0;
}
