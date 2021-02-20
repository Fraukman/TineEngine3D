#include "Graphics.h"

Graphics::Graphics():window(nullptr),wWidth(800) ,wHeight(600){}

Graphics::~Graphics(){}

void Graphics::Initialize() {

	if (!glfwInit()) {

		std::cerr << "GLFW initialization Failed" << std::endl;
		return;
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

	window = glfwCreateWindow(wWidth, wHeight, "Tine Engine", nullptr, nullptr);
	if (window == NULL) {
		std::cerr << "Failed to create GLFW Window" << std::endl;
		return;
	}

	glfwMakeContextCurrent(window);


	glewExperimental = GL_TRUE;
	if (glewInit() != GLEW_OK) {
		std::cerr << "GLEW initialization Failed" << std::endl;
		return;
	}

	glClearColor(0.23f, 0.38f, 0.47f, 1.0f);

	glViewport(0, 0, wWidth, wHeight);
	glEnable(GL_DEPTH_TEST);
}

void Graphics::Update(){}

void Graphics::Render() 
{
		glfwPollEvents();

		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		
		glfwSwapBuffers(window);
		glfwPollEvents();

}

void Graphics::Destroy() 
{
	glfwTerminate();
}
