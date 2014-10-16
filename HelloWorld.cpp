/*
 * HelloWorld.cpp
 *
 *  Created on: 2014. 9. 23.
 *      Author: starlight
 */

#include <iostream>
#include "People.h"
using namespace std;


int main()
{
	cout << "Hello World" << endl;
	cout << "Welcome to c++ world" << endl;

	for(int i=0;i<5;i++){
		for(int j=0;j<i;j++)
			cout << "a";
		cout << endl;
	}

	//People p = People();
	//p.show_People();

	//People p2 = People(20,"Young Lim",160);
	//p2.show_People();
	//p2.set_People(10,"Younger Lim",120);
	//p2.show_People();

	//Speaker sp = Speaker("Hello");
	//sp.say();
	//sp.say();

	int k = 1000;
	int arr[10];

	cout << arr[100] << endl;

	return 0;
}


