#pragma once
#include <iostream>
#include <curl/curl.h>
#include <fstream>
#include <nlohmann/json.hpp>
#include "User.h"

class HTTPrequest
{
private:	
	CURL* curl;                // ��������� �� ������ CURL
	CURLcode res;              // ���������� ��� �������� ���� ����������
	std::string readBuffer;    // ������ ��� ���������� ����������� ������
	std::string url;
	
	// ������� ��������� ������ ��� ������ ���������� ������
	static size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* userp);

public:
	HTTPrequest(std::string _url);
	~HTTPrequest();
	void GET();
	User* parse();
};

