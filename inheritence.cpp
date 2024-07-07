#include<iostream>
using namespace std;
class Vehicle
{
	private:
		
	int number_tyres;
	string name;
	int capacity;
	int milage;

	public:
		void calculatemilage()
		{
			cout<<"the milage is"<<milage;
		}
};
class Schoolbus: public Vehicle
{
	string school_name;
	int number_holidays;
	public:
		void printnameofschool()
		{
			cout<<"nameof school"<<name;
		}
	};

class Car: public Vehicle
{
	private:

	int numberofairbags;
	int ac_consumption;
}
int main()
{
Car a;
a.calculatemilage()	;
}
