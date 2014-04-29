/*************************************************************************
	> File Name: test_query.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年04月29日 星期二 23时35分09秒
 ************************************************************************/

#include "TextQuery.h"
#include "iostream"

using namespace std;

int main()
{
	TextQuery tq;
	tq.read_file("test.txt");
	tq.build_map();
//	tq.debug();
	cout << "Query:" << endl;
	string word;
	while(cin >> word)
	{
		tq.query_word(word);
	}
	return 0;
}
