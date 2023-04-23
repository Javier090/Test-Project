#ifndef BUTTON_H
#define BUTTON_H
#include <SFML/Graphics.hpp>

class Button {
public:
    Button(float x, float y, float width, float height, const sf::Color& color);
    void setPosition(float x, float y);
    bool isClicked(const sf::Vector2i& mousePos) const;
    void draw(sf::RenderWindow& window) const;

private:
    sf::RectangleShape buttonShape;
};
#endif // BUTTON_H