#pragma once

#ifdef SL_PLATFORM_WINDOWS						//���� ���������� ��������� Windows
	#ifdef SL_BUILD_DLL							//�������� ��������, ���������� �� ���������� dll �����(����� ���� ��������, �� ��� �������)
		#define SOLO_API __declspec(dllexport)	//����� ������������ ��� � ����������� ���������� SandboxApp
	#else
		#define SOLO_API __declspec(dllimport)	//�����, ����������� ��� �� "�������������" ����������(SoloEngine)
	#endif // SOLO_BUILD_DLL

#endif // SL_PLATFORM_WINDOWS

