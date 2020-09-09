#include<iostream>
#include <vector>
#include <algorithm>



using namespace std;

int main()
{
	//ootb stl vector capabalities 

	vector<int> v = { 12, 45, 56 ,67,90 };
	cout <<"2nd element :"<< v[2] << endl;

	sort(v.begin(), v.end());//O(NlogN)
	
	//binary search 
	bool  res = binary_search(v.begin(), v.end(), 56);

	  res = binary_search(v.begin(), v.end(), 599);

	  v.push_back(100);
	  v.push_back(100);
	  v.push_back(100);
	  v.push_back(100);
	  v.push_back(123);
	  //{ 12, 45, 56 ,67,90,100,100,100,100,123};

	  sort(v.begin(), v.end());//O(NlogN)

	  vector<int>::iterator it = lower_bound(v.begin(), v.end(), 100);
	  cout << *it << endl;

	cin.get();
	return 0;
}