/* 
 * File:   Bug.cpp
 */

#include "Bug.h"
#include "Exception.h"

using namespace std;

Bug::Bug()
{
    
}

Bug::Bug(tcolor i_col, int i_progid, int i_resting)
{
    tcolor = i_col;
    prog_id = i_progid;
    resting = i_resting;
}

void Bug::start_resting()
{
    resting = 1;
}

bool Bug::rested()
{
    if(resting)
        return true;
    else
        return false;
}

int Bug::get_progid()
{
    return prog_id;
}

tcolor Bug::get_color()
{
    return color;
}

tstate Bug::get_state()
{
    return state;
}

void Bug::set_state(tstate new_state)
{
    state = new_state;
}

tdirection Bug::get_direction()
{
    return direction;
}

void Bug::set_direction(tdirection new_direction)
{
    direction = new_direction;
}

tposition Bug::get_position()
{
    return position;
}

void Bug::set_position(tposition new_position)
{
    position = new_position;
}

bool Bug::get_food()
{
    if(food)
        return true;
    else
        return false;
}

void Bug::set_food(bool new_food)
{
    food = new_food;
}

bool Bug::is_dead()
{
    if(dead)
        return true;
    else
        return false;
}

void Bug::kill()
{
    dead = true;
}

/*
 class Bug{
private:
    tcolor color;
    tstate state;
    int prog_id;
    tposition position;
    tdirection direction;
    int resting;
    int remaining_rest;
    bool food;
    bool dead;

public:
    Bug();
    Bug(tcolor i_col, int i_progid, int i_resting);
    
    void start_resting();
    bool rested();
    int get_progid();
    tcolor get_color();
    tstate get_state();
    void set_state(tstate new_state);
    tdirection get_direction();
    void set_direction(tdirection new_direction);
    tposition get_position();
    void set_position(tposition new_position);
    bool get_food();
    void set_food(bool new_food);
    bool is_dead();
    void kill();
};

#endif /* BUG_H */
 */