#pragma once
#include "FractalMode.h"

class DrawMode4 : public FractalMode{
    
    private:
        bool activated=false;

    public:

        DrawMode4();
         void draw(int x, int y, int n, int r, int g, int b);
        void drawMode4(int x, int y, int n, int size, int r, int g, int b);
        void setActivate(bool status);
        bool getActivate();


};