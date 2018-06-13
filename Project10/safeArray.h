#pragma once
template  <typename T>
class SafeArray{
private:
	T *els;
	size_t size;
public:
	SafeArray(int size)
	{
		this->size = size;
		this->els = new T[size];
	}

	T&operator[] (int index) {
		if (index < 0) throw "index is too low";
		else if(index >= this->size) throw "index is too high";
		return els[index];
	}
	~SafeArray() { delete[]els;}
};
