// Fruit-abs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Fruit{

public:

	virtual string name() = 0;
	virtual string colour(){
	
		return 0;
	
	}

protected:
	string myCol;

};

class Apple : public Fruit
{
public:
	string name(){
		return "This is  Apple";

	}

	string colour(){
	
		myCol = " which is Green";
		return myCol;
	
	}
};

class Orange : public Fruit{
public:
	string name(){
	
		return "This is a Orange";
	}

	string colour(){
	
		myCol = " which is orange";
		return myCol;
	
	}
};

class Banana : public Fruit{
public:
	string name(){
	
		return "This is a Banana ";
	
	}

	string colour(){
	
		myCol = " which is yellow";
		return myCol;
	}

};


int main()
{

	Apple a;
	Orange o;
	Banana b;

	Fruit *ptr1 = &a;
	Fruit *ptr2 = &o;
	Fruit *ptr3 = &b; 

	ptr1->name();
	ptr1->colour();

	ptr2->name();
	ptr2->colour();

	ptr3->name();
	ptr3->colour();

	cout << a.name() << "" << a.colour() << endl;
	cout << o.name() << "" << o.colour() << endl;
	cout << b.name() << "" << b.colour() << endl;

	system("pause");
	return 0;

}

