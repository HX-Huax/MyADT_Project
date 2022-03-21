//
// Created by HuaXue on 2022/3/13.
//
#ifndef CORCPP_LIST_H
#define CORCPP_LIST_H
class OutOfRange{
public:
    OutOfRange(): m_flag(1){ };
    OutOfRange(int len, int index): m_len(len), m_index(index), m_flag(2){ }
public:
    void what() const;  //获取具体的错误信息
private:
    int m_flag;  //不同的flag表示不同的错误
    int m_len;  //当前数组的长度
    int m_index;  //当前使用的数组下标
};
template <typename T>
class List {
    private:
    List<T> *a;
    int Used;
    int MaxSize;
public:
    List();//构造函数
    [[maybe_unused]] void ListRequire(int len);//空间申请
    [[maybe_unused]] bool List_PushBack(T elem);//尾部添加
    [[maybe_unused]] bool List_erease(int index);
    T operator[](int index)const{
        if(index>=MaxSize)throw OutOfRange(MaxSize,index);//越界抛出异常
        return *(a+index);
    }
};

#endif //CORCPP_LIST_H
