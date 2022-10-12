#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person
{
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/


//Possible Getters & Setters

/*


public:
	void SetAge(int age)
	{
		_age = age;
	}


	int GetAge()
	{
		return _age;
	}

public:
	void SetName(string name)
	{
		_name = name;
	}

	string GetName()
	{
		return _name;
	}

public:
	void SetSkill(string skill)
	{
		_skill = skill;
	}

	string GetSkill()
	{
		return _skill;
	}
public:
	void SetEyeCol(char eyeCol) 
	{
		_eyeCol = eyeCol;
	}
	char GetEyeCol()
	{
		return _eyeCol;
	}
public:
	void SetFootSize(float footSize)
	{
		_footSize = footSize;
	}
	float GetFootSize()
	{
		return _footSize;
	}
	
*/

//Constructor 

	Person(int age, std::string name, std::string skill, char eyeCol, float footSize)
	{

	_age = age;
	_name = name;
	_skill = skill;
	_eyeCol = eyeCol;
	_footSize = footSize;

	std::cout << _age << "\t" << _name << "\t" << _skill << "\t" << _eyeCol;

	}

	/*void Print() {
		cout << _age << "\t";
		cout << _name << "\t";
		cout << _skill << "\t";
		cout << _eyeCol << "\t";
		cout << _footSize << "\t";
	}*/

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
private:

//Variables

	int _age;
	std::string _name;
	std::string _skill;
	char _eyeCol;
	float _footSize;


};

