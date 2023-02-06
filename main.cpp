#include "Circle.h"
#include "Rectangle.h"

int main()
{

    Rectangle* rectangle = new Rectangle;
    Circle* circle = new Circle;

    delete rectangle;
    delete circle;

	return 0;
}