#pragma once//防止头文件重复编译

#ifdef __cplusplus//两个下划线 判断是否是c++的代码
extern "C" {
#endif 


#include<stdio.h>
	void show();

#ifdef __cplusplus
 }
#endif 