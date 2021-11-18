#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Circle
{
public:
	Circle(double radius) {
		this->radius = radius;
	}
	double getRadius() {
		return radius;
	}
	double area() {
		return 3.14 * this->radius * this->radius;
	}
	string toString() {
		char precise[100];
		sprintf_s(precise, "%.2lf", area());
		string s = "[" + string(precise) + "]";
		return s;
	}

private:
	double radius;
};

class Rectangle
{
public:
	Rectangle(double width, double height) {
		this->width = width;
		this->height = height;
	}
	double getHeight() {
		return height;
	}
	double getWidth() {
		return width;
	}
	double area() {
		return this->height * this->width;
	}
	string toString() {
		char precise[100];
		sprintf_s(precise, "%.2lf", area());
		string s = "[" + string(precise) + "]";
		return s;
	}

private:
	double height;
	double width;
};

class Triangle
{
public:
	Triangle(double base, double height) {
		this->base = base;
		this->height = height;
	}
	double getHeight() {
		return height;
	}
	double getBase() {
		return base;
	}
	double area() {
		return 0.5 * this->base * this->height;
	}
	string toString() {
		char precise[100];
		sprintf_s(precise, "%.2lf", area());
		string s = "[" + string(precise) + "]";
		return s;
	}

private:
	double height;
	double base;
};

int main() {

	//Defining and Printing Circle objects
	Circle c1(4);
	double ac1 = c1.area();
	cout << c1.toString() << endl;
	Circle c2(5);
	double ac2 = c2.area();
	cout << c2.toString() << endl;

	//Defining and Printing Rectangle objects
	Rectangle r1(4, 5);
	double ar1 = r1.area();
	cout << r1.toString() << endl;
	Rectangle r2(5, 6);
	double ar2 = r2.area();
	cout << r2.toString() << endl;

	//Defining and Printing Triangle objects
	Triangle t1(4, 5);
	double at1 = t1.area();
	cout << t1.toString() << endl;
	Triangle t2(5, 6);
	double at2 = t2.area();
	cout << t2.toString() << endl;

	//Printing total shapewise areas with given precision to the values
	cout << endl << "Total Triangle Area: " << setprecision(4) << (at1 + at2) << endl;
	cout << endl << "Total Circle Area: " << setprecision(4) << (ac1 + ac2) << endl;
	cout << endl << "Total Rectangle Area: " << setprecision(4) << (ar1 + ar2) << endl;
}