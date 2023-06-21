#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class GeometricForms {
public:
	void choose() {
		int counter = 0;
		while (true) {

			if (counter == 5) {
				cout << "thanks!try again another time\n";
				break;
			}
			try {
				string number;
				cout << "Choose the areas forms or circumference\n";
				cout << "1-Areas Forms\n" << "2-Cricumferences Forms\n" << "3-Exit\n";
				cin >> number;
				int num;
				if (num = stoi(number) == 1)areasForms();
				else if (num = stoi(number) == 2)circumsForms();
				else if (num = stoi(number) == 3) {
					cout << "Exit of programming \n";		exit(1);
				}
				else
					throw "out of range\n";
				break;
			}
			catch (...) {
				counter++;
				cout << "Error!the operation you entered is not valid-please try again\n";
			}
		}
	}

	void circumsForms() {
		int count = 0;
		while (true) {
			if (count == 5) {
				cout << "thanks!try again another time\n";
				exit(1);
			}
			try {
				string number;
				cout << "Choose the Geometric form to calculate the ciccumference\n";
				cout << "1-Triangle\n" << "2-Square\n" << "3-Circle\n" << "4-Rectangle\n";
				cin >> number;
				int n;
				if (n = stoi(number) == 1)circumTriangle();
				else if (n = stoi(number) == 2)circumSquare();
				else if (n = stoi(number) == 3)circumCircle();
				else if (stoi(number) == 4)circumRectangle();
				else
					throw "out of range\n";
				break;
			}
			catch (...) {
				cout << "Error!the operation you entered is not valid-please try again\n";
			}
			count++;
		}
	}
	void areasForms() {
		int c = 0;
		while (true) {
			if (c == 5) {
				cout << "thanks!try again another time\n";
				exit(1);
			}
			try {
				string number;
				cout << "Choose the Geometric form to calculate the area\n";
				cout << "1-Triangle\n" << "2-Square\n" << "3-Circle\n" << "4-Rectangle\n";
				cin >> number;
				int n;
				if (n = stoi(number) == 1)areaTriangle();
				else if (n = stoi(number) == 2)areaSquare();
				else if (n = stoi(number) == 3)areaCircle();
				else if (n = stoi(number) == 4)areaRectangle();
				else
					throw "out of range\n";
				break;
			}
			catch (...) {
				cout << "Error!the operation you entered is not valid-please try again\n";
			}
			c++;
		}
	}
	void circumTriangle() {
		while (true) {
			try {
				int side1, side2, side3;
				cout << "Enter the 3 sides of the Triangle:"; cin >> side1 >> side2 >> side3;
				if (side1 <= 0 || side2 <= 0 || side3 <= 0)throw "out of range\n";
				cout << "The circumference of Triangle=" << side1 + side2 + side3 << "cm" << endl;
				choose();
				break;
			}
			catch (...) {
				cout << "Error!please try again \n" << "Because there is no negative or zero in one of the sides\n";
			}
		}
	}
	void areaTriangle() {
		while (true) {
			try {
				double basic, height;
				cout << "Enter the basic:"; cin >> basic;
				cout << "Enter the height:"; cin >> height;
				if (basic <= 0 || height <= 0)throw "out of range\n";
				cout << "The area of Triangle=" << 0.5 * basic * height << endl;
				choose();
				break;
			}
			catch (...) {
				cout << "Error!please try again \n" << "Because there is no negative or zero in basic or height\n";
			}
		}
	}

	void circumSquare() {
		while (true) {
			try {
				double side;
				cout << "Enter side of the square:";
				cin >> side;
				if (side <= 0)throw side;
				cout << "circumference of the Square=" << side * 4 << "cm" << endl;
				choose();
				break;
			}
			catch (double s) {
				cout << "Error!the side is out of range\n";
			}
		}
	}
	void areaSquare() {
		while (true) {
			try {
				double side;
				cout << "Enter side of the square:";
				cin >> side;
				if (side <= 0)throw side;
				cout << "Area of the Square=" << side * side << "cm^2" << endl;
				choose();
				break;
			}
			catch (double s) { cout << "Error!the side is out of range\n"; }
		}
	}
	void circumCircle() {
		while (true) {
			try {
				double radius;
				cout << "Enter radius of the circle:";
				cin >> radius;
				if (radius <= 0)throw radius;
				cout << "Circumference of the circle=" << 2 * 3.14 * radius << " cm" << endl;
				choose();
				break;
			}
			catch (double r) { cout << "Error! the radius :" << r << "\tis out of range" << endl; }
		}
	}
	void areaCircle() {
		while (true) {
			try {
				double radius;
				cout << "Enter radius of the circle:";
				cin >> radius;
				if (radius <= 0)throw radius;
				cout << "area of the circle=" << 3.14 * pow(radius, 2) << " cm^2" << endl;
				choose();
				break;
			}
			catch (double r) { cout << "Error! the radius :" << r << "\tis out of range" << endl; }
		}
	}
	void circumRectangle() {
		while (true) {
			try {
				double length, width;
				cout << "Enter the dimensions of the Rectangle\n";
				cout << "Length:";
				cin >> length;
				cout << "Width:";
				cin >> width;
				if (length <= 0 || width <= 0)throw "out of range\n";
				cout << "The circumference of Rectangle= " << 2 * (length + width) << " cm" << endl;
				choose();
				break;
			}
			catch (...) {
				cout << "Error! please try again" << "\n Because there is no negative or zero dimension\n";
			}
		}
	}
	void areaRectangle() {
		while (true) {
			try {
				double length, width;
				cout << "please enter the dimensions of the Rectangle\n";
				cout << "Length:";
				cin >> length;
				cout << "width:";
				cin >> width;
				if (length <= 0 || width <= 0)throw "out of range\n";
				cout << "The area of Rectangle=" << width * length << " cm^2" << endl;
				choose();
				break;
			}
			catch (...)
			{
				cout << "Error! please try again" << "\n Because there is no negative or zero dimension\n";
			}
		}
	}
};
int main() {
	GeometricForms obj;  obj.choose();
	return 0;
}