# MKDIYError
传统的NSError不太清晰各种错误之间的区别,此DIYError可以让您自行决定error提示及errorCode,并可以直接使用.


使用方法:
1.导入头文件
----
```oc
#import "MKDIYError.h"
```
 
2.调用类方法创建Error对象,传入error文本及errorCode(可以自行添加)
----


创建error:

![](http://img01.taobaocdn.com/imgextra/i1/90628312/TB222.DdXXXXXcNXXXXXXXXXXXX_!!90628312.png)



使用error:

![](http://img01.taobaocdn.com/imgextra/i1/90628312/TB2p7QzdXXXXXXwXpXXXXXXXXXX_!!90628312.png)



errorCode:

![](http://img02.taobaocdn.com/imgextra/i2/90628312/TB2FMsDdXXXXXcVXXXXXXXXXXXX_!!90628312.png)
