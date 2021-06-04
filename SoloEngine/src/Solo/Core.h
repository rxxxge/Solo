#pragma once

#ifdef SL_PLATFORM_WINDOWS						//Если определена платформа Windows
	#ifdef SL_BUILD_DLL							//Начинаем проверку, определена ли компиляция dll файла(очень тупо написано, но мне понятно)
		#define SOLO_API __declspec(dllexport)	//Тогда экспортируем его в наследуемое приложение SandboxApp
	#else
		#define SOLO_API __declspec(dllimport)	//Иначе, импортируем его из "родительского" приложения(SoloEngine)
	#endif // SOLO_BUILD_DLL

#endif // SL_PLATFORM_WINDOWS

