#pragma once

// Library that is being defined.
#include "Draw.h"

// Needed libraries.
#include <Windows.h>
#include <windowsx.h>

// Extra libraries in the project.
#include "Struct.h"

void rect		(COORDS figure, HDC hdc) {
	BeginPath(hdc);
	MoveToEx(hdc, int(figure.xStart), int(figure.yStart), NULL);

	LineTo(hdc, int(figure.xStart), int(figure.yFinal));
	LineTo(hdc, int(figure.xFinal), int(figure.yFinal));
	LineTo(hdc, int(figure.xFinal), int(figure.yStart));
	LineTo(hdc, int(figure.xStart), int(figure.yStart));

	EndPath(hdc);
}
void roundRect	(COORDS figure, HDC hdc) {
	BeginPath(hdc);
	RoundRect(
		hdc,
		int(figure.xStart), int(figure.yStart),
		int(figure.xFinal), int(figure.yFinal),
		figure.wRound, figure.hRound);
	EndPath(hdc);
}
void circ		(COORDS figure, HDC hdc) {
	BeginPath(hdc);
	Arc(
		hdc,
		int(figure.xAxis - figure.radius), int(figure.yAxis - figure.radius),
		int(figure.xAxis + figure.radius), int(figure.yAxis + figure.radius),
		int(figure.xAxis - figure.radius), int(figure.yAxis - figure.radius),
		int(figure.xAxis - figure.radius), int(figure.yAxis - figure.radius));
	EndPath(hdc);
}
void elli		(COORDS figure, HDC hdc) {
	BeginPath(hdc);
	Ellipse(
		hdc,
		int(figure.xStart), int(figure.yStart),
		int(figure.xFinal), int(figure.yFinal));
	EndPath(hdc);
}

void filledRect(COORDS figure, HDC hdc, COLORREF color) {
	HBRUSH hBrush = CreateSolidBrush(color);
	HGDIOBJ orig = SelectObject(hdc, hBrush);
	rect(figure, hdc);
	deleteFilledObjetFigure(orig, hdc, hBrush);
}
void normalRect(COORDS figure, HDC hdc, HPEN& hPen) {
	HGDIOBJ orig = SelectObject(hdc, hPen);
	rect(figure, hdc);
	deleteNormalObjetFigure(orig, hdc, hPen);
}
void filledRoundRect(COORDS figure, HDC hdc, COLORREF color) {
	HBRUSH hBrush = CreateSolidBrush(color);
	HGDIOBJ orig = SelectObject(hdc, hBrush);
	roundRect(figure, hdc);
	deleteFilledObjetFigure(orig, hdc, hBrush);
}
void normalRoundRect(COORDS figure, HDC hdc, HPEN& hPen) {
	HGDIOBJ orig = SelectObject(hdc, hPen);
	roundRect(figure, hdc);
	deleteNormalObjetFigure(orig, hdc, hPen);
}
void filledCirc(COORDS figure, HDC hdc, COLORREF color) {
	HBRUSH hBrush = CreateSolidBrush(color);
	HGDIOBJ orig = SelectObject(hdc, hBrush);
	circ(figure, hdc);
	deleteFilledObjetFigure(orig, hdc, hBrush);
}
void normalCirc(COORDS figure, HDC hdc, HPEN& hPen) {
	HGDIOBJ orig = SelectObject(hdc, hPen);
	circ(figure, hdc);
	deleteNormalObjetFigure(orig, hdc, hPen);
}
void filledElli(COORDS figure, HDC hdc, COLORREF color) {
	HBRUSH hBrush = CreateSolidBrush(color);
	HGDIOBJ orig = SelectObject(hdc, hBrush);
	elli(figure, hdc);
	deleteFilledObjetFigure(orig, hdc, hBrush);
}
void normalElli(COORDS figure, HDC hdc, HPEN& hPen) {
	HGDIOBJ orig = SelectObject(hdc, hPen);
	elli(figure, hdc);
	deleteNormalObjetFigure(orig, hdc, hPen);
}

void deleteFilledObjetFigure(HGDIOBJ orig, HDC hdc, HBRUSH& hBrush) {
	FillPath(hdc);
	SelectObject(hdc, orig);
	DeleteObject(hBrush);
}
void deleteNormalObjetFigure(HGDIOBJ orig, HDC hdc, HPEN& hPen) {
	StrokePath(hdc);
	SelectObject(hdc, orig);
	DeleteObject(hPen);
}
void deleteObjetLine(HGDIOBJ orig, HDC hdc, HPEN& hPen){
	SelectObject(hdc, orig);
	StrokePath(hdc);
	DeleteObject(hPen);
}