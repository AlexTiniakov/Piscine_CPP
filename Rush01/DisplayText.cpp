/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DisplayText.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 16:12:31 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/14 23:12:28 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DisplayText.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 16:12:31 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/14 22:59:30 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DisplayText.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 16:12:31 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/14 22:59:07 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DisplayText.hpp"

int DisplayText::_width = 50;
int DisplayText::_hight = 50;

DisplayText::DisplayText(void) {
    _win = newwin(_hight, _width, 0, 0);
    initscr();
    noecho();
    timeout(0);
    keypad(stdscr, TRUE);
    curs_set(0);
    clearPony();
    _first = false;
}

DisplayText::~DisplayText(void) {
    endwin();
}

DisplayText::DisplayText(const DisplayText &rhs) {
    *this = rhs;
}

DisplayText &DisplayText::operator=(const DisplayText &rhs) {
    _win = rhs._win;
    return *this;
}

void    DisplayText::print(Module & mod) {
    while (1)
    {
        refresh();
        start_color();
        int x, y = 0;
	    getmaxyx(stdscr, y, x);
        while (x <= 120 || y <= 27)
        {
            erase();
            init_pair(1, COLOR_RED, COLOR_BLACK);
            attron(COLOR_PAIR(1));
            mvprintw(0, 20, "WINDOW SIZE ERROR");
            attroff(COLOR_PAIR(1));
            getmaxyx(stdscr, y, x);
            refresh();
            _first = false;
            if (getch() == 27)
             {
                std::system("pkill -9 ft_gkrellm");
                exit(endwin());
            };
        }
        if (x > 120 && y > 27)
        {
            try {
                init_pair(1, COLOR_RED, COLOR_BLACK);
                init_pair(2, COLOR_CYAN, COLOR_BLACK);
                init_pair(3, COLOR_YELLOW, COLOR_BLACK);
                attron(COLOR_PAIR(2));
                printTime(mod);
                if (!_first) {
                    printDate(mod);
                    printHostName(mod);
                    printUser(mod);
                    printVersion(mod);
                    printCPU(mod);
                    printCPUCores(mod);
                    printPony1();
                }
                printCPUProcesses(mod);
                printCPUThreads(mod);
                printCPUUsage(mod);
                printRAMUsed(mod);
                printRAMFree(mod);
                printNetworkIn(mod);
                printNetworkOut(mod);
                attroff(COLOR_PAIR(2));
                int RandIndex = rand() % 3;
                attron(COLOR_PAIR(RandIndex));
                mvprintw(28, 53, "Welcome to Monitor System!");
                mvprintw(29, 52, "Made by: @otiniako, @ybokina");
                attroff(COLOR_PAIR(RandIndex));
                _first = true;
            }
            catch (std::exception &e) {}
        }
        if (getch() == 27)
            break ;
    }
}

void DisplayText::printPony1(void)
{
    mvprintw(0, 61, "                 WW                                         ");
    mvprintw(1, 61, "                 WXN                                        ");
    mvprintw(2, 61, "                 WK0XW                                      ");
    mvprintw(3, 61, "                  NKKXW      N                              ");
    mvprintw(4, 61, "                  WXKKXN  WWNNNWNW                          ");
    mvprintw(5, 61, "               WWW  KXXXNWNKXKOO0XW                         ");
    mvprintw(6, 61, "                WW  XXNK0XNNX0O0KKXNW   WW                  ");
    mvprintw(7, 61, "                WNNWNKKXWW NKXNWNKXNNNNNXXW  W              ");
    mvprintw(8, 61, "                WXKNNX   WXKKW  X0X WWNNNNNW                ");
    mvprintw(9, 61, "                 WXXNWNNNNNWW  WX0XWWW WNXN                 ");
    mvprintw(10, 61, "               WNNNNNKOOKXW     WNXNNXNXXXNNW               ");
    mvprintw(11, 61, "             NXXNW NKKK00KW       NNNXXNWWWNXW W            ");
    mvprintw(12, 61, "          WWNXXNW  KOKXKXN  WW    WNNWWXNW WNNW WNW         ");
    mvprintw(13, 61, "         WXXKXNXW  NXXNNW   WNXNWNXNWWWWNNW WNNWKKN         ");
    mvprintw(14, 61, "        WX K0KXNW            NKNWNXXN   WNWW WNNXXW         ");
    mvprintw(15, 61, "        NN  XNNXN          WNNNW   NXW  WWXXNNNXN           ");
    mvprintw(16, 61, "         WNXKXNXKNWWW  WWWNXXW     WNNW   WXNWWNN           ");
    mvprintw(17, 61, "          ~~~~WNNNNNNNNNNNXXW       WNN    WNN NN           ");
    mvprintw(18, 61, "                        WNNW    WWWWNNW    WXNWXW           ");
    mvprintw(19, 61, "                       WNNW     WNXNWW     WXNNNW           ");
    mvprintw(20, 61, "                       NNW       WNNNWWWWWNNWNXW NXN        ");
    mvprintw(21, 61, "                      WNN         WNXNNNKXWW WNNNXKN        ");
    mvprintw(22, 61, "                      WNN          NNW NXW     WWNXW  W     ");
    mvprintw(23, 61, "                      WNW         WNNW WXNW   WWNNW         ");
    mvprintw(24, 61, "                      WXN   W    WNNW   NXNNNNNNW           ");
    mvprintw(25, 61, "                      WNNW  WWWNXXNWWWWWNNWWWWW             ");
    mvprintw(26, 61, "                       WXWWNNNNNXXWWNNNWW                   ");
}

void DisplayText::clearPony(void)
{
    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);
    attron(COLOR_PAIR(1));
    mvprintw(0, 0, "                                                                 ");
    mvprintw(1, 0, "                                                                 ");
    mvprintw(2, 0, "                                                                 ");
    mvprintw(3, 0, "                                                                 ");
    mvprintw(4, 0, "                                                                 ");
    mvprintw(5, 0, "                                                                 ");
    mvprintw(6, 0, "                                                                 ");
    mvprintw(7, 0, "                                                                 ");
    mvprintw(8, 0, "                                                                 ");
    mvprintw(9, 0, "                                                                 ");
    mvprintw(10, 0, "                                                                 ");
    mvprintw(11, 0, "                                                                 ");
    mvprintw(12, 0, "                                                                 ");
    mvprintw(13, 0, "                                                                 ");
    mvprintw(14, 0, "                                                                 ");
    mvprintw(15, 0, "                                                                 ");
    mvprintw(16, 0, "                                                                 ");
    mvprintw(17, 0, "                                                                 ");
    mvprintw(18, 0, "                                                                 ");
    mvprintw(19, 0, "                                                                 ");
    mvprintw(20, 0, "                                                                 ");
    mvprintw(21, 0, "                                                                 ");
    mvprintw(22, 0, "                                                                 ");
    mvprintw(23, 0, "                                                                 ");
    mvprintw(24, 0, "                                                                 ");
    mvprintw(25, 0, "                                                                 ");
    mvprintw(26, 0, "                                                                 ");
    mvprintw(27, 0, "                                                                 ");
    attroff(COLOR_PAIR(1));
}

void DisplayText::printDate(Module & mod) {
    std::string str = mod.getData();


    mvprintw(0, 0, "-------------------------------------------------------------");
    mvprintw(1, 0, "| Data:");
    mvprintw(1, 8, str.c_str());
}

void DisplayText::printTime(Module & mod) {
    std::string str = mod.getTime();

    mvprintw(1, 51, "         ");
    mvprintw(1, 51, str.c_str());
    if (!_first) {
        mvprintw(1, 45, "Time:");
        mvprintw(1, 60, "|");
        mvprintw(2, 0, "-------------------------------------------------------------");
    }

}

void DisplayText::printHostName(Module & mod) {
    std::string str = mod.getHostname();

    mvprintw(3, 0, "|              General information                          |");
    mvprintw(4, 0, "-------------------------------------------------------------");
    mvprintw(5, 0, "| HostName");
    mvprintw(5, 20, str.c_str());
    mvprintw(5, 60, "|");
}

void DisplayText::printUser(Module & mod) {
    std::string str = mod.getUsername();

    mvprintw(6, 0, "| UserName");
    mvprintw(6, 20, str.c_str());
    mvprintw(6, 60, "|");
}

void DisplayText::printVersion(Module & mod) {
    std::string str = mod.getVersion();

    mvprintw(7, 0, "| Version");
    mvprintw(7, 20, str.c_str());
    mvprintw(7, 60, "|");
    mvprintw(8, 0, "-------------------------------------------------------------");
}

void DisplayText::printCPU(Module & mod) {
    std::string str = mod.getCPU();

    mvprintw(9, 0, "|                        CPU                                |");
    mvprintw(10, 0, "-------------------------------------------------------------");
    mvprintw(11, 0, "| CPU:");
    mvprintw(11, 20, str.c_str());
    mvprintw(11, 60, "|");
}

void DisplayText::printCPUCores(Module & mod) {
    std::string str = mod.getCPU_core();

    mvprintw(12, 0, "| CPU cores:");
    mvprintw(12, 20, str.c_str());
    mvprintw(12, 60, "|");
}

void DisplayText::printCPUProcesses(Module & mod) {
    std::string str = mod.getCPU_process();

    mvprintw(13, 20, "     ");
    mvprintw(13, 20, str.c_str());
    if (!_first) {
        mvprintw(13, 0, "| CPU processes:");
        mvprintw(13, 60, "|");
    }
}

void DisplayText::printCPUThreads(Module & mod) {
    std::string str = mod.getCPU_threads();

    mvprintw(14, 20, "      ");
    mvprintw(14, 20, str.c_str());
    if (!_first) {
        mvprintw(14, 0, "| CPU threads:");
        mvprintw(14, 60, "|");
    }
}

void DisplayText::printCPUUsage(Module & mod) {
    std::string str = mod.getCPU_usage();

    mvprintw(15, 20, str.c_str());
    if (!_first) {
        mvprintw(15, 0, "| CPU usage:");
        mvprintw(15, 60, "|");
        mvprintw(16, 0, "-------------------------------------------------------------");
    }
}

void DisplayText::printRAMUsed(Module & mod) {
    std::string str = mod.getRam_used();

    mvprintw(19, 20, str.c_str());
    if (!_first) {
        mvprintw(17, 0, "|                        RAM                                |");
        mvprintw(18, 0, "-------------------------------------------------------------");
        mvprintw(19, 0, "| RAM Used:");
        mvprintw(19, 60, "|");
    }
}

void DisplayText::printRAMFree(Module & mod) {
    std::string str = mod.getRam_free();

    mvprintw(20, 20, str.c_str());
    if (!_first) {
        mvprintw(20, 0, "| RAM Free:");
        mvprintw(20, 60, "|");
        mvprintw(21, 0, "-------------------------------------------------------------");
    }
}

void DisplayText::printNetworkIn(Module & mod) {
    std::string str = mod.getNetwork_in();

    mvprintw(24, 20, str.c_str());
    if (!_first) {
        mvprintw(22, 0, "|                        NETWORK                            |");
        mvprintw(23, 0, "-------------------------------------------------------------");
        mvprintw(24, 0, "| Network IN, M:");
        mvprintw(24, 60, "|");
    }
}

void DisplayText::printNetworkOut(Module & mod) {
    std::string str = mod.getNetwork_out();

    mvprintw(25, 20, str.c_str());
    if (!_first) {
        mvprintw(25, 0, "| Network OUT, M:");
        mvprintw(25, 60, "|");
        mvprintw(26, 0, "-------------------------------------------------------------");
    }
}
