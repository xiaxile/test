#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;
char a[100001],d[1000][100];
bool is_n(char *c)
{
	if(*c>='0'&&*c<='9')
		return true;
	else
		return false;
}
int main()
{
	bool inum=false;
	int z=0,p=0;
	gets(a);
	for(int i=0;i<strlen(a);++i)
		if(!is_n(a+i))
			*(a+i)=' ';
	for(int i=1;i<strlen(a);++i)
	{
		if(a[i]==' '&&inum==true)
		{
			for(int j=z;j<i;++j)
				d[p][j-z]=a[j];
			d[p][i-z]='\0';
			++p;
			inum=false;
		}
		if(a[i]!=' '&&inum==false)
		{
			inum=true;
			z=i;
		}
	}
	cout<<p<<endl;
	for(int i=0;i<p;++i)
		cout<<d[i]<<" ";
	return 0;
}
