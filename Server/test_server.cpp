/*************************************************************************
	> File Name: test_server.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年04月24日 星期四 21时46分44秒
 ************************************************************************/

#include "UDPServer.h"
#include <iostream>
#include "ThreadPool.h"
#include <unistd.h>

using namespace std;

int main()
{
	UDPServer server(8888);
	ThreadPool tp(5);
	tp.start_thread_pool();
	while(true)
	{
		Task task; 
		task = server.receive();
		cout << "receive task from client " << endl;
		tp.add_task_queue(task);
		sleep(1);
	}
	return 0;
}
