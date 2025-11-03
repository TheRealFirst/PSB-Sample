#include <Engine.h>

#include "ApplicationLayer.h"

namespace PSB
{
	class App : public Application
	{
	public:
		App() : Application() {
			PushLayer(new ApplicationLayer());
		}

		~App() = default;
	};

	Application* CreateApplication() {
		return new App();
	}
}