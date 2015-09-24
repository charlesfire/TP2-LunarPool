#ifndef STATE_H
#define STATE_H

#include <SFML/Graphics/Drawable.hpp>

class Game;

class State : public sf::Drawable
{
    public:
        State(Game* game);
        virtual ~State() = default;
        virtual bool Init() = 0;
        virtual void ManageInput() = 0;
        virtual void Update() = 0;
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const = 0;
        virtual void Exit() = 0;
    protected:
        Game* game;
};

#endif // STATE_H
