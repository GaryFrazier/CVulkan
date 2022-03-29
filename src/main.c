#include <stdio.h>
#include <stdlib.h>
#include "vulkan.h"

int main() {
	VkInstanceCreateInfo createInfo = {
		.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
		.pNext = NULL,
		.flags = 0,
		.pApplicationInfo = NULL
	};

	VkInstance vulkanInstance;
	
	printf("Initializing Vulkan\n");
	VkResult createInstanceResult = vkCreateInstance(&createInfo, NULL, &vulkanInstance);

	if (createInstanceResult != VK_SUCCESS) {
		printf("Vulkan initialization failed, code: %d\n", createInstanceResult);
		exit(createInstanceResult);
	}

	printf("Vulkan initialized\n");
}

