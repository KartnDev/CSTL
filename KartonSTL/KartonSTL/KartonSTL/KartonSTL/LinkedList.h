#include "Base.h"

#define core softcore


namespace karton_stl
{

	template<typename T>
	struct node
	{
		T data;
		node* p_next;
	};


	typedef struct linkedlist
	{
		void* p_head_ = NULL;
		size_t size;
	} list_t;



	template<typename T>
	list_t* create_list()
	{

		list_t* list = (list_t*)malloc(sizeof(list_t));
		list->p_head_ = (node<T>)malloc(sizeof(node<T>));
		list->p_head_->data = T();
		list->p_head_->p_next = NULL;
		list->size = 0;
		return list;
	}
	template<typename T>
	node<T>* create_node(T data, node<T>* next_node = NULL)
	{
		note<T>* new_node = (node<T>)malloc(sizeof(node<T>));
		new_node->data = data;
		new_node->p_next = next_node;
		return new_node;
	}



	template<typename T>
	void free_node(node<T>* node)
	{
		free(node);
	}



	template <typename T>
	void push_back(list_t* list, T data)
	{
		if (list->size)
		{
			list_t* list = create_list();
			list->p_head_ = create_node(data, NULL);
			list->size++;
		}
		else
		{
			list->p_head_ = create_node(data, list->p_head_);
			size++;
		}
	}


	template <typename T>
	void push_front(list_t* list, T data)
	{
		if (list->size)
		{
			list_t* list = create_list();
			list->p_head_ = create_node(data, NULL);
			list->size++;
		}
		else
		{
			node<T>* iter = list->p_head_;
			while (iter->p_next)
			{
				iter->p_next = iter;
			}
			iter->p_next = create_node(data);
			list->size++;
		}
	}

	template <typename T>
	void insert(list_t* list, T data, size_t index)
	{
		if (list->size)
		{
			list_t* list = create_list();
			list->p_head_ = create_node(data, NULL);
			list->size++;
		}
		else
		{
			node<T>* iter = list->p_head_;
			for (int i = 0; i != index; i++)
			{
				iter->p_next = iter;
			}
			node<T> concated_node* = iter->p_next;
			iter->p_next = create_node(data);
			iter->p_next->p_next = concated_node;
			list->size++;
		}
	}

	bool is_empty_or_null_(list_t* list)
	{
		return (bool)list->size;
	}


	template <typename T>
	T pop_front(list_t* list)
	{
		if (list->size)
		{
			node<T> temp_node* = list->p_head_->p_next;
			T data = list->p_head_->data;
			free_node(list->p_head_);
			list->p_head_ = temp_node;
			size--;
			return data;
		}
		return false;	
	}


	template <typename T>
	T pop_back(list_t* list)
	{
		if (list->size)
		{
			node<T> iter* = list->p_head_;
			while (iter->p_next)
			{
				iter = iter->p_next;
			}
			T data = iter;
			free_node(iter);
			list->size--;
			return data;
		}
		return 0;
	}


	template <typename T>
	T remove(list_t* list, size_t index)
	{
		if (list->size && index <= list->size)
		{
			node<T> iter* = list->p_head_;
			for (size_t i = 0; i != index-1; i++) //++i
			{
				iter = iter->p_next;
			}			
			node<T> p_right* = iter->p_next->p_next; // indexed node
			T data = iter->data;
			free_node(iter->p_next);
			iter->p_next = p_right;
			list->size--;
			return data;
		}
		else
		{
			return 0;
		}
	}

	template <typename T>
	T &at(list_t* list, size_t index)
	{
		node<T> iter = list->p_head_;
		for (size_t i = 0; i < index ; i++)
		{
			iter = iter->p_next;
		}
		return &iter->data;
	}



	template <typename T>
	void free_list(list_t* list)
	{
		if (list->size)
		{
			node<T> iter* = list->p_head_;
			while (iter->p_next)
			{
				void* temp = iter;
				iter = iter->p_next;
				free_node(temp);
			}
			free_node(iter);
		}
	}

	size_t list_size(list_t* list)
	{
		return list->size;
	}



	// TODO: rewrite it to algorithm
	template <typename T>		// O(2*n*log(n))
	void sort_list(list_t* list,const size_t reverse = 0) //	quicksort
	{

	}

	template <typename T>
	size_t sizet_list_average(list_t* list)
	{
		node<T> iter* = list->p_head_;
		size_t avg_sum = 0;
		while (iter->p_next)
		{
			avg_sum += iter->data;
			iter = iter->p_next;
		}
		return avg_sum / list->size;
	}





	template <typename T>
	size_t* to_array(list_t* list)
	{
		return NULL;
	}





}