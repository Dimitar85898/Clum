#include <clum.h>

class Sandbox : public clum::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

clum::Application* clum::CreateApplication() {
	CLM_INFO("This is the test sandbox");
	CLM_INFO("Whilst all of this is just testing");
	CLM_INFO("Some features will make it into the core engine");
	return new Sandbox();
}