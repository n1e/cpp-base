#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(int m){cout<<m<<" ";}
void main()
{
  int m[]={1,3,1,3,1,3,5,4,2,3,3,5,2,12};

  vector<int> mm(m,m+13);
  sort(mm.begin(),mm.end()); // Before calling equal_range() need call sort()
  pair<vector<int>::iterator,vector<int>::iterator> bound;
  bound=equal_range(mm.begin(),mm.end(),3);
  //for_each(bound.first ,bound.second ,print); // will not print bound.end()
  vector<int>::iterator it = bound.first;
	  while(1){
      if (it != mm.end())
        cout << it - mm.begin()<<"---->" <<*it << endl;
      else cout << "can't print mm.end()!" << endl;
		  if (it == bound.second) return;
		    it++;
			  //i++;
	  }
cout<<endl;
}
