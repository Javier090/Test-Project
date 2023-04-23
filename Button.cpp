#include "Button.h"

Button::Button(float x, float y, float width, float height, const sf::Color& color) {
    buttonShape.setSize(sf::Vector2f(width, height));
    buttonShape.setFillColor(color);
    buttonShape.setPosition(x, y);
}

void Button::setPosition(float x, float y) {
    buttonShape.setPosition(x, y);
}

bool Button::isClicked(const sf::Vector2i& mousePos) const {
    return buttonShape.getGlobalBounds().contains(mousePos.x, mousePos.y);
}

void Button::draw(sf::RenderWindow& window) const {
    window.draw(buttonShape);
}
