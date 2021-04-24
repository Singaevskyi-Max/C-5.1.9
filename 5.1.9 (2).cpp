#include<iostream>
#include<string>

using namespace std;

class Square
{

public:  

	Square() :side(1) {};
	
	Square(double side);

	void Set_side(double side);

	void print(Square* square);

private:
	double side;
	double area;
	  
};


Square::Square(double side)
{

	this->side = side;
	this->area = side * side;

}

void Square::Set_side(double side)
{
	if (side >= 0)
	{
		this->side = side;
		this->area = side * side;
	}
}

void Square::print(Square* square)
{
	cout << "Square: side=" << square->side << " area=" << square->area << endl;
}

int main()
{
	Square s(4);

	s.print(&s);  

	s.Set_side(2.0);  

	s.print(&s);

	s.Set_side(-33.0);

	s.print(&s);  

return 0;
}