
//i nvalid_argument - ������������ �������� :
void setPercentage(int percent) {
    if (percent < 0 || percent > 100) {
        throw invalid_argument("������� ������ ���� � �������� �� 0 �� 100");
    }
}

// out_of_range - ����� �� ������� ����������� ��������� :
void accessElement(vector<int>&vec, int index) {
    if (index < 0 || index >= vec.size()) {
        throw out_of_range("������ ��� ����������� ��������� �������");
    }
}

//length_error - ������ �����(����� ������� � ����������� ����������� ��������� ����� ����������) :
    void resizeString(string & str, size_t newSize) {
    if (newSize > str.max_size()) {
        throw length_error("����������� ������ ��������� ����������� ���������� ��� ������");
    }
    str.resize(newSize);
}

    //runtime_error - ������ ������� ���������� :
    void processFile(const string& filename) {
        ifstream file(filename);
        if (!file) {
            throw runtime_error("�� ������� ������� ����");
        }
    }

    //logic_error - ���������� ������(��� ��������� ������ ���������) :
        void checkLogic(int value) {
        if (value < 0) {
            throw logic_error("�������� �� ������ ���� ������������� � ������ ���������");
        }
    }
