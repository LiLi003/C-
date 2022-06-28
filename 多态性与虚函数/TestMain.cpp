#include"Test.h"
/*void EasyShow(Info* pInfo) //第二种方法
{
	pInfo->Prompt();
	pInfo->Show();
}*/

int main()
{
	Person per("Lily");
	Undergraduate und("Lucy", 99, 95);  //有多少个数据坑就填多少个数据“”里面的内容是string类型的
	Postgraduate pos("Alex", "遗传算法的应用,",true);
	/*EasyShow(&per);          //第二种成功运行...
	EasyShow(&und);
	EasyShow(&pos);*/
	/*Info* pInfo = &per;    //第一种成功运行
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
