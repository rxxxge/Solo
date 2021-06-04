#pragma once
#include "Log.h"


#ifdef SL_PLATFORM_WINDOWS

extern Solo::Application* Solo::CreateApplication();	//Делаем данный указатель внешним

int main(int argc, char* argv[]) {
	
	Solo::Log::Init();

	SL_CORE_TRACE("Engine's working...");
	SL_CORE_ERROR("Error test");

	SL_INFO("App is working");
	SL_WARN("i'm so bad")
	
	auto app = Solo::CreateApplication();				//Solo::CreateApplication() вызывает функцию return new Sandbox() ..\SandboxApp.cpp
	app->Run();
	delete app;

}

#endif // SL_PLATFORM_WINDOWS
