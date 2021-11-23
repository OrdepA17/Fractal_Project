#include "drawMode2.h"

void drawMode2::draw(int x, int y, int n, int r, int g, int b){
    componentstree(200, n, x, y, 30, r, g, b);
}

void drawMode2::componentstree(int length, int n, int x, int y, int d, int r, int g, int b){
    if (n != 0)
    {
        int middleX = x;
        int middleY = y - length;
        int leftBranchX = x - length * cos(PI / 180 * d);
        int leftBranchY = middleY - length * sin(PI / 180 * d);
        int rightBranchX = x + length * cos(PI / 180 * d);
        int rightBranchY = middleY - length * sin(PI / 180 * d);

        ofSetColor(r, g, b);
        ofDrawLine(x, y, x, y - length);
        ofDrawLine(x, y - length, x, y - length*2);
        ofDrawLine(x, y - length, rightBranchX, rightBranchY);
        ofDrawLine(x, y - length, leftBranchX, leftBranchY);
        ofSetColor(255, 255, 255);

        componentstree(length / 2, n - 1, rightBranchX, rightBranchY, 30,  r + (n*5), g - (n*3), b + (n*4));
        componentstree(length / 2, n - 1, middleX, middleY, 30, r + (n*12), g + (n*12), b - (n*4));
        componentstree(length / 2, n - 1, leftBranchX, leftBranchY, 30, r - (n*1.8), g - (n*5.7), b + (n*4));
        componentstree(200 / 3, n - 1, (ofGetWidth()/2)/1.7, (ofGetHeight()-50), 30, r + (n*5), g - (n*3), b + (n*4));
        componentstree(200 / 3, n-1, (ofGetWidth()/2)*1.4, (ofGetHeight()-50), 30, r - (n*1.8), g - (n*5.7), b + (n*4));
        componentstree(200/3, n-1, (ofGetWidth()/2)*1.4, (ofGetHeight()-50), 30, r , g , b );
        componentstree(200/3, n-1, (ofGetWidth()/2)/1.7, (ofGetHeight()-50), 30, r , g , b );
    }
}

drawMode2::drawMode2(){
    this->activated = activated;
}

void drawMode2::setActivate(bool status){
    this->activated = status;
}

bool drawMode2::getActivate(){
    return this->activated;
}