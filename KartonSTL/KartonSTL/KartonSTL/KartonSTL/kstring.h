#include "Base.h"

#define BUFFER 1024


namespace karton_stl
{

	typedef struct string
	{
		uint8_t* data;
		uint8_t lenght;
		uint8_t how_much;

	} string_t;

	//TODO: iterators???

	string_t* create_string(uint8_t lenght)
	{
		string_t* string = (string_t*)malloc(sizeof(string_t));
		string->data = (uint8_t*)malloc(lenght);
		string->lenght = lenght;
		string->how_much = 0;
		return string;
	}


	size_t get_str_len(const char* str)
	{
		size_t lenght = 0;
		while (str != '\0')
		{
			lenght++;
			str++;
		}
		return lenght;
	}



	void string_free(string_t* string)
	{
		free(string->data);
		free(string);
	}

	uint8_t string_lenght(string_t* string)
	{
		return string->lenght;
	}



	string_t* string_dup(const char* str)
	{
		string_t* string = create_string((uint8_t)get_str_len(str));
		memcpy(string->data, str, string->lenght);
		string->how_much = string->lenght;
		return string;
	}
	string* string_dup(const string_t* str)
	{

	}


	string_t* string_concat(string_t* left, string_t* right)
	{
		string_t* concated = create_string(left->lenght + right->lenght);
		memcpy(concated->data, left->data, left->lenght);
		memcpy(concated->data + left->lenght, right->data, right->lenght);
		concated->how_much = concated->lenght;
		return concated;
	}
	// TODO: rewrite it to algorithm

	void find(string_t* string, const char* key)
	{

	}

	void find(string_t* string, const string_t* key)
	{

	}

	void slice(string_t* &string, size_t* slice_i_)
	{
		//	returning statement:
		//	change string to left sliced string_t
		//	return right sliced string_t

	}

}	