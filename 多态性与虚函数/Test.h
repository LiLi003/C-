#include<iostream>
#include<string>
using namespace std;

class Info  //信息
{
//定义2个纯虚函数
public:
	virtual void Prompt()=0;  // 提示类的信息
	virtual void Show()=0;    //输出所有的变量
};

class Person:public Info  //人
{
public:
	Person(string name);
	virtual void Prompt();
	virtual void Show();
private:
	string name;
};

class Undergraduate:public Person //本科生
{
public:
	Undergraduate(string name,double cpp,double java);
	virtual void Prompt();
	virtual void Show();
//定义2个成员变量c++成绩，java成绩
private:
	double cpp;
	double java;
};

class Postgraduate:public Person  //研究生
{
public:
	Postgraduate(string name,string project,bool hasPaper);
	virtual void Prompt();
	virtual void Show();
private:
	string project;  //项目
	bool hasPaper;  //是否发表论文
};