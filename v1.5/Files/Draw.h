#pragma once

// Library: Draw.h

// Needed libraries.
#include <Windows.h>

// Extra libraries in the project.
#include "Struct.h"

void rect		(COORDS figure, HDC hdc);
void roundRect	(COORDS figure, HDC hdc);
void circ		(COORDS figure, HDC hdc);
void elli		(COORDS figure, HDC hdc);

void filledRect		(COORDS figure, HDC hdc, COLORREF color);
void normalRect		(COORDS figure, HDC hdc, HPEN& hPen);
void filledRoundRect(COORDS figure, HDC hdc, COLORREF color);
void normalRoundRect(COORDS figure, HDC hdc, HPEN& hPen);
void filledCirc		(COORDS figure, HDC hdc, COLORREF color);
void normalCirc		(COORDS figure, HDC hdc, HPEN& hPen);
void filledElli		(COORDS figure, HDC hdc, COLORREF color);
void normalElli		(COORDS figure, HDC hdc, HPEN& hPen);

void deleteFilledObjetFigure(HGDIOBJ orig, HDC hdc, HBRUSH& hBrush);
void deleteNormalObjetFigure(HGDIOBJ orig, HDC hdc, HPEN& hPen);
void deleteObjetLine		(HGDIOBJ orig, HDC hdc, HPEN& hPen);
