#ifndef GAME_ENGINE_ENGINE_H
#define GAME_ENGINE_ENGINE_H
#include "window.h"

namespace game::engine {
class Engine final {
   public:
    Engine();
    Engine(Engine&&) = default;
    Engine& operator=(Engine&&) = default;
    ~Engine();

    Engine(const Engine&) = delete;
    Engine& operator=(const Engine&) = delete;

    void run();

   private:
    Window window_;
};
}  // namespace game::engine
#endif  // GAME_ENGINE_ENGINE_H