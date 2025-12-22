#include "ApplicationLayer.h"

namespace PSB
{
	ApplicationLayer::ApplicationLayer() : Layer("App"){}

	void ApplicationLayer::OnUpdate(Timestep ts)
	{
	}

	void ApplicationLayer::OnEvent(Event& e)
	{
		Application::Get().GetContext()->OnEvent(e);
	}
}