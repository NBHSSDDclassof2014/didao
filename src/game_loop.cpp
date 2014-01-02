#include "SDL/SDL.h"
#include "suidao.hpp"

namespace Suidao {

void Game::Run() {
    Init();
    for (;;) {
        Input();
        Network();
        
        _timer.nextTickStart();
        Update();
        _timer.nextTickEnd();
        
        Draw();
    }
}

GameTimer::GameTimer() {
    _tick = 0;
    _lastTickStart = 0;
    _lastTickEnd = 0;
}

int GameTimer::get_tick() {
    return _tick;
}

void GameTimer::nextTickStart() {
    _tick++;
    _lastTickStart = SDL_GetTicks();
}

void GameTimer::nextTickEnd() {
    _lastTickEnd = SDL_GetTicks();
}

unsigned long long GameTimer::timeSinceLastTickStart() {
    return SDL_GetTicks() - _lastTickStart;
}

unsigned long long GameTimer::timeSinceLastTickEnd() {
    return SDL_GetTicks() - _lastTickEnd;
}

}