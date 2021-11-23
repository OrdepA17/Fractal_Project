#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    Fractal.push_back(new drawMode1());
    Fractal.push_back(new drawMode2());
    Fractal.push_back(new drawMode3());
    Fractal.push_back(new DrawMode4());
    
    red = 65;
    green = 255;
    blue = 0;
}

//--------------------------------------------------------------
void ofApp::update()
{
    /* The update method is called muliple times per second
    It's in charge of updating variables and the logic of our app */
    ofSetBackgroundColor(0, 0, 0);

    if(replay == true){
            timer ++;
            if (timer == 30*3){
        if(looping == false && levels!=6){
                levels ++;
                timer=0;
            }
            if(looping==true && levels!=0){
                levels --;
                timer=0;
            }
            if((looping == true && levels ==0) || (looping == false && levels == 6 )){
                looping = !looping;
            }
        }

    }
}

//--------------------------------------------------------------
void ofApp::draw()
{
    /* The update method is called muliple times per second
    It's in charge of drawing all figures and text on screen */
    ofNoFill();
    if(Fractal[0]->getActivate()){
        Fractal[0]->draw(ofGetWidth()/2, ofGetHeight()/2,levels, red, green, blue);
    }
    if(Fractal[1]->getActivate()){
        Fractal[1]->draw(ofGetWidth()/2,ofGetHeight()-50,levels, red, green, blue);
    }
    if(Fractal[2]->getActivate()){
        Fractal[2]->draw(ofGetWidth()/3, ofGetHeight()/2,levels, red, green, blue);
    }
    if(Fractal[3]->getActivate()){
        Fractal[3]->draw(ofGetWidth()/2, ofGetHeight()/2,levels, red, green, blue);
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
        ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255));
         Fractal[3]->setActivate(!Fractal[3]->getActivate());
        break;
    case '-':
        if(levels<=0){
            break;
        }
       levels--; 
       break;
    case '=':
        if(levels>8){
            break;
        }
        levels++;
        break;

    case ' ':
        levels = 0;
        timer = 0;
        replay = true;
        break;

    case 'c':
        replay = false;
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