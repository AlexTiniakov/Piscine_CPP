#ifndef PLAYER_HPP
# define PLAYER_HPP

# include "GameEntity.hpp"

class Player : public GameEntity {
public:
    Player(double xMin = 0.0, double yMin = 0.0, double width = 0.0, double height = 0.0, double speedX = 1.0, double speedY = 1.0, std::string shape = "*");
    Player(const Player &p);
    Player &operator=(const Player &p);
    ~Player();
    void move_up();
    void move_down();
private:
    int m_lvl;
    int m_score;
    int _x;
    int _y;
};

#endif
