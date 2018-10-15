#ifndef WINDOWS_HPP
# define WINDOWS_HPP

# include <ncurses.h>
# include <string>

enum {
    kEventKeyUnknown = -1,
    kEventKeyUp,
    kEventKeyDown,
    kEventKeyLeft,
    kEventKeyRight,
    kEventKeySpace
};

class Window {
public:
    Window();
    Window(std::string name);
    Window(const Window &win);
    ~Window();

    void Clear();
    void Render();
    int GetEvent();

private:
    std::string m_name;
};

#endif
