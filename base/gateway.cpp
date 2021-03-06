

#include"logicconfigmanager.hpp"
#include "lognamespace.hpp"
#include "enterfunction.hpp"
#include "socketku.hpp"
#include "pthreadstart.hpp"
#include "epoll_ku.hpp"
#include "HandlerList.hpp"
#include "MysqlKu.hpp"
#include "BillMysql.hpp"


int ConditionInit()
{
	if (pthread_mutex_init(&readsuo,NULL))
	{
		return -1;
	}
	if (pthread_cond_init(&readcode,NULL))
	{
		return -2;
	}
	if (pthread_mutex_init(&writesuo,NULL))
	{
		return -3;
	}
	if (pthread_cond_init(&writecode,NULL))
	{
		return -4;
	}
	if (pthread_mutex_init(&chulisuo,NULL))
	{
		return -5;
	}
	if (pthread_cond_init(&chulicode,NULL))
	{
		return -6;
	}
	if (pthread_mutex_init(&timesuo,NULL))
	{
		return -7;
	}
	if (pthread_cond_init(&timecode,NULL))
	{
		return -8;
	}
	
	return 0;
}

void gateway()
{
int litenfd;
//初始化游戏模块 日志
if(!LogInit("/home/wuxuewu/datamysql/"))
{
return;
}
//初始化记录错误信息的日志
if(!MYLOG.Init("/home/wuxuewu/datamysql/log/error.txt"))
{
std::cout<<"error log create fail !"<<std::endl;
return;
}
//初始化各个模块的handler
HANDLERLIST->Init();
//初始化所有条件变量和锁
int Error;
Error = ConditionInit();
if (Error < 0)
{
	std::cout<<"ConditionInit fail !"<<Error<<std::endl;
	return;
}
//启动所有线程（读 写 处理工作 定时器 这四个线程）
if(pthreadstart() < 0)
 return;
/*
//初始化线程池，最高只能创建五个线程
if(threadpool_init(&pool_t,5) < 0)
	return;
	*/
//开始读取游戏配置
if(!LOGIC_CONFIG->Init("/home/wuxuewu/datamysql/config_xml/"))
	return;

//开始连接(用户数据库)xiangmu数据库和初始化mysql库类
struct my_mysql * pMysql = LOGIC_CONFIG->GetServerMysqlConfig().GetMysqlConfig();	//获取mysql数据库基本信息
if(MYSQLKU->InitMysql(pMysql->user,pMysql->mima,pMysql->database,pMysql->table) < 0)//连接数据库
	return;
//开始连接(用户账单流水数据库)ZhangDan数据库和初始化BillMysql库类
struct BillMysql * pBillMysql = LOGIC_CONFIG->GetServerMysqlConfig().GetBillMysqlConfig();	//获取mysql数据库基本信息
if(BILLMYSQLKU->InitBillMysql(pBillMysql->user,pBillMysql->mima,pBillMysql->database,pBillMysql->BillTable) < 0)		//连接数据库
	return;
const struct MysqlServer * test = LOGIC_CONFIG->GetServerMysqlConfig().GetMysqlServerConfig(); //获取mysql服务器IP和端口
// TCP/IP启动
Socket_Ku socket_lei(test->ip.c_str(),test->port);
if(socket_lei.socket_creat() < 0)
	return;
if(socket_lei.socket_setsockopt() < 0)
	return;
if(socket_lei.socket_bind() < 0)
	return;
if(socket_lei.socket_listen() < 0)
	return;
litenfd=socket_lei.socket_listcnfd();   //获取服务器监听IO
//epoll模型启动
if(EPOLLKU->Epoll_Creat() < 0)
	return;
EPOLLKU->Epoll_Add(litenfd);

while(1)
{
 EPOLLKU->Epoll_Wait(&socket_lei);   //epoll检测IO事件

}

return;

}
