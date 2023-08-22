#include<iostream>
using namespace std;
class Digit{
	public:
		void ss(int nn){
			n=nn;
		}
		int number(int nn)
		{
			return nn;
		}
	private:
		int n;
	
};
int main()
{
	Digit c1;
	cout<<c1.number(72328);
	
}