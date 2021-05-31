#pragma once

#include "Core.h"

namespace Solo {

	class SOLO_API Application
	{
	public:					
		Application();				//Конструктор - инициализация обьектов класса, далее деструктор
		virtual ~Application();		//При работе с наследованием, деструкторы должны быть виртуальными(virtual), тут SandboxApp наследуется SoloEngine

		void Run();					//Предварительное обьявление функции Run      
	};

	Application* CreateApplication();

}

