#ifndef GAME_ENGINE_ENGINE_H
#define GAME_ENGINE_ENGINE_H

namespace game::engine {
class Engine final {
   public:
    Engine();

    Engine(Engine&&) = delete;
    Engine& operator=(Engine&&) = delete;
    Engine& operator=(const Engine&) = delete;
    Engine(const Engine&) = delete;

    ~Engine();
};
}  // namespace game::engine

#endif  // GAME_ENGINE_ENGINE_H