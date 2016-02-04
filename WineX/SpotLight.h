#pragma once

#include "BaseComponent.h"
#include "Light.h"

namespace WineX
{
	class SpotLight
		:public BaseComponent
		, public Light
	{
	private:
		Vector3 _direction;
		float	_attenuation[3];
		float	_phi;
		float	_theta;
		float	_falloff;

	public:
		SpotLight(const int index);
		virtual ~SpotLight();

		void Init() override;
		void Update() override;

		void SetDirection(Vector3 direction);
		void SetDirection(const float x, const float y, const float z);

		void SetAttenuation(const float atten0, const float atten1, const float atten2);

		void SetPhi(const float phi);
		void SetTheta(const float theta);
		void SetFalloff(const float falloff);

		const Vector3& GetDirection() { return _direction; }

		const float GetAtten0() { return _attenuation[0]; }
		const float GetAtten1() { return _attenuation[1]; }
		const float GetAtten2() { return _attenuation[2]; }

		const float GetPhi() { return _phi; }
		const float GetTheta() { return _theta; }
		const float GetFalloff() { return _falloff; }

	};
}