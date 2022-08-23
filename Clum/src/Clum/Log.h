#pragma once

#include<memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace clum {
	class CLUM_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger;}
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}
//Core
#define CLM_CORE_TRACE(...) clum::Log::GetCoreLogger() -> trace(__VA_ARGS__)
#define CLM_CORE_INFO(...) clum::Log::GetCoreLogger() -> info(__VA_ARGS__)
#define CLM_CORE_ERROR(...) clum::Log::GetCoreLogger() -> error(__VA_ARGS__)
#define CLM_CORE_WARN(...) clum::Log::GetCoreLogger() -> warn(__VA_ARGS__)
#define CLM_CORE_FATAL_ERROR(...) clum::Log::GetCoreLogger() -> critical(__VA_ARGS__)
//Client
#define CLM_TRACE(...) clum::Log::GetClientLogger() -> trace(__VA_ARGS__)
#define CLM_INFO(...) clum::Log::GetClientLogger() -> info(__VA_ARGS__)
#define CLM_ERROR(...) clum::Log::GetClientLogger() -> error(__VA_ARGS__)
#define CLM_WARN(...) clum::Log::GetClientLogger() -> warn(__VA_ARGS__)
#define CLM_FATAL_ERROR(...) clum::Log::GetClientLogger() -> critical(__VA_ARGS__)
//#ifndef HZ_BUILD_DLL
//	#define CLM_CORE_TRACE
//	#define CLM_CORE_INFO
//	#define CLM_CORE_ERROR
//	#define CLM_CORE_WARN
//	#define CLM_CORE_FATAL_ERROR
//#endif