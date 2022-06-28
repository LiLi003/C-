#include"Test.h"
Person::Person(string name) :name(name)
{

}

void Person::Prompt()
{
	cout << "Person:" << endl;
}

void Person::Show()
{
	cout << "����:" << name << endl;
}

Undergraduate::Undergraduate(string name,double cpp, double java):Person(name),cpp(cpp),java(java)
{
}

void Undergraduate::Prompt()
{
	cout << "Undergraduate:" << endl;
}

void Undergraduate::Show()
{
	Person::Show();
	cout << "cpp�ɼ�Ϊ:" << cpp
		<< " java�ɼ�Ϊ:" << java << endl;
}

Postgraduate::Postgraduate(string name, string project, bool hasPaper):
	Person(name), project(project), hasPaper(hasPaper)
{
}

void Postgraduate::Prompt()
{
	cout << "Postgraduate:" << endl;
}

void Postgraduate::Show()
{
	Person::Show();
	if (hasPaper)
	{
		cout <<"�������Ŀ�ǣ�" << project << "������" << endl;
	}
	else
	{
		cout<<"�������Ŀ�ǣ�" << project<< "������" << endl;
	}
}

