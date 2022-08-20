#pragma once

#include "Core.h"

namespace clum {
	class CLUM_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
		
	};
	Application* CreateApplication();
}

