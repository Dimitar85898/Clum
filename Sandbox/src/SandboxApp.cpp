#include <clum.h>

class Sandbox : public clum::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

clum::Application* clum::CreateApplication() {
	return new Sandbox();
}