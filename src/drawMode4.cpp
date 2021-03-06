#include "drawMode4.h"

DrawMode4::DrawMode4(){
    activated=false;
}

void DrawMode4::draw(int x, int y, int n, int r, int g, int b){
    drawMode4(x-50, y-50, n, 100, r, g, b);
}

void DrawMode4::drawMode4(int x, int y, int n, int size, int r, int g, int b){

    if (n!=0){

        ofSetColor(r, g, b);
        ofDrawRectangle(x, y-200,100, 100);
        ofSetColor(255, 255, 255);
        draw(x + 100, y+100, n - 1, r + (n*4.75), g - (n*3), b + (n*3));
        draw(x, y + 100, n - 1, r + (n*4.75), g - (n*3), b + (n*3));
    }
}

bool DrawMode4::getActivate() {return activated;}

void DrawMode4::setActivate(bool status){
    this -> activated = status;
}