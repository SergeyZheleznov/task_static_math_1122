// פאיכ DynamicMathPower.h
#pragma once
#ifdef MATHPOWERLIBRARYDYNAMIC_EXPORTS
#define MATHPOWERLIBRARY_API __declspec(dllexport)
#else
#define MATHPOWERLIBRARY_API __declspec(dllimport)
#endif
#include <iostream>

namespace DynamicLeaver
{
	class Leaver
	{
	public:
		MATHPOWERLIBRARY_API std::string get_leave(std::string name);
	};
}