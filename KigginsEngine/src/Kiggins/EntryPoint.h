#pragma once

#ifdef KG_PLATFORM_WINDOWS

extern Kiggins::Application* Kiggins::CreateApplication();

int main(int argc, char** argv)
{
	printf("Kiggins Engine v0.01\n");
	auto app = Kiggins::CreateApplication();
	app->Run();
	delete app;
}

#endif