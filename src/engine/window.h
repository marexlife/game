#ifndef GAME_ENGINE_WINDOW_H
#define GAME_ENGINE_WINDOW_H
namespace game::engine {
class Window final {
   public:
    Window() = default;
    Window(Window&&) = default;
    Window& operator=(Window&&) = default;
    ~Window() = default;

    Window(const Window&) = delete;
    Window& operator=(const Window&) = delete;

    void open();
    void close();

   private:
};
}  // namespace game::engine
#endif  // GAME_ENGINE_WINDOW_H