#include <stdio.h>
#include <stdlib.h>
#include "glfw3.h"

void glfwErrorCallback(int error, const char* description) {
	fprintf(stderr, "Error code %d: %s\n", error, description);
}

int main() {
	// Initialization
	if (!glfwInit()) {
		printf("glfw initialization error\n");
		getchar();
		exit(0);
	}	
	glfwSetErrorCallback(glfwErrorCallback);
	printf("glfw initialized\n");

	GLFWwindow* window = glfwCreateWindow(640, 480, "OpenGLC Window", NULL, NULL);
	if (!window) {
		printf("glfw window initialization error\n");
		getchar();
		exit(0);
	}
	getchar();
	glfwTerminate();
}

