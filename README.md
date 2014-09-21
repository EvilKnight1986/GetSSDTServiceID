GetSSDTServiceID
================

工作原理:
-----------------
1. 通过解析ntdll.dll的导出表，判断是否为Nt开头的函数，因为我们知道SSDT函数一定是Nt开头的。
2. 如果是Nt开头的话，再通过函数第一字节来判断是否为SSDT函数。
3. 最后取得第二字节起始处int型数据，为SSDT Service ID值。
