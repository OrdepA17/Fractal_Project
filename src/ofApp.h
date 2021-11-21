#pragma once
#include<cmath>
#include <vector>

#include "ofMain.h"
#include "drawMode1.h"
#include "drawMode2.h"
#include "drawMode3.h"
#include "drawMode4.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);


		int levels = 10;
	private:
		char mode = '1';
		vector<FractalMode*> Fractal;
};
