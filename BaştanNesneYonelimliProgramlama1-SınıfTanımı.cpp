#include <iostream>

using namespace std;

class deneme
{
	private:
		
		int x;
	
	public:
		
		void fonk1(int no);
		
		int fonk2();
	
}a,b;

    void deneme::fonk1(int no)
    {
    	x=no;
	}
	
	int deneme::fonk2()
	{
		return x;
	}
	
	int main ()
	{
		a.fonk1(5);
		
		b.fonk1(20);
		
		cout<<"a.fonk2()->"<<a.fonk2()<<endl;
		
		cout<<"b.fonk2()->"<<b.fonk2()<<endl;
		
		return 0;
	}
