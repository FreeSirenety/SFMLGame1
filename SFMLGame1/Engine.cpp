#include "Engine.h"
#include "Entity.h"
#include "Player.h"

Engine::Engine()
{

}

void Engine::Initialize()
{

}

bool Engine::Run()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	Player entity;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
				return false;
			}
				
		}
		entity.Update(10);
		window.clear();
		window.draw(shape);
		window.display();
	}

	return true;
}

void Engine::Cleanup()
{

}