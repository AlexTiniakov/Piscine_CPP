#ifndef GAME_HPP
# define GAME_HPP

# include <ncurses.h>
# include <curses.h>
# include "Player.hpp"
# include "Enemy.hpp"
# include "Window.hpp"
# include "List.hpp"
# include "Bullet.hpp"

class Game {
public:
    Game();
    ~Game();

    void Loop();

private:
    double m_time;
    Window m_window;

    Player m_player;

    Bullet m_bullet;

    List<Enemy> m_enemies;

    Game(const Game &app);
    Game &operator=(const Game &app);

    void ProcessEvents(double dt);
    void Update(double dt);
    void Render();
};

#endif
