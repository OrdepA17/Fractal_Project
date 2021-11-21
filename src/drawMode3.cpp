#include "drawMode3.h"

void drawMode3::draw(int x, int y, int n){
    componentstriangle((float)x,10,(float)y,n);
}

void drawMode3::componentstriangle(float x, float y, float size, int n){
    if (n == 0)
    {
        return;
    }

    ofPoint a(x, y);
    ofPoint b(x + size, y);
    ofPoint c(x + size / 2, y + ((sqrt(3) * size) / 2));

    ofDrawTriangle(a, b, c);

    componentstriangle(x, y, size / 2, n - 1);
    componentstriangle((a.x + b.x) / 2, (a.y + b.y) / 2, size / 2, n - 1);
    componentstriangle((a.x + c.x) /2, (a.y + c.y) /2 , size/2, n - 1);
}

drawMode3::drawMode3(){
    this->activated = activated;
}

void drawMode3::setActivate(bool status){
    this -> activated = status;
}

bool drawMode3::getActivate(){
    return this-> activated;
}