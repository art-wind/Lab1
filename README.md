Lab1
====
- Handed out Monday, March 17, 2014 
- Due Sunday 23:59 March 30, 2014
- No Extension ! start early !
- Upload via *ftp* only !

In this lab, you should implement a tiny dictionary, which offers functions 'add', 'delete', 'update' and 'search'. You will get a better understanding of struct, reference and pointer in C++ when completing this lab.

## Release
This lab is release on [https://github.com/orgs/OOP-ss12/Lab1](https://github.com/orgs/OOP-ss12/Lab1). We do encourage you to register an account of github and fork this repository, but you can just use the linking `download zip` to get the source code.
The source file contains: 

- lab1.cpp
- dict.h
- dict.cpp
- Makefile


## Logics
You should complete four methods in file *'dict.cpp'* to implement the tiny dictionary. 
### Reference and Pointer
Before starting your lab, you may want to know what the difference between refernce and pointer is. Consider and run the following code.

	#include <iostream>
	using namespace std;

	int main(int argc, char const *argv[]) 
	{ 
		int a = 1;
		int *ap = &a;
		int &ar = a;
		
		cout << &a << endl; 
		cout << &ap << endl;  
		cout << &ar << endl;  
		return 0;
	}

**Qusetion1. What will be print out of the program? Why it has such output?**
  
**Question2. Reference and pointer have the same performance in most condition, but they are different actually. Please list the differences.** *(hint: [Google](https://www.google.com.hk) is a good teacher)*  

### Code your dictionary
We have already give you some code in three files, where there is a class *Dict*. But you only need to code functions in file *dict.cpp* with comment "Your code here". **DON'T modify any given interface so that we test your code correctly, otherwise you may get 0 score.** We will test your code with a large amount of data (5000 words perhaps), please check robustness of your code.

We define a structure in this program:

	typedef struct word
	{
		string key; /* key with which the specified value is to be associated */
		string value; /* value to be associated with the specified key */
	} word;

The methods you should implement are:

**bool add(const word &w);**  
*In this function you should insert a word in your dictionary. If the dictionary previously contained a mapping for the key, the old, the old one should be replaced.*

**string search(const string &key);**  
*Returns the value to which the specified key is mapped,or "" if this map contains no mapping for the key.*

**string remove(const string &key);**
*Removes the mapping for the specified key from this map if present.*

**string update(const word &w);**  
*Update an already existed word in your dictionary (NOTE: Do not insert the word to your dictionary if there was no such key)*  


**Qustion3. Describe how you implement the four methods in dict.cpp.**

**Note**: please compile these code using `g++ dict.cpp lab1.cpp -o lab1`, and run your program using `./lab1`. Any problem with compiling, feel free to contact your [TA](mailto: 11300180158@fudan.edu.cn).


## Handin
Package all file you get from github together with an *answer.txt* included all answers of questions into ** studentid.zip **, and upload it to *ftp*.
#### Note: 
- Never use ** .rar ** to upload your lab for TA cannot unpack it.
- Be sure all your files are encoding in **UTF-8**, otherwise we may get messy code.
