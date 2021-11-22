#pragma once
#include "ofMain.h"

class FractalMode{
    public:
        virtual void draw(int x,int y, int n) = 0;
        virtual void setActivate(bool status) = 0;
        virtual bool getActivate() = 0;
};
