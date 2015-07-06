#include "ZedStack.h"
using namespace ZedStack;

int main() {
	SCREEN screen(500, 500);
	GRID grid(8, 8, 30, 50);

	grid.load();
	screen.render();
	waitFor(2, SS);

	grid.renderTile(45, RED);
	text(10, 10, "Sample test");
	screen.render();
	waitFor(2, SS);

	grid.clear();
	screen.render();
	waitFor(2, SS);

	grid.clearAll();
	screen.render();

	return 0;
}
