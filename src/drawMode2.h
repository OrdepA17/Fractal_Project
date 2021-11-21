#pragma once
#include "FractalMode.h"

class drawMode2 : public FractalMode {
    private:
        bool activated = false;
    
    public:
        drawMode2();
        void draw(int x, int y, int n);
        void componentstree(int length, int n, int x, int y, int d);
        void setActivate(bool state);
        bool getActivate();
    
};