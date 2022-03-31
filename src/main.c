#include <stdio.h>
#include <stdlib.h>
#include "engine/engine.h"
#include "glfw3.h"

int main() {
	// Initialization
	initializeEngine();
	
	Viewport viewport = createWindow(640, 480, "test window");		
	while (!glfwWindowShouldClose(viewport.window))
	{
		glfwPollEvents();
	}
}

