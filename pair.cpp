#include<iostream>
using namespace std;

	class Pair
	{
	 public:
	 calculate()
		{
		  int n,x,p,i;
		 cout<<"\n enter the 'n' for 2n";
		 cin>>n;
		 cout<<"\nenter the number of the children for whom the pair should be designed for 2n-1 days"; 
		 cin>>p;
		 for(i=0;i<2*n;i++)
 			{
			   static int j=1;
			   x=2*n-i;
			   if(p!=x)
			    { cout<<"\n the pair of student no.\t"<< p <<"\tfor day\t"<< j++ <<"\t is\t "<<p<<"."<<x<<endl;}
				/* else
				{ break;
				     }*/
			    }
	       }
	};

		int main()
		{
 		   Pair b;
		    b.calculate();
		   return 0;
		}