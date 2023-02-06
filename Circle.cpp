#include "Circle.h"
#include <stdio.h>

Circle::Circle()
{
	radius = 100;

	Size();

	Draw();
}

Circle::~Circle()
{
}

void Circle::Size()
{
	product = radius * 3.14;
}

void Circle::Draw()
{
	printf("円面積%f\n", product);
}