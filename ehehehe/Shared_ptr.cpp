#include <iostream>
#include<memory>

// ����� ���������
// 
void ex() {
	std::auto_ptr<int> aptr; // ������������� �� ���������
	//������ ���������� ������� ������, ��� ������ �� ���� �������� - ����������� ������
	// �� ����� ������������ �����������

	std::shared_ptr<int> shptr;
	// ������ � ������ ���������� ��������� �� �����-�� ����� �������
	// ������������ ���������� ����� ���������
	// ����������� ������, ����� ��� ��������� �� ��� �� ������ ����������
	std::unique_ptr<int> uptr;
	// ����������� ������������ ������ ������ �������(����������� ����� ��������� ������) 
	// ����������� ����������� �����������
	std::weak_ptr<int>wptr;
	// ��������� ����� ��� �������� ������� ����� ������ �����������. �� �������� ������� ������ �� ������


	// �� ��������� <-���������-> ��������� 
}

struct Data {
	int id;
	int matrix[1000][5];
};
void Print(std::unique_ptr<Data> &obj){
	obj->id;
	obj->matrix;
}

void ptr_ex() {
	//Data obj;
	Data* p_law = new Data;
	std::unique_ptr<Data> p_uniq = std::make_unique<Data>();
	// � make_unique ����� ��������� ����� ������ ������, ��� ������� ���� ������������ � ���� �������
	//
	Print(p_uniq);//�������� p_uniq �� ��������� ����������, ��� ��� ��� ������������ ����������� 
	// �������� �� ������ ������ ������ ������ ��������� �� ��������
	auto p_shrd = std::make_shared<Data>();
	

}

template <typename Type>
class smart_pointer {
public:
	Type& operator*() {
		return *data;
	}
	const Type& operator*() const{
		return *data;
	}

private:
	Type* data_;
};