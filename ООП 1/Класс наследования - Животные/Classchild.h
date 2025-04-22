// ��� ������ ������������ �.�.
// �������� ������� ������������
// ������������ ����������

#include <iostream>
#include <string>


using namespace std;

// ����������� ����� Animal
class Animal {
protected:
	string name,    // ������ ���������
	       breed;   // ������ ���������
	size_t age;     // ������� ���������

public:

	// ����������� ��� ����������
	Animal() : name(" "), age(0), breed(" ") {}

	// ����������� � �����������
	Animal(string n, size_t a, string b) : name(n), age(a), breed(b) {
		if (a < 0 || a > 20) { throw runtime_error("������: ������������ �������"); }
	}

	// ����������� ����� ������ ����� �����������
	virtual void print() const = 0;
	/*
	virtual - ����� ����� ���� ������������ � ������-����������
	const - ����� �� �������� ��������� �������
	= 0 - ����������� ������ ���� ���������� � ������-����������
	*/
		// ����������� ����������
	virtual ~Animal() {}

	// ����������� �����������
	Animal(const Animal& other)
		: name(other.name), breed(other.breed), age(other.age) {} //other ������������ ����� ������ �� ������ ������ Animal

	// ����������� �����������
	Animal(Animal&& other) noexcept // noexcept ������� ��� ���� ����� �� ����� ����������� ����������
		: name(other.name), breed(other.breed), age(other.age) {
		other.name = " ";
		other.breed = " ";
		other.age = 0;
	}

	// ������ ������
	string getName() const { return name; }
	size_t getAge() const { return age; }
	string getBreed() const { return breed; }

	// ������ �����
	void setName (string n){
		name = n;
	}

	void setAge (size_t a) {
		if (a < 0 || a > 20) {
			age = a;
		}
		else {
			cout << "������ ������ ���� ���������������." << endl;
		}
	}

	void setBreed (string b) {
		breed = b;
	}
}; 

// ����� Cat ����������� �� Animal
class Cat: public Animal {
private:
	string furColor;

public:
	// �����������
	Cat(string name, size_t age, string breed, string furColor)
		: Animal{ name, age, breed }, furColor(furColor)
	{}

	string getfurColor() const { return furColor; }

	void setfurColor(string c) {
		furColor = c;
	}

	//������
	void print() const override {// override ������������ ��� ������ ��������, ��� ����� �������������� ����������� ����� �������� ������
		cout << "��� �����!" << endl;
		cout << "������: " << name << endl
			<< "�������: " << age << endl
			<< "������: " << breed << endl
			<< "���� ������: " << furColor << endl;
	}
};

// ����� Dog ����������� �� Animal
class Dog: public Animal {
private:
	string favoriteToy;

public:
	// �����������
	Dog(string name, size_t age, string breed, string favoriteToy)
		: Animal{ name, age, breed }, favoriteToy(favoriteToy)
	{}

	string getfavoriteToy() const { return favoriteToy; }

	void setfavoriteToy(string t) {
		favoriteToy = t;
	}

	//������
	void print() const override{ // override ������������ ��� ������ ��������, ��� ����� �������������� ����������� ����� �������� ������
		cout << "��� ������!" << endl;
		cout << "������: " << name << endl
			<< "�������: " << age << endl
			<< "������: " << breed << endl
			<< "������� �������: " << favoriteToy << endl;
	}
};

void printanimal(const Animal* animal) {
	animal->print();  // ����� ���������� ����������� ����� ������ print()
}