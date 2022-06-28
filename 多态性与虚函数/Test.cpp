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
	cout << "名字:" << name << endl;
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
	cout << "cpp成绩为:" << cpp
		<< " java成绩为:" << java << endl;
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
		cout <<"参与的项目是：" << project << "有论文" << endl;
	}
	else
	{
		cout<<"参与的项目是：" << project<< "无论文" << endl;
	}
}

