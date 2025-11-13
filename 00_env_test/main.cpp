#include <SFML/Graphics.hpp>
#include <SFML/Window/Event.hpp>
#include <optional>

int main() {
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Hello SFML 3.x");

    while (window.isOpen()) {
        // pollEvent returns std::optional<sf::Event>
        while (auto eventOpt = window.pollEvent()) {
            auto &event = *eventOpt;
            // Check for Close event
            if (event.is<sf::Event::Closed>()) {
                window.close();
            }
        }

        window.clear(sf::Color::Black);
        window.display();
    }

    return 0;
}