#include <iostream>
#include <string.h>
#include <random>
#include <chrono>
#include <memory>
#include <vector> //коллекция по умолчанию

//oop desighn project 
class Item {
public:
	virtual std::string FullDescription()const;

	std::string Get_Name() {
		return this->name_;
	}
	void Set_Name(std::string newName) {
		this->name_ = newName;
	}

private:
	int id_;
	std::string name_;
	std::string publisher_;
	std::string author_;
	std::chrono::year year_; //std::chrono::year -> для годов специально
	std::string price_;
	int ageCenz_;
	std::string description_;
};

class Book : public Item {
public:
	virtual std::string FullDescription()const override;

private:
	//поля которые нужны в книгах

};

class Cd : public Item {
public:
	virtual std::string FullDescription()const override;

private:
	//поля которые нужны в CD

};

class CollectedItem {
public:
	CollectedItem(std::shared_ptr<Item> &WhatItIs ):
		whatItIs_(WhatItIs), finalPrice_(){}
private:
	std::shared_ptr<Item> whatItIs_;
	std::string finalPrice_;
	//another fields dor description
	int id_;
};

class DAl {
public:
	void Init(std::vector<std::shared_ptr<Item>>& dItem,
		std::vector<CollectedItem> &cItem);

	void Save(const std::vector<std::shared_ptr<Item>>& dItem,
		const std::vector<CollectedItem>& cItem);
};

class Librarian {
public:
	//InterFace for внешнего использования
	~Librarian() {
		for (auto& i : dItem) {
			if (i) {
				delete i;
			}
		}
	}
private:
	std::vector</*std::shared_ptr<Item> */Item*> dItem;
	std::vector<CollectedItem> cItem;
};

int main() {

	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	//sql
	//базы хранилища данных
	
	                
	std::cout << "comong soon\n";


	return 0;
}