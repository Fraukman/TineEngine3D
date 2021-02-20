#include <iostream>
#include "Graphics/Graphics.h"


int main()
{
	Graphics* core = new Graphics();

	core->Initialize();

	while (!glfwWindowShouldClose(core->GetWindow())) {
		core->Update();
		core->Render();
	}
	core->Destroy();

	delete core;

	return 0;
}

