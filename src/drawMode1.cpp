#include "drawMode1.h"

drawMode1::drawMode1(){
    this->activated = activated;
}

void drawMode1::draw(int x, int y, int n, int r, int g, int b){
    if (n != 0)
    {
        ofSetColor(r, g, b);
        ofDrawRectangle(x - 20, y - 20, 45, 45);
        ofSetColor(255,255,255);
        draw(x + 45, y, n - 1, r + (n * 6), g - (n * 1.5), b + (n * 8));
        draw(x - 45, y, n - 1, r + (n * 6), g - (n * 1.5), b + (n * 8));
        draw(x, y + 45, n - 1, r + (n * 6), g - (n * 1.5), b + (n * 8));
        draw(x, y - 45, n - 1, r + (n * 6), g - (n * 1.5), b + (n * 8));
    }
}


void drawMode1::setActivate(bool status){
    this->activated = status;
}

bool drawMode1::getActivate(){
    return this->activated;
}