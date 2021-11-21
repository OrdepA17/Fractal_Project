#pragma once
#include "FractalMode.h"

class drawMode1 : public FractalMode {
    public:
        drawMode1();
        void draw(int x, int y, int n);
        void setActivate(bool status);
        bool getActivate();

    private:
        bool activated = true;

};