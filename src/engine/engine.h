#pragma once

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