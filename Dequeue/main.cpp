#include<iostream>
#include<list>
#include<algorithm>
#include<deque>
using namespace std;
int main()
{
	//Sequence Container
	deque<int> q;
	q.push_back(10);
	q.push_back(78);
	q.push_back(62053);
	q.push_back(69);
	q.push_back(1420);
	q.push_back(7898755);
	q.push_back(62546);
	q.push_back(4000);

	deque<int>::iterator itr=q.begin();
	cout << *(itr + 2) << endl;

	cout << "\n";

	// sorting the dequeue
	sort(q.begin(),q.end());
	cout<<"NUMBERS AFTER SORTED : "<<endl;
	for(;itr!=q.end();itr++){
        cout<<"Values : "<<*itr<<endl;
	}

	cout<<"\nSize=> : "<<q.size()<<endl;

	cout << "\n";

	q.clear();
	cout<<"Size clear=> : "<<q.size()<<endl;

return 0;
}
