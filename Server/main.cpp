/*************************************************************************
	> File Name: main.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年04月28日 星期一 14时42分11秒
 ************************************************************************/

#include "ThreadPool.h"
#include "UDPServer.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
//	cout << "input server config file:"<< endl;
//	string server_conf;
//	cin >> server_conf;
//	UDPServer server(server_conf);
	ifstream fin("server.conf");
	string ip , port ;
	fin >> ip >> port ;
	fin.close();
	
	UDPServer server(ip, port);
	server.open_thread_pool();
//	ThreadPool tp;
//	tp.start_thread_pool();

//	while(true)
//	{
//		Task task;
//		task = server.receive();
//		tp.add_task(task);
//		sleep(1);
//	}
	return 0;
}
