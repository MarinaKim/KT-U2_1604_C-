#include <iostream>
#include<string>
#include<ctime>
#include"Vector.h"

using namespace std;
int main()
{
	Vector v1(10);

	v1.push_pl(2,15);
	v1.print();
	v1.at(3) = 5;
	v1.print();
	system("pause");
	return 0;
}