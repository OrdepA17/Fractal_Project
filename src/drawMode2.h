#pragma once
#include "FractalMode.h"

class drawMode2 : public FractalMode {
    private:
        bool activated = false;
    
    public:
        drawMode2();
        void draw(int x, int y, int n, int r, int g, int b);
        void componentstree(int length, int n, int x, int y, int d, int r, int g, int b);
        void setActivate(bool state);
        bool getActivate();
    
};