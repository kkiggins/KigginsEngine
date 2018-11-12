#pragma once

#ifdef KG_PLATFORM_WINDOWS

static const float ENGINE_VERSION = 0.01;

extern Kiggins::Application* Kiggins::CreateApplication();

int main(int argc, char** argv)
{
	Kiggins::Log::Init();
	KG_CORE_WARN("Initialized log!");
	KG_INFO("Hello!");


	KG_CORE_INFO("Kiggins Engine v{0}\n", ENGINE_VERSION);
	auto app = Kiggins::CreateApplication();
	app->Run();
	delete app;
}

#endif