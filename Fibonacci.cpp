#include<iostream>
#include<vector>
using namespace std;
/*
   ����һ�������Ҳ�̫�ᣬ�Ǿ���ķ���
   1.��ʵ�ڳ���ĵݹ鷽���У��ͱ���¼���������������漰��ʱ��
     �Ϳռ�Ļ�ת��
   2.���˳�������ʶ����Ȼ�����Ǻ��������ܹ�ȥ������
*/




//����һ	  �ݹ�
int FibonacciRe(int n)
{
	if (n==1||n==0)
	{
		return n;
	}
	else if (n<0)
	{
		return 0;
	}

	return FibonacciRe(n - 1) + FibonacciRe(n - 2);

}

//������ ѭ���ķ���
int FibonacciWhile(int n)
{

	int fontNUm = 0;
	int behindNum = 1;
	int pos = 1;
	int fibnum = 0;

	while (pos < n)
	{
		//fn = f(fn-1)+f(n-2)
		fibnum = fontNUm + behindNum;
		
		pos = pos + 1;
		

		cout << "fi " << fibnum << " fon " << fontNUm << " behi " << behindNum << " pos " << pos << endl;;
		
		fontNUm = behindNum;

		behindNum = fibnum;
		
		

	}
		
	return fibnum;
}


//����������¼����
//�ÿռ任ʱ��ķ�����
int FaboncciMemony(int n, vector<int> v)
{
	if (n==1||n==0)
	{
		 v[n] = n;
		 return v[n];
	}
	

	if (v[n]!=0)//����¼ģʽ�ľ��裬����Ҫ������ĵط�����֮ǰ������ͬ�ĵط�
	{
		return v[n];
	}


	int x = FaboncciMemony(n - 1, v);

	int y = FaboncciMemony(n - 2, v);

	v[n] = x + y;
	return v[n];





}



int main()
{

	vector<int> V(13,0);
	int fiNum = FaboncciMemony(12,V);

	cout << "this is " << fiNum << endl;

	return 0;
}
















