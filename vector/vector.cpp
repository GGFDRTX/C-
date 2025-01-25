#include <iostream>
#include<vector>
using namespace std;
void sumofvectornums (vector<int>vectordata)
{
	int sum = 0;
	for (int i = 0; i < vectordata.size(); i++)
	{
		sum += vectordata.at(i);
	}
	cout << sum;
}
int main()
{
	//vector<data type>variable name
	/*vector <int> vectordata = { 10,20,30 };*/
	vector <int> vectordata  { 10,20,30 };

	cout << vectordata.size()<<endl; //number of elements
	cout << vectordata.max_size() << endl;
	cout << vectordata.capacity() << endl;
	cout << vectordata.front()<<endl;
	cout << vectordata.back() << endl;
	vectordata.clear() ;
	vectordata.push_back(100);
	if (vectordata.empty())
		cout << "vector is empty";
	else
		cout << "vector is not empty";

	/*vector <int> vectordata  (4,100);*/
	/*cout << vectordata.size()<<endl;
	vectordata.push_back(200);
	vectordata.at(0) = 100;*/
	/*vectordata.pop_back();*///delete for last element,
	/*vectordata.erase(vectordata.begin()+1);*/
	/*vectordata.erase(vectordata.begin(), vectordata.begin() + 3);*/
	/*cout << vectordata.size() << endl;
	
	for (int i = 0; i < vectordata.size(); i++)
	{
		cout << vectordata[i] << endl;
	}*/
	/*cout << vectordata[4];*/
	/*vectordata.push_back(500);
	sumofvectornums(vectordata);*/
}
