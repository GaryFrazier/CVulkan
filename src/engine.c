#include <stdio.h>
#include <stdlib.h>
#include "glfw3.h"
#include "engine/engine.h"

void glfwErrorCallback(int error, const char* description) {
	fprintf(stderr, "Error code %d: %s\n", error, description);
}

void glfwCloseCallback(GLFWwindow* window) {
	glfwDestroyWindow(window);
}

void glfwFramebufferSizeCallback(GLFWwindow* window, int width, int height) {
	glfwGetFramebufferSize(window, &width, &height);
	glViewport(0, 0, width, height);
}

void initializeEngine() {
	if (!glfwInit()) {
		printf("glfw initialization error\n");
		getchar();
		exit(0);
	}	
	glfwSetErrorCallback(glfwErrorCallback);
	printf("glfw initialized\n");
}

Viewport createWindow(int width, int height, char* name) {
	// init window
	GLFWwindow* window = glfwCreateWindow(width, height, name, NULL, NULL);
	if (!window) {
		printf("glfw window initialization error\n");
		getchar();
		exit(0);
	}
	
	// create viewport and set window resize callbacks
	Viewport viewport;
	viewport.window = window;
	viewport.width = width;
	viewport.height = height;

	
	glfwGetFramebufferSize(window, &viewport.width, &viewport.height);
	glViewport(0, 0, viewport.width, viewport.height);
	
	glfwSetFramebufferSizeCallback(window, glfwFramebufferSizeCallback);
	// create context
	glfwMakeContextCurrent(window);
	glfwSetWindowCloseCallback(window, glfwCloseCallback);
	return viewport;
}

