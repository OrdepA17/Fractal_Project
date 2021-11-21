#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    Fractal.push_back(new drawMode1());
    Fractal.push_back(new drawMode2());
    Fractal.push_back(new drawMode3());
    
    ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255));
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
    if(Fractal[0]->getActivate()){
        Fractal[0]->draw(ofGetWidth()/2, ofGetHeight()/2,levels);
    }
    if(Fractal[1]->getActivate()){
        Fractal[1]->draw(ofGetWidth()/2,ofGetHeight()-50,levels);
    }
    if(Fractal[2]->getActivate()){
        Fractal[2]->draw(ofGetWidth()/3, ofGetHeight()/2,levels);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
    // This method is called automatically when any key is pressed
    switch (key)
    {
    case '1':
        ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255));
        Fractal[0]->setActivate(!Fractal[0]->getActivate());
        break;
    case '2':
        ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255));
        Fractal[1]->setActivate(!Fractal[1]->getActivate());
        break;
    case '3':
        ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255));
        Fractal[2]->setActivate(!Fractal[2]->getActivate());
        break;
    case '4':
        
        break;
    case '-':
        if(levels<0){
            levels=0;
            break;
        }
       levels--; 
       break;
    case '=':
        levels++;
        break;
    
    }
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