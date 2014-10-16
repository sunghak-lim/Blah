/*
 * People.cpp
 *
 *  Created on: 2014. 9. 23.
 *      Author: starlight
 */

#include "People.h"
#include <iostream>
using namespace std;

	//Constructors
People::People(){
	cout << "== No inputs, Using default constructor" << endl;
	age = 27;
	name = "Lim";
	height = 180;
}
People::People(int _age, char* _name, double _height){
	cout << "Creating age: " << _age << " name:" << _name << " Height:" << _height << endl;
	age = _age;
	name = _name;
	height = _height;
}

void People::set_People(int _age, char* _name, double _height){
	cout << "Reset age: " << _age << " name:" << _name << " Height:" << _height << endl;
	age = _age;
	name = _name;
	height = _height;
}

void People::show_People(){
	cout << "Info age: " << age << " name:" << name << " Height:" << height << endl;
}

Speaker::Speaker(char* _word){
	word = _word;
}

void Speaker::say(){
	cout << word <<endl;
}
