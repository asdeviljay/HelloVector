// HelloVector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Math/Vector2.hpp"

#define CATCH_CONFIG_MAIN
#include "Thirdparty/catch2/catch.hpp"

using namespace cw;

TEST_CASE("It must passed", "[vector]") {
	REQUIRE(true);
}

TEST_CASE("It should initialize correctly", "[vector]") {
	Vector2i v(1, 1);
	REQUIRE(v.x == 1);
	REQUIRE(v.y == 1);
}

TEST_CASE("It can sum with a vector correctly", "[vector]") {
	Vector2i v1(1, 1);
	Vector2i v2(2, 2);
	auto result = v1.sum(v2);
	REQUIRE(result.x == 3);
	REQUIRE(result.y == 3);
}

TEST_CASE("It can sum with a vector with + correctly", "[vector]") {
	Vector2i v1(1, 1);
	Vector2i v2(2, 2);
	auto result = v1 + v2;
	REQUIRE(result.x == 3);
	REQUIRE(result.y == 3);
}

TEST_CASE("It can sum with a vector with += correctly", "[vector]") {
	Vector2i v1(1, 1);
	Vector2i v2(2, 2);
	v1 += v2;
	REQUIRE(v1.x == 3);
	REQUIRE(v1.y == 3);
}

TEST_CASE("It can multiply with a scalar correctly", "[vector]") {
	Vector2i v(1, 1);
	auto result = v.mul(3);
	REQUIRE(result.x == 3);
	REQUIRE(result.y == 3);
}

TEST_CASE("It can multiply with a scalar with * correctly", "[vector]") {
	Vector2i v(1, 1);
	auto result = v * 3;
	REQUIRE(result.x == 3);
	REQUIRE(result.y == 3);
}

TEST_CASE("It can multiply with a scalar with *= correctly", "[vector]") {
	Vector2i v(1, 1);
	v *= 3;
	REQUIRE(v.x == 3);
	REQUIRE(v.y == 3);
}

TEST_CASE("It can multiply with a scalar with * before vector correctly", "[vector]") {
	Vector2i v(1, 1);
	auto result = 5 * v;
	REQUIRE(result.x == 5);
	REQUIRE(result.y == 5);
}

/*int main()
{
	Vector2 v;
	v.x = 5;
	v.y = 10;
	std::cout << "(" << v.x << ", " << v.y << ")" << std::endl;

	Vector2 v1{ 1, 1 };
	Vector2 v2{ 2, 2 };
	//auto v3 = v1.sum(v2);
	auto v3 = v1 + v2;		//overloading +
	v1 += v2;				//overloading +=
	std::cout << (v3.x == 3) && (v3.y == 3);
	std::cout << "\t";
	std::cout << (v1.x == 3) && (v1.y == 3);

}*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
