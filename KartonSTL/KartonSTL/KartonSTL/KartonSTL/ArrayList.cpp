#include <malloc.h>
#include <stdio.h>
#include <stdint.h>



template<typename T>
class karton_array_list
{
private:
	uint32_t lenght;
	uint32_t corrent_capacity;
	class node
	{
		T data;
		node(T data)
		{
			this->data = data;
		}
	};

public:
	karton_array_list()
	{

	}
	karton_array_list(const karton_array_list &other_instanse)
	{

	}
	void insert_at(T data, uint32_t index);
	void push_back(T data);
	void push_front(T data);
	void sort(bool reverse = false);
	void is_sorted();
	void append_list(const &karton_array_list other);
	void capacity(uint16_t capacity);
	void destroy_list();
	uint32_t lenght();
	uint32_t get_capacity();
	//iterator* get_start()
	//iterator* get_end()
	&T operator[](uint16_t index);
	&karton_array_list operator+(const &karton_array_list other);
	&T at(uint32_t index);
	&T pop_back();
	&T pop_front();
	&T remove_at(uint32_t index);
	void* f = new int;
};


template<typename T>
void karton_array_list<T>::sort(bool reverse)
{
}

template<typename T>
void karton_array_list<T>::is_sorted()
{
}
