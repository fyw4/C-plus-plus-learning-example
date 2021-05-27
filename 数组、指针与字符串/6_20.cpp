#include<iostream>
#include<vector>

//计算arr数组元素平均值
double average(const vector<double>&arr)
{
	double sum = 0;
	int i = 0;
	for(i = 0; i < arr.size();i++)
	{
		sum += arr[i];
		return sum/arr.size();
	
}

int main()
{
	int n = 0;
	int i = 0;
	cout << "n:";
	cin >> n;
	
	vector<double>arr(n);
	cout << "Please input" << n << "real numbers:" << endl;
	for(i = 0; i < n;i++)
	{
		cin >> arr[i];
	}
	cout << "Average = " << average(arr) << endl;
	return 0;
}