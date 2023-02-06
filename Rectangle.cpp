#include "Rectangle.h"
#include <stdio.h>

Rectangle::Rectangle()
{
	height = 20;
	width = 5;
	Size();
	Draw();
}

Rectangle::~Rectangle()
{
	 
}

void Rectangle::Size()
{
	product = width * height;
}

void Rectangle::Draw()
{
	printf("四角形面積%d\n", product);
}