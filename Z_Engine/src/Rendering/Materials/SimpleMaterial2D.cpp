#include "SimpleMaterial2D.h"

namespace Z_Engine::Rendering::Materials {
	
	SimpleMaterial2D::SimpleMaterial2D()
		:IMaterial(), m_texture_tint_color(glm::vec4(1.0f)), m_texture_tiling_factor(1)
	{
	}

	void SimpleMaterial2D::UpdateUniforms(int texture_id)
	{	
		m_texture->Bind(texture_id);
	}
} 
