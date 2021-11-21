#pragma once
#include "FractalMode.h"

class drawMode3 : public FractalMode{
    private: 
        bool activated = false;
    
    public:
        drawMode3();
        void draw(int x, int y, int n);
        void componentstriangle(float x, float y, float size, int n); 
        void setActivate(bool status);
        bool getActivate();
};