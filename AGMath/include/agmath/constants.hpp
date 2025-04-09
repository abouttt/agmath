#pragma once

#include <numbers>
#include <limits>

namespace agm
{
	inline constexpr float EPSILON = 1e-5f;
	inline constexpr float SMALL_NUMBER = 1e-8f;
	inline constexpr float BIG_NUMBER = 1e+8f;

	inline constexpr float INF = std::numeric_limits<float>::infinity();
	inline constexpr float NEG_INF = -std::numeric_limits<float>::infinity();

	inline constexpr float PI = std::numbers::pi_v<float>;
	inline constexpr float TWO_PI = PI * 2.0f;
	inline constexpr float HALF_PI = PI / 2.0f;
	inline constexpr float INV_PI = std::numbers::inv_pi_v<float>;
	inline constexpr float INV_SQRT_PI = std::numbers::inv_sqrtpi_v<float>;

	inline constexpr float DEG2RAD = PI / 180.0f;
	inline constexpr float RAD2DEG = 180.0f / PI;

	inline constexpr float SQRT2 = std::numbers::sqrt2_v<float>;
	inline constexpr float SQRT3 = std::numbers::sqrt3_v<float>;
	inline constexpr float INV_SQRT2 = 1.0f / SQRT2;
	inline constexpr float INV_SQRT3 = std::numbers::inv_sqrt3_v<float>;

	inline constexpr float LOG2E = std::numbers::log2e_v<float>;
	inline constexpr float LOG10E = std::numbers::log10e_v<float>;
	inline constexpr float LN2 = std::numbers::ln2_v<float>;
	inline constexpr float LN10 = std::numbers::ln10_v<float>;

	inline constexpr float E = std::numbers::e_v<float>;
	inline constexpr float EGAMMA = std::numbers::egamma_v<float>;
	inline constexpr float GOLDEN_RATIO = std::numbers::phi_v<float>;
}
