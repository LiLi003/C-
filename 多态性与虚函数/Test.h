#include<iostream>
#include<string>
using namespace std;

class Info  //��Ϣ
{
//����2�����麯��
public:
	virtual void Prompt()=0;  // ��ʾ�����Ϣ
	virtual void Show()=0;    //������еı���
};

class Person:public Info  //��
{
public:
	Person(string name);
	virtual void Prompt();
	virtual void Show();
private:
	string name;
};

class Undergraduate:public Person //������
{
public:
	Undergraduate(string name,double cpp,double java);
	virtual void Prompt();
	virtual void Show();
//����2����Ա����c++�ɼ���java�ɼ�
private:
	double cpp;
	double java;
};

class Postgraduate:public Person  //�о���
{
public:
	Postgraduate(string name,string project,bool hasPaper);
	virtual void Prompt();
	virtual void Show();
private:
	string project;  //��Ŀ
	bool hasPaper;  //�Ƿ񷢱�����
};