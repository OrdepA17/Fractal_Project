#include "drawMode1.h"

drawMode1::drawMode1(){
    this->activated = activated;
}

void drawMode1::draw(int x, int y, int n, int r, int g, int b){
    if (n != 0)
    {
        ofSetColor(r, g, b);
        ofDrawRectangle(x-40, y-40,100, 100);
        ofSetColor(255,255,255);
        draw(x + 100, y, n - 1, r - (n*1.8), g - (n*5.7), b + (n*4));
        draw(x - 100, y, n - 1, r + (n*5), g - (n*3), b + (n*4));
        draw(x, y + 100, n - 1, r - (n*1.8), g - (n*5.7), b + (n*4));
        draw(x, y - 100, n - 1, r + (n*5), g - (n*3), b + (n*4));
    }
}


void drawMode1::setActivate(bool status){
    this->activated = status;
}

bool drawMode1::getActivate(){
    return this->activated;
}