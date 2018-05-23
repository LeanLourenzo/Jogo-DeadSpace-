#include <SFML\Graphics.hpp>
#include "Inimigo.h"

Inimigo::Inimigo(Texture *texturas, Vector2u janelaTam)

{
	this->HPMax = rand() % 3 + 1;
	this->HP = this->HPMax;
	this->corpo.setTexture(*texturas);
	this->corpo.setScale(0.1f, 0.1f);
	this->corpo.setPosition(janelaTam.x - this->corpo.getGlobalBounds().width, rand() % (int)(janelaTam.y - this->corpo.getGlobalBounds().height));
}
