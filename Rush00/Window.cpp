#include "Window.hpp"

Window::Window() {
    initscr();
    noecho();
    timeout(0);
    keypad(stdscr, TRUE);
    //halfdelay(10);
    curs_set(0);
}

Window::Window(std::string name) : m_name(name) {
}

Window::Window(Window const& win) {
	*this = win;
}

Window::~Window() {
    endwin();
    exit(0);
}

int Window::GetEvent() {
    int event;

    event = getch();
    if (event == KEY_LEFT) {
        return kEventKeyLeft;
    } else if (event == KEY_UP) {
        return kEventKeyUp;
    } else if (event == KEY_RIGHT) {
        return kEventKeyRight;
    } else if (event == KEY_DOWN) {
        return kEventKeyDown;
    } else if (event == ' ') {
        return kEventKeySpace;
    } else {
        return kEventKeyUnknown;
    }
}

void Window::Clear() {
    clear();
}

void Window::Render() {
//    mvprintw(10, 10, "kek");
    refresh();
}
