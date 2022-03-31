#include <stdio.h>
#include <stdlib.h>
#include "engine/engine.h"

int main() {
	// Initialization
	initializeEngine();
	
	GLFWwindow* window = createWindow(640, 480, "test window");		
	getchar();
	glfwTerminate();
}

