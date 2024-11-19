#include <cstdio>
#include <iostream>
#include "../include/ThirdParty/GLFW/glfw3.h"

//using namespace std;

int main(){
 	glfwInit();

		GLFWwindow* window = glfwCreateWindow(800, 600, "Nu sheeeef", NULL, NULL);
	if (window == NULL)
	{
 	   std::cout << "Failed to create GLFW window" << std::endl;
  	  glfwTerminate();
  	  return -1;
	}
	glfwMakeContextCurrent(window);

	std::cout << "GLFW window initialized!" << std::endl;
	getchar();
	//return 0;
}


//std::cout << "hello and props to alberto,bio,starkium,fish,heavymetalmixer and others!" << std::endl;