#pragma once

#include <memory>
#include "Core.h"
#include "spdlog\spdlog.h"

namespace Kiggins {
	class KIGGINS_API Log
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


//Core log macros
#define KG_CORE_TRACE(...) ::Kiggins::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define KG_CORE_INFO(...)  ::Kiggins::Log::GetCoreLogger()->info(__VA_ARGS__)
#define KG_CORE_WARN(...)  ::Kiggins::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define KG_CORE_ERROR(...) ::Kiggins::Log::GetCoreLogger()->error(__VA_ARGS__)
#define KG_CORE_FATAL(...) ::Kiggins::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macros
#define KG_TRACE(...) ::Kiggins::Log::GetClientLogger()->trace(__VA_ARGS__)
#define KG_INFO(...)  ::Kiggins::Log::GetClientLogger()->info(__VA_ARGS__)
#define KG_WARN(...)  ::Kiggins::Log::GetClientLogger()->warn(__VA_ARGS__)
#define KG_ERROR(...) ::Kiggins::Log::GetClientLogger()->error(__VA_ARGS__)
#define KG_FATAL(...) ::Kiggins::Log::GetClientLogger()->fatal(__VA_ARGS__)