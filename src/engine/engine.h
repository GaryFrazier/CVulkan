#include "glfw3.h"

typedef struct {
	GLFWwindow* window;
	int width;
	int height;
} Viewport;

void initializeEngine(); 
Viewport createWindow(int width, int height, char* name);


