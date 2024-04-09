/*
纯虚函数和抽象类
纯虚函数就是没有方法体的函数
复制代码virtual 返回值  函数名（形参）=0;
前面和虚函数一样，后面加一个=0，表示没有函数体，包括纯虚函数的类就是抽象类，一个抽象类至少有一个纯虚函数
抽象类的特点如下

抽象类无法实例出一个对象，只能作为基类让派生类去实现抽虚函数，然后再实例化使用
抽象的派生类依然不可以实现基类中的纯虚函数，继续作为抽象类被派生
抽象类因为抽象无法具化，所以不能作为参数类型返回值，强转类型
但抽象类可以定义一个指针，引用，指向派生类来实现多态性


作者：renxhui
链接：https://juejin.cn/post/6844904160031145992
来源：稀土掘金
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。


*/