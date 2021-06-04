#pragma once
#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"


namespace Solo {

	class SOLO_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}
	

#define SL_CORE_TRACE(...) ::Solo::Log::GetCoreLogger()->trace(__VA_ARGS__);
#define SL_CORE_INFO(...)  ::Solo::Log::GetCoreLogger()->info(__VA_ARGS__);
#define SL_CORE_WARN(...)  ::Solo::Log::GetCoreLogger()->warn(__VA_ARGS__);
#define SL_CORE_ERROR(...) ::Solo::Log::GetCoreLogger()->error(__VA_ARGS__);
#define SL_CORE_FATAL(...) ::Solo::Log::GetCoreLogger()->fatal(__VA_ARGS__);

#define SL_TRACE(...)      ::Solo::Log::GetCoreLogger()->trace(__VA_ARGS__);
#define SL_INFO(...)       ::Solo::Log::GetCoreLogger()->info(__VA_ARGS__);
#define SL_WARN(...)       ::Solo::Log::GetCoreLogger()->warn(__VA_ARGS__);
#define SL_ERROR(...)      ::Solo::Log::GetCoreLogger()->error(__VA_ARGS__);
#define SL_FATAL(...)      ::Solo::Log::GetCoreLogger()->fatal(__VA_ARGS__);