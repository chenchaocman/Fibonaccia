#include<iostream>
#include<vector>
using namespace std;
/*
   还有一个方法我不太会，是矩阵的方法
   1.其实在常规的递归方法中，和备忘录方法方法。他们涉及到时间
     和空间的互转。
   2.有了初步的认识，虽然还不是很熟练的能够去分析它
*/




//方法一	  递归
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

//方法二 循环的方法
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


//方法三备忘录方法
//拿空间换时间的方法，
int FaboncciMemony(int n, vector<int> v)
{
	if (n==1||n==0)
	{
		 v[n] = n;
		 return v[n];
	}
	

	if (v[n]!=0)//备忘录模式的精髓，不需要复计算的地方，与之前方法不同的地方
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
















