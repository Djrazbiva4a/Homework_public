#include <iostream>

using namespace std;


struct Shape {

	int width;
	int radius;

	//const float PI = 3.14; 


	void setWidth(int w) {
		width = w;
	}
	void setRadius(int r) {
		radius = r;
	}
	Shape(int width, int radius) {

		this->width = width;
		this->radius = radius;

	}

};

struct Area : Shape {

	int getSquareArea() {
		return (width * width);
	}
	int getCircleArea() {
		return (3, 14 * radius ^ 2);
	}

	Area(int width,int radius) : Shape(width, radius) {


	}

	~Area() {
		cout << "Area of Square is: " << getSquareArea() << endl;
		cout << "Area of Circle is: " << getCircleArea() << endl;
		
	}

};

struct Volume : Area {

	int height;

	void setHeight(int h) {
		height = h;
	}

	int getCubeVolume() {
		return (getSquareArea() * radius);
	}

	int getCylinderVolume() {
		return (getCircleArea() * height);
	}

	Volume(int width, int radius, int height) : Area(width, radius) {

		this->height = height;
		this->width = width;
		this->radius = radius;
	};

	~Volume() {

		cout << "Volume of Cube is: " << getCubeVolume() << endl;
		cout << "Volume of Cylinder is  " << getCylinderVolume() << endl;
		cout << "Width: " << width << endl; 
		cout << "Radius: " << radius << endl;
		cout << "Height: " << height << endl; 
	};

};

int main() {

	
	Volume obj2(1,2,5);



}
