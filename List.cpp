
// Created by HuaXue on 2022/3/17.
//
#include<iostream>
#include "List.h"
using std::cout;
using std::endl;
[[maybe_unused]] void OutOfRange::what() const {
    if(m_flag == 1){
        cout<<"Error: empty array, no elements to pop."<<endl;
    }else if(m_flag == 2){
        cout<<"Error: out of range( array length "<<m_len<<", access index "<<m_index<<" )"<<endl;
    }else{
        cout<<"Unknown exception."<<endl;
    }
}
template <typename T>
[[maybe_unused]] List<T>::List() {
    this->a= nullptr;
    this->Maxsize=0;
    this->Used=-1;
}
template <typename T>
[[maybe_unused]] void List<T>::ListRequire(int len) {
    this->a=new T[len];
    this->Maxsize=len;
    this->Used=-1;
}
template <typename T>
[[maybe_unused]] bool List<T>::List_PushBack(T elem) {

}
template <typename T>
//todo [[maybe_unused]]bool List<T>::List_erease(int index) {}

