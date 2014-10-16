/*
 * People.h
 *
 *  Created on: 2014. 9. 23.
 *      Author: starlight
 */

#ifndef PEOPLE_H_
#define PEOPLE_H_

class People{
private:
	int age;
	char* name;
	double height;

public:
	People();
	People(int _age, char* _name, double _height);
	void set_People(int _age, char* _name, double _height);
	void show_People();

};

class Speaker{
private:
	char* word;
public:
	Speaker(char* _word);
	void say();
};

#endif /* PEOPLE_H_ */
