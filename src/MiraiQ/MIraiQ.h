#pragma once

#define WIN32_LEAN_AND_MEAN      // ��#include<windows.h>ǰ����
//#include <boost/asio.hpp>
#include <windows.h>

#include <string>
#include <boost/filesystem.hpp>
#include <vector>


#define MIRAI_OK 0
#define MIRAIQ_BOT_IS_CONNECT 1
#define MIRAIQ_BOT_NOT_CONNECT 2
#define MIRAIQ_URL_NOT_SET 3
#define MIRAIQ_LOAD_PLUS_ERR 4
#define MIRAIQ_PLUS_IS_ENABLE 5
#define MIRAIQ_PLUS_IS_NOT_ENABLE 6
#define MIRAI_PLUS_NOT_EXIST 7
#define MIRAI_FAILD 8

class MiraiQ
{

public:

	/* �Ƿ�������״̬ */
	virtual __int32 is_bot_connect();

	/* ����url */
	virtual __int32 set_bot_url(const std::string & url);

	/* ��ȡurl */
	virtual std::string get_bot_url();

	/* ���� */
	virtual __int32 bot_connect();

	/* �Ͽ����� */
	virtual __int32 bot_disconnect();

	/* ����һ����� */
	virtual __int32 load_plus(const boost::filesystem::path & path);

	/* ��ȡ�����plus_id�� */
	virtual std::vector<__int32> get_plus_id_list(); 

	/* ����һ����� */
	virtual __int32 enable_plus(__int32 plus_id);

	/* ͣ��һ����� */
	virtual __int32 disable_plus(__int32 plus_id);

	/* �鿴һ������Ƿ����� */
	virtual __int32 is_plus_enable(__int32 plus_id);

	/* �����в������ cq_start */
	virtual void call_cq_start_fun();

	/* ����һ����Ϣ */
	virtual __int32 deal_a_message();

	/* ���Bot��ָ�� */
	static void * get_bot_ptr();

	/* ���Plus��ָ�� */
	static void * get_plus_ptr();

	virtual ~MiraiQ(){};

	static MiraiQ * getInstance();
private:
	MiraiQ();

};