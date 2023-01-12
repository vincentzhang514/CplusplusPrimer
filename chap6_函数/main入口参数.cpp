/*************************************************************************
	> File Name: main入口参数.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2023年01月10日 星期二 17时43分50秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, char** argv) {
	for(int i = 0; i != argc; i++) {
		cout<<"argv["<<i<<"]: "<<argv[i]<<endl;
	}
	return 0;
}
