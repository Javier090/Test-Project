#include "StartupPage.h"

StartupPage::StartupPage(const sf::Font& font, sf::RenderWindow& window) :
    playButton(300, 350, 200, 50, sf::Color::Green) {

    title.setFont(font);
    title.setString("cargoChaos");
    title.setCharacterSize(48);
    title.setFillColor(sf::Color::White);
    title.setStyle(sf::Text::Bold);
    title.setPosition(300, 200);
}

bool StartupPage::playButtonClicked() const {
    return playButton.isClicked(sf::Mouse::getPosition(window));
}

void StartupPage::draw(sf::RenderWindow& window) const {
    window.draw(title);
    playButton.draw(window);
}
