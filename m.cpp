#include <iostream>
#include <vector>
using namespace std;
//test change2
//test
int changeto(vector<int> A)
{
	int n=A.size();
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum*2+A[i];
	}
	return sum;
}
void changeVector(vector<int> &A)
{
	int n=A.size();
	for(int i=0;i<n;i++)
	{
		if(A[i]==1)	A[i]=0;
		else A[i]=1;
	}
}
int matrixScore(vector< vector<int> > &A)
{
	int n=A.size();
	for(int i=0;i<n;i++)
	{
		if(A[i][0]!=1)
		{
			changeVector(A[i]);
		}
	}
	int l=A[0].size();
	for(int i=1;i<l;i++)
	{
		int sum=0;
		for(int j=0;j<n;j++)
		{
			if(A[j][i]==0)
			{
				sum++;
			}
		}
		if(sum*2>n)
		{
			for(int k=0;k<n;k++)
			{
				if(A[k][i]==1)	A[k][i]=0;
				else A[k][i]=1;
			}
		}
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		int tmp=changeto(A[i]);
		sum+=tmp;
	}
	return sum;
}
int main()
{
	vector< vector<int> > A;
	vector <int> B={ 0,0,1,1 };
	vector <int> C={1,0,1,0};
	vector <int> D={1,1,0,0};
	A.push_back(B);
	A.push_back(C);
	A.push_back(D);
	cout<<matrixScore(A);
} 
