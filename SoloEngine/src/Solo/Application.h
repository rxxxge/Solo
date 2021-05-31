#pragma once

#include "Core.h"

namespace Solo {

	class SOLO_API Application
	{
	public:					
		Application();				//����������� - ������������� �������� ������, ����� ����������
		virtual ~Application();		//��� ������ � �������������, ����������� ������ ���� ������������(virtual), ��� SandboxApp ����������� SoloEngine

		void Run();					//��������������� ���������� ������� Run      
	};

	Application* CreateApplication();

}

