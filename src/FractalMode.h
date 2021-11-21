#pragma once
#include "ofMain.h"

class FractalMode{
<<<<<<< HEAD
    public:
        virtual void draw(int x,int y, int n) = 0;
        virtual void setActivate(bool status) = 0;
        virtual bool getActivate() = 0;
     
=======
    //All fractals have these methods in common 
    public:
    virtual void draw(int x, int y, int n)=0;
    virtual void setActive(bool)=0;
    virtual bool getActive()=0;
>>>>>>> 359fd96a3728183818f2c4c85d08b548013ef870
};