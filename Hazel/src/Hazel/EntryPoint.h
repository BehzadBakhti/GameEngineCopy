#pragma once
#ifdef HZ_PlATFORM_WINDOWS
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv ) {
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif