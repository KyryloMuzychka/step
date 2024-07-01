//���������������� ���������� ��� ������������� ������ - ������:
class BusinessRuleViolation : public exception {
private:
    string message;
public:
    BusinessRuleViolation(const string& msg) : message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};

//���������������� ���������� ��� ������ � API :
class ApiException : public exception {
private:
    int errorCode;
public:
    ApiException(int code, const string& msg) : exception(msg.c_str()), errorCode(code) {}
    int getErrorCode() const { return errorCode; }
};

//���������������� ���������� ��� ����������� ������� :
class AccessDeniedException : public exception {
public:
    const char* what() const noexcept override {
        return "������ ��������";
    }
};

//���������������� ���������� ��� ��������� ������ :
class DataValidationException : public exception {
private:
    string message;
public:
    DataValidationError(const string& msg) : message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};

//���������������� ���������� ��� �������� � ������� :
class FileOperationException : public exception {
private:
    string message;
public:
    FileOperationException(const string& msg) : message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};
