#include<iostream>
#include<string>
using namespace std;

class arr
{
private:
	int* ptr;
	int size;
	int len;
public:
	/*creation for array*/
	arr(int arrsize) {
		size = arrsize;
		len = 0;
		ptr = new int[arrsize];
	}
	void fill()
	{

		cout << " enter how many element ya baba" << endl;
		int niteam;
		cin >> niteam;
		if (niteam > size)
		{
			cout << "error";
			return;
		}
		else
		{
			for (int i = 0; i < niteam; i++)
			{
				cout << "enter element ya haibiby" << endl;
				cin >> ptr[i];
				len++;
			}
		}
	}

	void display() {

		cout << "display the array elements" << endl;
		for (int i = 0; i < len; i++)
		{
			cout << ptr[i] << endl;
		}
	}
	void add_element(int add_element) {

		if (len < size)
		{
			ptr[len] = add_element;
			len++;
		}
		else
		{
			cout << "the array is full ya habiby" << endl;
		}
	}
	int  displaysize() {

		return size;
	}
	void displaylength() {

		cout << "length" << len << endl;

	}
	void search(int element)
	{
		int counter = 0;
		for (int i = 0; i < len; i++)
		{
			if (ptr[i] == element)
			{
				cout << "element found at position at " << i + 1 << endl;
				counter++;
			}
		}
		if (counter == 0)
		{
			cout << "element not found" << endl;
		}
	}
	void insert(int index, int newitem) {
		for (int i = len; i > index; i--)
		{
			ptr[i] = ptr[i - 1];
		}
		ptr[index] = newitem;
		len++;
	}
	void Delete(int index) {
		if (index >= 0 && index < size)
		{
			for (int i = index; i < len; i++)
			{
				ptr[i] = ptr[i + 1];
			}
			len--;
		}
		else
		{
			cout << "index out of range" << endl;

		}
	}
	void make_array_larger(int newsize) {
		if (newsize <= size)
		{

		}
		else
		{
			size = newsize;
			int* old = ptr;
			ptr = new int[newsize];
			for (int i = 0; i < len; i++)
			{
				ptr[i] = old[i];
			}
			delete[] old;
		}
	}


};

int main() {
	int arraysize;
	cout << "enter the size of that you want :) : " << endl;
	cin >> arraysize;
	/*arr a1(arraysize);
	a1.fill();
	a1.display();
	a1.insert(1, 20);
	a1.display();
	a1.Delete(1);
	a1.display();*/
}
