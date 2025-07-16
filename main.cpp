#include <SFML/Graphics.hpp>

int main()
{
    sf::CircleShape circle;
    circle.setRadius(200);
    circle.setPosition(0, 0);
    circle.setFillColor(sf::Color::Magenta);
    sf::RenderWindow window(sf::VideoMode(400, 400), "iD Tech SFML Project");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(circle);
        window.display();
    }

    return 0;
}
