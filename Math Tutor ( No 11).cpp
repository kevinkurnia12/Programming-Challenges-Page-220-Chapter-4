// Programming Challenges page 222 no 11
// Math Tutor 

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main ()
{
	unsigned s=time(0);
	srand(s);
	int n1=(rand()%(1000-100+1))+100;
	int n2=(rand()%(1000-100+1))+100;
	int answer;
	int sum;
	
	sum=n1+n2;
	cout<<"  MATH TUTOR"<<endl<<endl;
	cout<<"    "<<n1<<endl;
	cout<<"    "<<n2<<endl;
	cout<<"    ___+\n    ";
	cin>>answer;
	
	if(answer==sum)
	{
		cout<<"\n Congratulations!! You're right!!!";
	}
	else
	{
		cout<<"\n You're wrong"<<endl;
		cout<<" The answer should be : "<<sum;
	}
	
	getchar();
	return 0;
}
