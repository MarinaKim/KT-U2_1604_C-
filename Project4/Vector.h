#pragma once
#include <string>
#include<iostream>
#include<iomanip>
using namespace std;

class Vector {
private:
	int cur_size;
	int buf_size;
	int *els;

public:
	//default constructor
	Vector() {
		cur_size = 0;
		buf_size = 0;
		els = nullptr;
	}

	/*Vector() {
		cur_size = 0;
		els = nullptr;
	}*/
	Vector(int size) {
		this->cur_size = size;
		this->buf_size = size;
		this->els = new int[buf_size];
		for (int i = 0;i < buf_size;i++)
			els[i] = 0;
	}

	//copy constructor
	Vector(const Vector &src) {
		this->cur_size = src.cur_size;
		this->buf_size = src.cur_size;
		this->els = new int[cur_size];
		for (int i = 0;i < cur_size;i++)
		{
			els[i] = src.els[i];
		}
	}

	//plus back
	void push_back(const int &e) {
			if (cur_size >= buf_size)
		{
			int *temp;// сразу удаляется по завершению условия
			buf_size *= 2;
			temp = new int[buf_size];
			for (int i = 0;i < cur_size;i++)
			{
				temp[i] = els[i];
			}
			delete[]els;
			els = temp;
		}
		els[cur_size++] = e;
	}

	void push_pl(int pos_size, const int &e) {
		if (cur_size >= buf_size)
		{
			int *temp;
			buf_size *= 2;
			temp = new int[buf_size];

			for (int i = 0;i < pos_size;i++)
			{
				temp[i] = els[i];
			}
			
			els[pos_size] = e;

			for (int i = pos_size; i < buf_size; i++)
			{
				temp[i] = els[i];
			}
			delete[]els;
			els = temp;
		}
		else
		{
			int *temp;
			temp = new int[buf_size];
			for (int i = 0;i < pos_size;i++)
			{
				temp[i] = els[i];
			}
			els[pos_size] = e;
			for (int i = pos_size; i < buf_size; i++)
			{
				temp[i] = els[i];
			}
			delete[]els;
			els = temp;
		}	
	}

	void pop_back() {
		if (cur_size > 0)
			cur_size--;
	}

	int& at(int pos) {
		return els[pos-1];
	}
	//destructor
	~Vector() {
		delete[]els;
		els = nullptr;
	}

	void print() {
		for (int i = 0;i < cur_size;i++)
			cout <<left<<setw(5)<< els[i]; // поле размером 5
		cout << endl;
	}
};