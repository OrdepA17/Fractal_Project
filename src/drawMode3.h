#pragma once
#include "FractalMode.h"

class drawMode3 : public FractalMode{
    private: 
        bool activated = false;
    
    public:
        drawMode3();
        void draw(int x, int y, int n, int r, int g, int bl);
        void componentstriangle(float x, float y, float size, int n, int r, int g, int bl); 
        void setActivate(bool status);
        bool getActivate();
};