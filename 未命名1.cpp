#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;
int flag[4][13]={0};
string s1[4]={"Ã·»¨","·½¿é","ºìÌÒ","ºÚÌÒ"};
string s2[13]={"2","3","4","5","6","7","8","9","10","J","Q","K","A"};
class cards
{
	private:
		string card[13];
		int num;
	public:
		cards(){num=0;};
		void sends(int n);
		void prints();
};
void cards::sends(int n)
{
	num=n;
	int i,j,k;
	memset(flag,0,n);
	srand(time(0));
	for(k=0;k<n;)
	{
		i=rand()%4;
		j=rand()%13;
		if(flag[4][13]==1)
		continue;
		else
		{
			card[k]=s1[i]+s2[j];
			flag[i][j]==1;
			k++;
		}
	}
}
void cards::prints()
{
	for(int i=0;i<num;i++)
	{
		cout<<card[i]<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	cards c{};
	c.sends(n);
	c.prints();
	return 0;
}

