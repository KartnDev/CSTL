#include "String_t.h"


string_t* create_string(uint8_t lenght)
{
	string_t* string = malloc(sizeof(string_t));
	string->data = malloc(lenght);
	string->lenght = lenght;
	string->how_much = 0;
	return string;
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



string_t* string_dup(const char* str)
{
	string_t* string = create_string((uint8_t)get_str_len(str));
	memcpy(string->data, str, string->lenght);
	string->how_much = string->lenght;
	return string;
}


string_t* string_concat(string_t* left, string_t* right)
{
	string_t* concated = create_string(left->lenght + right->lenght);
	memcpy(concated->data, left->data, left->lenght);
	memcpy(concated->data + left->lenght, right->data, right->lenght);
	concated->how_much = concated->lenght;
	return concated;
}



