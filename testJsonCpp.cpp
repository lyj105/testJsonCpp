// testJsonCpp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

#include "json.h"
#pragma comment(lib,"json_vc71_libmtd.lib")
//#pragma comment(lib, "")
//#pragma warning(disable : 4996)


using namespace std;




int main()
{

	 //const std::string info = "{\"uploadid\": \"请输入正确的手机号码\",\"code\": 100,\"msg\": \"\",\"files\": \"\"}";
	 const std::string info = "{\"msg\":\"请输入正确的手机号码！\",\"code\":0}";

	bool res;
	JSONCPP_STRING errs;
	Json::Value root, lang, mail;
	Json::CharReaderBuilder readerBuilder;

	std::unique_ptr<Json::CharReader> const jsonReader(readerBuilder.newCharReader());
	res = jsonReader->parse(info.c_str(), info.c_str() + info.length(), &root, &errs);
	if (!res || !errs.empty()) {
		std::cout << "parseJson err. " << errs << std::endl;
	}

	std::cout << "Name: " << root["msg"].asString() << std::endl;
	std::cout << "Age: " << root["code"].asInt() << std::endl;

	

	

	

    std::cout << "Hello World!\n"; 
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
