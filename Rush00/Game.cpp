#include "Game.hpp"
#include "Timer.hpp"

#include <unistd.h>

Game::Game() {

}

Game::Game(const Game &app)
{
    (void)app;
}

Game& Game::operator=(const Game &app1)
{
    (void)app1;
    return *this;
}

Game::~Game() {

}

void Game::ProcessEvents(double dt) {
    int event;
    event = m_window.GetEvent();
    if (event == kEventKeyUp)
        m_player.move_up();
    if (event == kEventKeyDown)
        m_player.move_down();
}

void Game::Update(double dt) {

    ListNode<Enemy> *enemyNode = m_enemies.begin;
    while (enemyNode) {
        if (enemyNode->data.IntersectedBy(m_player))
            exit(0);
        enemyNode->data.Move(dt);
        //randomMove up/down
        enemyNode = enemyNode->next;
    }
//    m_bullet.Move(deltaTime);
}

void Game::Render() {
    ListNode<Enemy> *enemyNode = m_enemies.begin;
    while (enemyNode) {
        enemyNode->data.Draw();
        enemyNode = enemyNode->next;
    }
    m_player.Draw();
//    m_bullet.Draw();
    m_window.Render();

}

void Game::Loop() {
    const double estimatedFrameTime = 1.0 / 60.0;

    Timer timer;
    while (true) {
        const double dt = timer.GetDeltaTime();
//        m_time += GetDeltaTime();
        m_window.Clear();
        ProcessEvents(dt);
        Update(dt);
        Render();

        /*const int numUSecToSleep = (estimatedFrameTime - dt) * 1e6;
        if (numUSecToSleep > 0)
            usleep(numUSecToSleep);*/
    }
}
