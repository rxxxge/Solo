#pragma once

#ifdef SL_PLATFORM_WINDOWS

extern Solo::Application* Solo::CreateApplication();	//������ ������ ��������� �������

int main(int argc, char* argv[]) {
	
	printf("i'm alive!");
	auto app = Solo::CreateApplication();				//Solo::CreateApplication() �������� ������� return new Sandbox() ..\SandboxApp.cpp
	app->Run();
	delete app;

}

#endif // SL_PLATFORM_WINDOWS
