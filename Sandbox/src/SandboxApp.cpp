#include <Solo.h>


class Sandbox : public Solo::Application 
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}

};

Solo::Application* Solo::CreateApplication() {
	return new Sandbox();
}