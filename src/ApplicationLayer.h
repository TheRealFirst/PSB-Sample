#pragma once
#include <Engine.h>

namespace PSB
{
	class ApplicationLayer : public Layer
	{
	public:
		ApplicationLayer();
		~ApplicationLayer() override = default;

		virtual void OnUpdate(Timestep ts) override;
		virtual void OnEvent(Event& e) override;
	};
}