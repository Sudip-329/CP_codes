#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    int max_balance = 0;
	    int balance = 0;
	    for(int i=0;i<str.size();i++)
	    {
	        if(str[i]=='(')
	        {
	            balance++;
	        }
	        else
	        {
	            balance--;
	        }
	        max_balance = max(max_balance,balance);
	    }
	    for(int i=0;i<max_balance;i++)
	    {
	        cout<<"(";
	    }
	    for(int i=0;i<max_balance;i++)
	    {
	        cout<<")";
	    }
	    cout<<endl;
	}
	return 0;
}