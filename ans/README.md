# Answer to question 1 & 2

## Questions
Before starting your lab, you may want to know what the difference between reference and pointer is. Consider and run the following code.

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

## Answers

### Question 1.

On my computer, the output is:

	0x7fff59b1abac
	0x7fff59b1aba0
	0x7fff59b1abac

The output veries, but the 1st and the 3rd should be the same and should be different to the 2nd one. Reason to the output are as follows:

1. `&a` is the address of `a`
2. `*ap` is a pointer of `a`, and `&ap` is the address of `*ap`
3. `ar` is a reference of `a`, and `&ar` is the address of `a`

### Question 2.

Comparation of pointer and reference is as follows: (OMG! It's an egg-ache for us to translate twice!)

 - 初始化：引用必须在创建时初始化，而指针不需要
 - 指向的对象：引用不能指向NULL且不能改变（但对象本身可以改变），而指针都可以
 - 函数参数传递：指针和引用都可以实现传递较大或者需要在函数内进行修改的值，指针有更大的灵活度但是也更危险，如果没有特殊需要通常使用引用。对较大的无需改变的参数还可以用常引用(const &a)来进行传递。
 - 引用是用指针来实现的。据说C++他爸Bjarne说引用是为操作符重载设计的语法糖，这个到了操作符重载的时候再说了~

## Summary

随机抽了几个同学的看了一下基本上都是对的，如果对上面的答案有疑问请联系[TA](mailto:11300180158@fudan.edu.cn)。

代码也随机抽了几个看一下没有大问题，提醒一下以后麻烦根据文档把文件夹和打包以后的zip包*命名为学号！*

关于代码的说明：

 - 头文件相当于起了一个记录格式的功能，不需要改动。
 - 有同学问到size的问题，在`Dict(): size(0) {}`中已经把size初始化为0了，当然其他函数的size需要同学们自行处理。`Dict()`是构造函数，`size(0)`是初始化列表，在以后的课程中会讲到。
 - `const word &w`这样的形式叫常引用，具体见第一题的答案。
 - `dict.cpp`是对Dict类的实现，没有main函数。同学们自己加没有问题，但是以后请注意提交之前删掉或者注释掉，因为测试部分其实是在`lab1.cpp`啊喂！
 - `lab1.cpp`中的main函数只提供一些基本的测试，实际测试时我们会使用随机生成的操作序列。（但是可以保证最大长度不会超过5000）
 - 本次lab主要内容是指针和引用，以及提前熟悉一点C++的面向对象，用最简单的算法即可通过测试。

测试结果将在未来由[周予维TA](伟大正确的一姐！)发布，除此以外的问题请联系[爱你们的一姐...的粉丝](11300180158@fudan.edu.cn)。