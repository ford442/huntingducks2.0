#include <iostream>
#include <SDL.h>
#include <exceptions/SDL_exception.h>
#include <ui/Engine.h>

int main(int argc, char* argv[]) {
	try {
		Engine::getEngine()->Init();
	}
	catch (SDL_exception& err) {
		std::cout << err.what() << std::endl;
	}

	return 0;
}