#ifndef STARTUPPAGE_H
#define STARTUPPAGE_H

#include "Button.h"
#include <SFML/Graphics.hpp>

class StartupPage {
public:
    StartupPage(const sf::Font& font, sf::RenderWindow& window);
    bool playButtonClicked() const;

    void draw(sf::RenderWindow& window) const;

private:
    sf::Text title;
    Button playButton;
};

#endif // STARTUPPAGE_H
