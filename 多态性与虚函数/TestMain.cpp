#include"Test.h"
/*void EasyShow(Info* pInfo) //�ڶ��ַ���
{
	pInfo->Prompt();
	pInfo->Show();
}*/

void Fun(Info& i)
{
	i.Show();
	i.Prompt();
}
int main()
{
	Person per("Lily");
	Undergraduate und("Lucy", 99, 95);  //�ж��ٸ����ݿӾ�����ٸ����ݡ��������������string���͵�
	Postgraduate pos("Alex", "�Ŵ��㷨��Ӧ��,",true);
	Fun(per);
	Fun(und);
	Fun(pos);
	/*EasyShow(&per);          //�ڶ��ֳɹ�����...
	EasyShow(&und);
	EasyShow(&pos);*/
	/*Info* pInfo = &per;    //��һ�ֳɹ�����
	pInfo->Prompt();
	pInfo->Show();
	pInfo = &und;
	pInfo->Prompt();
	pInfo->Show();
	pInfo = &pos;
	pInfo->Prompt();
	pInfo->Show();*/
	return 0;
}