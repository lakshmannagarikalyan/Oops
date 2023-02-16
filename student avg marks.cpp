#include<iostream>
using namespace std;
class car
{
	int n,i,j,m1,m2,m3,m4,tot;
	public:
		car(int i,int j,int k,int l)
		{
			m1=i;
			m2=j;
			m3=k;
			m4=l;
		}
	    void add()
	    {
			tot=m1+m2+m3+m4;
			cout<<"total is:"<<tot;
			cout<<"average is:"<<tot/4;
		}
	};
		int main()
		{
			car s( 75,76,48,98 );
			car s1( 83, 69,68,48 );
			car s2( 27, 59,75,97 );
			s.add();
			s1.add();
			s2.add();
		}
