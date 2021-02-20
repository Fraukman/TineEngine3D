#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

class Graphics
{

private:
	GLFWwindow* window;
	GLsizei wHeight;
	GLsizei wWidth;


public:
	Graphics();
	~Graphics();

	void Initialize();
	void Update();
	void Render();
	void Destroy();

	GLFWwindow* GetWindow()
	{
		return window;
	}



};