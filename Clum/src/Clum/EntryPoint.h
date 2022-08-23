#pragma once
#ifdef HZ_PLATFORM_WINDOWS
	extern clum::Application* clum::CreateApplication();
	int main(int argc, char** argv) {
		clum::Log::Init();
		CLM_CORE_INFO("Main App initialised!");
		
		auto app = clum::CreateApplication();
		app->Run();
		delete app;
	}
#endif
