//
// Created by rudri on 3/29/2019.
//

#include "Vector.h"

namespace UTEC {
    void vector::push_back(const int &value) {
        _size++;
        int* ptemp=new int[_size];
        for(int i=0;i<=_size-2;i++){
            ptemp[i]=_arr[i];
        }
        ptemp[_size-1]=value;
        delete[] _arr;
        _arr=ptemp;
    }

    void vector::pop_back() {
        if(_size>0) {
            _size--;
            int *ptemp = new int[_size];
            for (int i = 0; i <=_size - 1; i++) {
                ptemp[i] = _arr[i];
            }
            delete[] _arr;
            _arr = ptemp;
        }
    }

    vector::vector() : _arr{nullptr}, _size(0) {}
    vector::~vector() {
        delete[] _arr;
        _arr=nullptr;
    }

    int vector::size() {return _size;}

    int vector::get_item(int i) {return _arr[i];}

    void vector::insert(int pos, const int& value){
         _size++;
         int* ptemp=new int[_size];
         for(int i=0;i<pos;i++){
             ptemp[i]=_arr[i];
         }
         ptemp[pos]=value;
         for(int i=pos+1;i<=_size-1;i++){
             ptemp[i]=_arr[i-1];
         }
         delete[] _arr;
         _arr=ptemp;
    }

}