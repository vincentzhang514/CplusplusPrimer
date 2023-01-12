/*************************************************************************
	> File Name: 7.6.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2023年01月12日 星期四 16时14分20秒
	> Description: istream 与 ostream 的测试
 ************************************************************************/

#include<iostream>
using namespace std;

class Sales_data{
public:
	int bookno;
	int units_sold;
	int sellingprice;
};

//istream接收终端输入的多个字符串，存储到变量以及istream中
std::istream &read(std::istream &is, Sales_data& item) {
	cout<<"请输入:bookno, units_sold, sellingprice的值："<<endl;
	is >> item.bookno >> item.units_sold >> item.sellingprice;
	return is;
}

//从变量中取出输入的数值，并通过ostream输出来
std::ostream &print(std::ostream &os, const Sales_data &item) {
	os << "这是输出信息：" << item.bookno <<" "<< item.units_sold <<" "<< item.sellingprice;
	return os;
}

int main() {
	Sales_data data;
	
	std::istream& is = read(cin, data);
	std::ostream& os= print(cout, data);
	return 0;
}
