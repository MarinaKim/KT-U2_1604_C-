#include <iostream>
#include<string>
#include<ctime>
#include<fstream> // библиотека работы с файлами
#include"Vector.h"
#include "Point.h"
#include"Rectangle.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int k;
	cout << "Enter tasks number:";
	cin >> k;

	switch (k) {
		//vector
	case 1: {
		Vector v1(10);

		v1.push_pl(2, 15);
		v1.print();
		v1.at(3) = 5;
		v1.print();

		system("pause");
	} break;

		//point
	case 2: {
		ifstream in;
		ofstream out;
		out.open("write.txt", ios::out); // для вывода, файл если создан, то перезаписывается
		/*out.open("write.txt", ios::app); //если файл существет, пишется дальше*/

		in.open("read.txt");
		Point p[5];
		double x, y;
		int i = 0;
		if (!in) {
			cerr << "file open erros" << endl;
		}
		else
		{
			while (!in.eof()) {
				in >> x >> y;
				p[i++].setXY(x, y);
			}
		}
		for (int k = 0;k < i;k++) {
			cout << p[k].getX() << "\t" << p[k].getY() << endl;
			out << p[k].getX()<< "\t" << p[k].getY() << endl;			
		}
		out.close();
		system("pause");
	} break;

	case 3: {
		ifstream in;
		ofstream out;
		out.open("write.txt", ios::out); // для вывода, файл если создан, то перезаписывается
										 /*out.open("write.txt", ios::app); //если файл существет, пишется дальше*/

		in.open("read.txt");
		Rectangle p[4];
		double xa, ya,xb,yb,xc,yc,xd,yd;
		int i = 0;
		if (!in) {
			cerr << "file open erros" << endl;
		}
		else
		{
			while (!in.eof()) {
				in >> xa >> ya >> xb >> yb >> xc >> yc >> xd >> yd;
				Rectangle R(xa, ya, xb, yb, xc, yc, xd, yd);
				p[i++] = R;
			}
		}
		for (int k = 0;k < i;k++) {
			out << p[k].getXA() << "\t" << p[k].getYA() << "\t" << p[k].getXB() << "\t" << p[k].getYB() << "\t" <<
				p[k].getXC() << "\t" << p[k].getYC() << "\t" << p[k].getXD() << "\t" << p[k].getYD()<< endl;
		}
		out.close();
		system("pause");
	}break;
		//сдвиг по оси
	case 4: {
		ifstream in;
		ofstream out;
		out.open("write.txt", ios::out); // для вывода, файл если создан, то перезаписывается
										 /*out.open("write.txt", ios::app); //если файл существет, пишется дальше*/
		in.open("read.txt");
		Rectangle *p;
		p = new Rectangle[4];
		double xa, ya, xb, yb, xc, yc, xd, yd;
		int i = 0;

		if (!in) {
			cerr << "file open erros" << endl;}
		else
		{
			while (!in.eof()) {
				in >> xa >> ya >> xb >> yb >> xc >> yc >> xd >> yd;
				Rectangle R(xa, ya, xb, yb, xc, yc, xd, yd);
				p[i++] = R;
			}
		}
		for (int k = 0;k < i;k++) {
			p[k].move('x', 5);
			out << p[k].getXA() << "\t" << p[k].getYA() << "\t" << p[k].getXB() << "\t" << p[k].getYB() << "\t" <<
				p[k].getXC() << "\t" << p[k].getYC() << "\t" << p[k].getXD() << "\t" << p[k].getYD() << endl;
		}
		out.close();
		system("pause");
	}break;
	case 5: {
		ifstream in;
		ofstream out;
		out.open("write.txt", ios::out); // для вывода, файл если создан, то перезаписывается
										 /*out.open("write.txt", ios::app); //если файл существет, пишется дальше*/
		in.open("Read1.txt");
		Rectangle *p;
		p = new Rectangle[4];
		double xa, ya, xb, yb, xc, yc, xd, yd;
		double xCenter, yCenter, sideA, sideB;
		int i = 0;

		if (!in) {
			cerr << "file open erros" << endl;
		}
		else
		{
			while (!in.eof()) {
				in >> xCenter >> yCenter >> sideA>> sideB;
				Rectangle R(xCenter, yCenter, sideA, sideB); //записывает в буфферную переменную
				p[i++] = R; // записывает в массив
			}
			
		}
		/*for (int k = 0;k < i;k++) {
			p[k].resize(2, 5);*/
		p[0].resize(2, 5);
		out << p[k].getXA() << "\t" << p[k].getYA() << "\t" << p[k].getXB() << "\t" << p[k].getYB() << "\t" <<
			p[k].getXC() << "\t" << p[k].getYC() << "\t" << p[k].getXD() << "\t" << p[k].getYD() << endl;
	/*}*/
		out.close();
		system("pause");
	}break;

		case 6:{
			ifstream in;
			ofstream out;
			out.open("write.txt", ios::out); // для вывода, файл если создан, то перезаписывается
											 /*out.open("write.txt", ios::app); //если файл существет, пишется дальше*/
			in.open("Read1.txt");
			Rectangle *p;
			p = new Rectangle[4];
			double xa, ya, xb, yb, xc, yc, xd, yd;
			double xCenter, yCenter, sideA, sideB;
			int i = 0;

			if (!in) {
				cerr << "file open erros" << endl;
			}
			else
			{
				while (!in.eof()) {
					in >> xCenter >> yCenter >> sideA >> sideB;
					Rectangle R(xCenter, yCenter, sideA, sideB); //записывает в буфферную переменную
					p[i++] = R; // записывает в массив
				}}
			/*for (int k = 0;k < i;k++) {
			p[k].resize(2, 5);*/
			p[0].resize(2, 5);
			out << p[k].getXA() << "\t" << p[k].getYA() << "\t" << p[k].getXB() << "\t" << p[k].getYB() << "\t" <<
				p[k].getXC() << "\t" << p[k].getYC() << "\t" << p[k].getXD() << "\t" << p[k].getYD() << endl;
			/*}*/
			out.close();
			system("pause");
		}break;
		system("pause");
		return 0;
	}
}