#pragma once
#include "ofMain.h"

class FractalMode{
    //All fractals have these methods in common 
    public:
    virtual void draw(int x, int y, int n)=0;
    virtual void setActive(bool)=0;
    virtual bool getActive()=0;
};