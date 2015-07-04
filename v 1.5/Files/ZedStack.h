#pragma once

// Library: ZedStack.h

// Needed libraries:
#include <iostream>
#include <windows.h>

#define main _main_
int _main_();

namespace ZedStack {
    class SCREEN {
    private:
        int WIDTH;
        int HEIGHT;

        void rewriteStandards(int& oldWidth, int& oldHeight, int newWidth, int newHeight);
    public:
        SCREEN();
        SCREEN (int width, int height);
        virtual ~SCREEN ();

        void getWidthAndHeight(int& width, int& Height);
        void resize(int newWidth, int newHeight);
        void render();
        void clear();
        void close();

        int getWidth();
        int getHeight();
    };
    class MOUSE {
    private:
        int XAXIS;
        int YAXIS;
    public:
        MOUSE();
        MOUSE (int& xAxis, int& yAxis);
        virtual ~MOUSE ();

        void getCoords(int& xAxis, int& yAxis);

        bool isInScreen();
        bool checkAndGetCoords(int& xAxis, int& yAxis);

        bool lButtonUp();
        bool lButtonDown();
        bool lButtonDoubleClick();
        bool lButtonSingleClick();
        bool rButtonUp();
        bool rButtonDown();
        bool rButtonDoubleClick();
        bool rbuttonSingleClick();
        bool mButtonUp();
        bool mButtonDown();
        bool mButtonDoubleClick();
        bool mbuttonSingleClick();

        int getX();
        int getY();
    };
} /* ZedStack */
