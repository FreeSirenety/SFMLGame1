#ifdef SFML_STATIC
#pragma comment(lib, "glew.lib")
#pragma comment(lib, "freetype.lib")
#pragma comment(lib, "jpeg.lib")
#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "gdi32.lib")  
#endif // SFML_STATIC

#include "Engine.h"

int main()
{
	Engine *engine = new Engine();

	engine->Initialize();

	bool isRunning = engine->Run();

	while (isRunning)
	{
		isRunning = engine->Run();
	}

	return 0;
}