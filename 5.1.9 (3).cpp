#include<iostream>

using namespace std;

class AdHocSquare {
public:

	AdHocSquare(double side)
	{
		set_side(side);
	}

	void set_side(double side)
	{
		this->side = side;
	}

	double get_area()
	{
		return side * side;
	}
private:

	double side;
};


class LazySquare {
public:

	LazySquare(double side)
	{
		set_side(side);
	}

	void set_side(double side)
	{
		if (this->side != side && side >= 0) // если новое число стороны не равно тому что уже задано и не меньше нуля, то мы производим  пересчет, в ином случае не производим ни каких вычеслений 
		{
			this->side = side;

			this->area = side * side;
		}
	}

	double get_area()
	{
		return area;
	}

private:

	double side;
	double area;
	bool side_changed; // я написал код без использования этой переменной, но решил оставить её, так как она нам давалась по условию
};