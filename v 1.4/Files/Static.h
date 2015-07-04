#pragma once

// Library: Static.h

// Needed libraries.
#include <Windows.h>

static COLORREF colours[] = {
	RGB(240, 248, 255), // AliceBlue.
	RGB(250, 235, 215), // AntiqueWhite.
	RGB(0, 255, 255), // Aqua.
	RGB(127, 255, 212), // Aquamarine.
	RGB(240, 255, 255), // Azure.
	RGB(245, 245, 220), // Beige.
	RGB(255, 228, 196), // Bisque.
	RGB(0, 0, 0), // Black.
	RGB(255, 235, 205), // BlanchedAlmond.
	RGB(0, 0, 255), // Blue.
	RGB(138, 43, 226), // BlueViolet.
	RGB(165, 42, 42), // Brown.
	RGB(222, 184, 135), // BurlyWood.
	RGB(95, 158, 160), // CadetBlue.
	RGB(127, 255, 0), // Chartreuse.
	RGB(210, 105, 30), // Chocolate.
	RGB(255, 127, 80), // Coral.
	RGB(100, 149, 237), // cornflowerBlue.
	RGB(255, 248, 220), // Cornsilk.
	RGB(220, 20, 60), // Crimson.
	RGB(0, 255, 255), // Cyan.
	RGB(0, 0, 139), // DarkBlue.
	RGB(0, 139, 139), // DarkCyan.
	RGB(184, 134, 11), // DarkGoldenRod.
	RGB(169, 169, 169), // DarkGray.
	RGB(0, 100, 0), // DarkGreen.
	RGB(189, 183, 107), // DarkKhaki.
	RGB(139, 0, 139), // DarkMagenta.
	RGB(85, 107, 47), // DarkOliveGreen.
	RGB(255, 140, 0), // DarkOrange.
	RGB(153, 50, 204), // DarkOrchid.
	RGB(139, 0, 0), // DarkRed.
	RGB(233, 150, 122), // DarkSalmon.
	RGB(143, 188, 143), // DarkSeaGreen.
	RGB(72, 61, 139), // DarkSlateBlue.
	RGB(47, 79, 79), // DarkSlateGray.
	RGB(0, 206, 209), // DarkTurquoise.
	RGB(148, 0, 211), // DarkViolet.
	RGB(255, 20, 147), // DeepPink.
	RGB(0, 191, 255), // DeepSkyBlue.
	RGB(105, 105, 105), // DimGray.
	RGB(30, 144, 255), // DodgerBlue.
	RGB(178, 34, 34), // FireBrick.
	RGB(255, 250, 240), // FloralWhite.
	RGB(34, 139, 34), // ForestGreen.
	RGB(255, 0, 255), // Fuchsia.
	RGB(220, 220, 220), // Gainsboro.
	RGB(248, 248, 255), // GhostWhite.
	RGB(255, 215, 0), // Gold.
	RGB(218, 165, 32), // GoldenRod.
	RGB(128, 128, 128), // Gray.
	RGB(0, 128, 0), // Green.
	RGB(173, 255, 47), // GreenYellow.
	RGB(240, 255, 240), // HoneyDew.
	RGB(255, 105, 180), // HotPink.
	RGB(205, 92, 92), // IndianRed.
	RGB(75, 0, 130), // Indigo.
	RGB(255, 255, 240), // Ivory.
	RGB(240, 230, 140), // Khaki.
	RGB(230, 230, 250), // Lavender.
	RGB(255, 240, 245), // LavenderBlush.
	RGB(124, 252, 0), // LawnGreen.
	RGB(255, 250, 205), // LemonChiffon.
	RGB(173, 216, 230), // LightBlue.
	RGB(240, 128, 128), // LightCoral.
	RGB(224, 255, 255), // LightCyan.
	RGB(250, 250, 210), // LightGoldenRodYellow.
	RGB(211, 211, 211), // LightGray.
	RGB(144, 238, 144), // LightGreen.
	RGB(255, 182, 193), // LightPink.
	RGB(255, 160, 122), // LightSalmon.
	RGB(32, 178, 170), // LightSeaGreen.
	RGB(135, 206, 250), // LightSkyBlue.
	RGB(119, 136, 153), // LightSlateGray.
	RGB(176, 196, 222), // LightSteelBlue.
	RGB(255, 255, 224), // LightYellow.
	RGB(0, 255, 0), // Lime.
	RGB(50, 205, 50), // LimeGreen.
	RGB(250, 240, 230), // Linen.
	RGB(255, 0, 255), // Magenta.
	RGB(128, 0, 0), // Maroon.
	RGB(102, 205, 170), // MediumAquaMarine.
	RGB(0, 0, 205), // MediumBlue.
	RGB(186, 85, 211), // MediumOrchid.
	RGB(147, 112, 219), // MediumPurple.
	RGB(60, 179, 113), // MediumSeaGreen.
	RGB(123, 104, 238), // MediumSlateBlue.
	RGB(0, 250, 154), // MediumSpringGreen.
	RGB(72, 209, 204), // MediumTurquoise.
	RGB(199, 21, 133), // MediumVioletRed.
	RGB(25, 25, 112), // MidnightBlue.
	RGB(245, 255, 250), // MintCream.
	RGB(255, 228, 225), // MistyRose.
	RGB(255, 228, 181), // Moccasin.
	RGB(255, 222, 173), // NavajoWhite.
	RGB(0, 0, 128), // Navy.
	RGB(253, 245, 230), // OldLace.
	RGB(128, 128, 0), // Olive.
	RGB(107, 142, 35), // OliveDrab.
	RGB(255, 165, 0), // Orange.
	RGB(255, 69, 0), // OrangeRed.
	RGB(218, 112, 214), // Orchid.
	RGB(238, 232, 170), // PaleGoldenRod.
	RGB(152, 251, 152), // PaleGreen.
	RGB(175, 238, 238), // PaleTurquoise.
	RGB(219, 112, 147), // PaleVioletRed.
	RGB(255, 239, 213), // PapayaWhip.
	RGB(255, 218, 185), // PeachPuff.
	RGB(205, 133, 63), // Peru.
	RGB(255, 192, 203), // Pink.
	RGB(221, 160, 221), // Plum.
	RGB(176, 224, 230), // PowderBlue.
	RGB(128, 0, 128), // Purple.
	RGB(102, 51, 153), // RebeccaPurple.
	RGB(255, 0, 0), // Red.
	RGB(188, 143, 143), // RosyBrown.
	RGB(65, 105, 225), // RoyalBlue.
	RGB(139, 69, 19), // SaddleBrown.
	RGB(250, 128, 114), // Salmon.
	RGB(244, 164, 96), // SandyBrown.
	RGB(46, 139, 87), // SeaGreen.
	RGB(255, 245, 238), // SeaShell.
	RGB(160, 82, 45), // Sienna.
	RGB(192, 192, 192), // Silver.
	RGB(135, 206, 235), // SkyBlue.
	RGB(106, 90, 205), // SlateBlue.
	RGB(112, 128, 144), // SlateGray.
	RGB(255, 250, 250), // Snow.
	RGB(0, 255, 127), // SpringGreen.
	RGB(70, 130, 180), // SteelBlue.
	RGB(210, 180, 140), // Tan.
	RGB(0, 128, 128), // Teal.
	RGB(216, 191, 216), // Thistle.
	RGB(255, 99, 71), // Tomato.
	RGB(64, 224, 208), // Turquoise.
	RGB(238, 130, 238), // Violet.
	RGB(245, 222, 179), // Wheat.
	RGB(255, 255, 255), // White.
	RGB(245, 245, 245), // WhiteSmoke.
	RGB(255, 255, 0), // Yellow.
	RGB(154, 205, 50), // YellowGreen.
	RGB(0, 0, 0), // Prvious color.
	RGB(255, 255, 255) // Current color.
};

static UINT textAlignSates[] = {
	TA_TOP,
	TA_BOTTOM,
	TA_LEFT,
	TA_RIGHT,
	TA_CENTER,
	TA_TOP | TA_LEFT,
	TA_TOP | TA_RIGHT,
	TA_TOP | TA_CENTER,
	TA_BOTTOM | TA_LEFT,
	TA_BOTTOM | TA_RIGHT,
	TA_BOTTOM | TA_CENTER
};