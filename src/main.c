#include <stdio.h>
#include <stdlib.h>
#include "glfw3.h"

int main() {
	if (!glfwInit()) {
		printf("glfw initialization error\n");
		getchar();
		exit(0);
	}	

	printf("glfw initialized\n");
	getchar();
}

