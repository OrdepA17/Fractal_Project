#include "drawMode1.h"

drawMode1::drawMode1(){
    this->activated = activated;
}

void drawMode1::draw(int x, int y, int n){
    if (n != 0)
    {
        ofDrawRectangle(x, y,100, 100);
        draw(x + 100, y, n - 1);
        draw(x - 100, y, n - 1);
        draw(x, y + 100, n - 1);
        draw(x, y - 100, n - 1);
    }
}


void drawMode1::setActivate(bool status){
    this->activated = status;
}

bool drawMode1::getActivate(){
    return this->activated;
}