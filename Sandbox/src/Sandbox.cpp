#pragma once
#include <EntryPoint.h>
#include "Layers/ExampleLayer.h"

using namespace Sandbox::Layers;

namespace Sandbox {

	class Sandbox_One : public ZEngine::Engine {
	public:																																			  
		Sandbox_One() {
			PushLayer(new ExampleLayer());
		}
		
		~Sandbox_One() = default;
	};

}

namespace ZEngine {
	Engine* CreateEngine() { return new Sandbox::Sandbox_One(); }
}
