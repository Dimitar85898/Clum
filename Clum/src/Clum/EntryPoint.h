#pragma once
#ifdef HZ_PLATFORM_WINDOWS
	extern clum::Application* clum::CreateApplication();
	int main(int argc, char** argv) {
		auto app = clum::CreateApplication();
		app->Run();
		delete app;
	}
#endif
