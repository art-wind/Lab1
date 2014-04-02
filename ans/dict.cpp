#include "dict.h"
#include <iostream>
using namespace std;

bool Dict::add(const word &w){
	bool exist = false;
	for (int i = 0; i < size; ++i)
		if (dict[i].key == w.key){
			if (dict[i].value != w.value)
				dict[i].value = w.value;
			exist = true;
			break;
		}
	if (!exist){
		dict[size++] = w;
	}
	return true;
}

string Dict::search(const string &key){
	for (int i = 0; i < size; ++i)
		if (dict[i].key == key)
			return dict[i].value;
	return "";
}

string Dict::remove(const string &key){
	string pre = "";
	for (int i = 0; i < size; ++i)
		if (dict[i].key == key){
			pre = dict[i].value;
			dict[i].key = dict[size - 1].key;
			dict[i].value = dict[--size].value;
			break;
		}
	return pre;
}

string Dict::update(const word &w){
	string pre = "";
	for (int i = 0; i < size; ++i)
		if (dict[i].key == w.key){
			pre = dict[i].value = w.value;
			break;
		}
	return pre;
}

void Dict::printDict(){
	cout << "Now the dict is:\n";
	for (int i = 0; i < size; ++i)
		cout << dict[i].key << ": " << dict[i].value << endl;
}