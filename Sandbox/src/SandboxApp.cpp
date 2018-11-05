
#include <Kiggins.h>

class Sandbox : public Kiggins::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Kiggins::Application* Kiggins::CreateApplication()
{
	return new Sandbox();
}