#include<iostream>

class A
{
	public :
		int a;
		void fa();
		void fb();
};

void	A::fa()
{
	std::cout << "function a" << std::endl;
}

void	A::fb()
{
	int	A::*ia = &A::a; //pointer to data member
	this->*ia = 12;
	void	(A::*ptr)() = &A::fa; //function to data member
	(this->*ptr)(); //call fa()
	std::cout << this->*ia << std::endl;
}

int main()
{
	A a;
	void	(A::*ptr)();
	ptr = &A::fb;
	(a.*ptr)();
	a.fb();
	return (0);
}
