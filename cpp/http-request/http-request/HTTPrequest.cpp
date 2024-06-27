#include "HTTPrequest.h"


HTTPrequest::HTTPrequest(std::string _url) : url(_url)
{
    curl_global_init(CURL_GLOBAL_DEFAULT);  // ���������� ������������� libcurl
    curl = curl_easy_init();                // ������������� ������� CURL
    if (!curl) {
        throw std::runtime_error("Failed to initialize CURL");
    }
}

HTTPrequest::~HTTPrequest()
{    
    curl_easy_cleanup(curl); // ������� ��������
    curl_global_cleanup();   // ���������� ������� libcurl
}

void HTTPrequest::GET()
{
    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());              // URL ��� �������
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);  // ��������� ������� ��������� ������ ��� ������ ������
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);        // ���������, ������� ����� ������� ������� ��������� ������

    // ���������� �������
    res = curl_easy_perform(curl);
    if (res != CURLE_OK) {  // �������� �� ������
        std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << '\n';
    }
    else {
        std::cout << "Received Data: " << readBuffer << '\n';  // ����� ���������� ������
    }
}

User* HTTPrequest::parse()
{
    User* user = new User();
    nlohmann::json jsonResponse = nlohmann::json::parse(readBuffer);    
    user->id = jsonResponse["data"]["id"].get<int>();
    user->email = jsonResponse["data"]["email"].get<std::string>();
    user->first_name = jsonResponse["data"]["first_name"].get<std::string>();
    user->last_name = jsonResponse["data"]["last_name"].get<std::string>();
    user->avatar = jsonResponse["data"]["avatar"].get<std::string>();
    return user;
}

// ������� ��������� ������ ��� ������ ���������� ������
size_t HTTPrequest::WriteCallback(void* contents, size_t size, size_t nmemb, std::string* userp) {
    userp->append((char*)contents, size * nmemb);
    return size * nmemb;
}