//============================================================================
// Name        : GItTesting.cpp
// Author      : Vikas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class Person
{
protected:
	string name;
	float age;
	enum gender{MALE, FEMALE};
	gender g;

public:
//	Person(string name, float age)
//	{
//		this->name=name;
//		this->age=age;
//	}

	//getters and setters
	float getAge() const
	{
		return age;
	}

	void setAge(float age)
	{
		this->age = age;
	}

	gender getG() const
	{
		return g;
	}

	void setG(gender g)
	{
		this->g = g;
	}

	const string& getName() const
	{
		return name;
	}

	void setName(const string& name)
	{
		this->name = name;
	}
	 virtual void diplayPersonDetails() = 0;
};

class Man : public Person
{
public:
		Man(string name, float age)
		{
			setName(name);
			setAge(age);
			setG(MALE);
		}

		void diplayPersonDetails()
		{
			cout<<"\nName : "<<getName()<<endl;
			cout<<"Age : "<<getAge()<<endl;
			if(getG()==0)
			{
				cout<<"Gender : "<<"Male"<<endl;
			}

		}
};

class Woman : public Person
{
public:
	Woman(string name, float age)
	{
		setName(name);
		setAge(age);
		setG(FEMALE);
	}

	void diplayPersonDetails()
	{
		cout<<"\nName : "<<getName()<<endl;
		cout<<"Age : "<<getAge()<<endl;
		if(getG()==1)
		{
			cout<<"Gender : "<<"Female"<<endl;
		}

	}
};

int main()
{
	Person *p = new Man("Krishna",28);
	p->diplayPersonDetails();

	Person *p1 = new Woman("Radha",25);
	p->diplayPersonDetails();
	p1->diplayPersonDetails();
	return 0;
}
