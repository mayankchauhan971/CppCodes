#include <iostream>
#include <stack>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	string s;
	while(t--)
	{
	    cin>>s;
	    stack<int> st;
	    int max=0,count=0;
	    //we will calculcate the greaatest difference of indices which have 1
	    for(int i=0;s[i]!='\0';i++)
	    {
	        if(s[i]=='('){ //whenever this case push without thinking to the stack
	            s[i]='0';  //this will be counted valid only if the next element is ) so if we get
	            			// ) we will put s[i] = 1 and find the length b|w greatest continous 1 series
	            st.push(i);
	        }
	        else if(st.empty()==false) 
	        {
	            s[i]='1';
	            s[st.top()]='1';
	            st.pop();
	        }
	        else //if we have just ) means it is invalid and not to be counted
	        s[i]='0';
	    }
	    
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='0')
            {
                if(max<count){
                    max=count;
                }
                count=0;
            }
            else
                count++;
        }
        if(max<count)
        max=count;
        while(st.empty()==false)
        st.pop();
        cout<<max<<"\n";
	}
	return 0;
}