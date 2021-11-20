#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
}

//--------------------------------------------------------------
void ofApp::update()
{
    /* The update method is called muliple times per second
    It's in charge of updating variables and the logic of our app */
    ofSetBackgroundColor(0, 0, 0);
}

//--------------------------------------------------------------
void ofApp::draw()
{
    /* The update method is called muliple times per second
    It's in charge of drawing all figures and text on screen */
    ofNoFill();
    if (active1)
    {
        drawMode1(ofGetWidth() / 2, ofGetHeight() / 2, 4+levels);
    }
    if (active2)
    {
        drawMode2(200, 10+levels, ofGetWidth() / 2, ofGetHeight() - 50, 30);
    }
    if (active3)
    {
        drawMode3(ofGetWidth() / 3, 10, ofGetHeight() / 2, 10+levels);
    }
}
void ofApp::drawMode1(int x, int y, int n)
{

    if (n != 0)
    {
        float red = ofRandom(255);
        float green = ofRandom(255);
        float blue = ofRandom(255);
        ofSetColor(red,green,blue);
        ofDrawCircle(x, y, 100);
        drawMode1(x + 100, y, n - 1);
        drawMode1(x - 100, y, n - 1);
        drawMode1(x, y + 100, n - 1);
        drawMode1(x, y - 100, n - 1);
    }
}
void ofApp::drawMode2(int length, int n, int x, int y, int d)
{
    if (n != 0)
    {
        int middleX = x;
        int middleY = y - length;
        int leftBranchX = x - length * cos(PI / 180 * d);
        int leftBranchY = middleY - length * sin(PI / 180 * d);
        int rightBranchX = x + length * cos(PI / 180 * d);
        int rightBranchY = middleY - length * sin(PI / 180 * d);

        float red = ofRandom(255);
        float green = ofRandom(255);
        float blue = ofRandom(255);
        ofSetColor(red,green,blue);
        ofDrawLine(x, y, x, y - length);
        red = ofRandom(255);
        green = ofRandom(255);
        blue = ofRandom(255);
        ofSetColor(red,green,blue);
        ofDrawLine(x, y - length, x, y - length*2);
        red = ofRandom(255);
        green = ofRandom(255);
        blue = ofRandom(255);
        ofSetColor(red,green,blue);
        ofDrawLine(x, y - length, rightBranchX, rightBranchY);
        red = ofRandom(255);
        green = ofRandom(255);
        blue = ofRandom(255);
        ofSetColor(red,green,blue);
        ofDrawLine(x, y - length, leftBranchX, leftBranchY);

        drawMode2(length / 2, n - 1, rightBranchX, rightBranchY, 30);
        drawMode2(length / 2, n - 1, middleX, middleY, 30);
        drawMode2(length / 2, n - 1, leftBranchX, leftBranchY, 30);
    }
}

void ofApp::drawMode3(float x, float y, float size, int n)
{
    if (n == 0)
    {
        return;
    }

    ofPoint a(x, y);
    ofPoint b(x + size, y);
    ofPoint c(x + size / 2, y + ((sqrt(3) * size) / 2));

    float red = ofRandom(255);
    float green = ofRandom(255);
    float blue = ofRandom(255);
    ofSetColor(red,green,blue);
    ofDrawTriangle(a, b, c);

    drawMode3(x, y, size / 2, n - 1);
    drawMode3((a.x + b.x) / 2, (a.y + b.y) / 2, size / 2, n - 1);
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
    // This method is called automatically when any key is pressed
    switch (key)
    {
    case '1':
        if(!active1){
            active1=true;
            break;
        }
        else if (active1){
            active1=false;
            break;
        }
        break;
    case '2':
         if(!active2){
            active2=true;
            break;
        }
        else if (active2){
            active2=false;
            break;
        }
        break;
    case '3':
         if(!active3){
            active3=true;
            break;
        }
        else if (active3){
            active3=false;
            break;
        }
        break;
    case '4':
        mode = '4';
        break;
    }
    if(key == '-'){
        if(levels<0){
            levels=0;
        }
       levels--; 
    }
    if(key == '='){
        levels++;
    }
}

void ofApp::Color(vector<vector<float>> Colorlist){
    
    float red = ofRandom(255);
    float green = ofRandom(255);
    float blue = ofRandom(255);
    Colorlist.push_back({red,green,blue});
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg)
{
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo)
{
}