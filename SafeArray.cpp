#include <iostream>
#include <string>
using namespace std;

class SafeArray { 
	public: 
        SafeArray(int); // �غc�禡 
       ~SafeArray();// �Ѻc�禡 
	   int get(int,int); 
	   void set(int,int);
	   int length; 
	private:
   		int *_array; 
    	bool isSafe(int x,int y); 
};

SafeArray::SafeArray(int len) {
    length=len;
    _array=new int[length];
}

bool SafeArray::isSafe(int x,int y){ // ���լO�_�W�X�}�C����
    if(x>=length||x<0||y>=length||y<0) {
        return false;
    } 
    else return true;
}

int SafeArray::get(int x,int y) { // ���o�}�C������
    if(isSafe(x,y)){
        return _array[x][y];
    }
    return 0;
}

void SafeArray::set(int i, int value) { // �]�w�}�C������
    if(isSafe(x,y)) {
        _array[x][y] = value;
    }
}

SafeArray::~SafeArray() { // �R���ʺA�t�m���귽
    delete [] _array;
}

int main() {
    SafeArray safeArray(9);
 
    for(int i = 0; i < safeArray.length; i++) {
        safeArray.set(i, (i + 1) * 10);
    }
 
    for(int i = 0; i < safeArray.length; i++) {
        cout << safeArray.get(i) << " ";
    }
    cout << endl;
 
    return 0; 
}
