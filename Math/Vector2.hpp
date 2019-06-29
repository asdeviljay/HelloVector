#pragma once

#include <string>

namespace cw {
	template <class T> 
	class Vector2
	{
	public:
		Vector2() {}
		Vector2(T t_x, T t_y) :x(t_x), y(t_y) {
			//this->x = t_x;
			//this->y = t_y;
		}
		~Vector2() {}

		Vector2 sum(const Vector2& t_v) {
			return Vector2(x + t_v.x, y + t_v.y);
		}
		Vector2 operator+ (const Vector2& t_v) {
			return Vector2(x + t_v.x, y + t_v.y);
		}
		void operator+= (const Vector2& t_v) {
			x += t_v.x;
			y += t_v.y;
		}

		Vector2 mul(const int& t_s) {
			return Vector2(x * t_s, y * t_s);
		}
		Vector2 operator* (const int& t_s) {
			return Vector2(x * t_s, y * t_s);
		}
		void operator*= (const int& t_s) {
			x *= t_s;
			y *= t_s;
		}

		T x;
		T y;
	};

	//Vector2 operator+ (const Vector2& t_v1, const Vector2& t_v2);

	template <class T> Vector2<T> operator* (const T& t_s, const Vector2<T>& t_v) {
		return Vector2<T>(t_s * t_v.x, t_s * t_v.y);
	}

	typedef Vector2<int> Vector2i;
	typedef Vector2<float> Vector2f;
	typedef Vector2<double> Vector2d;
	//typedef Vector2<std::string> Vector2s;
}

/*int getX() const;
int getY() const;
void setX(const int& t_x);
void setY(const int& t_y);

	private:*/