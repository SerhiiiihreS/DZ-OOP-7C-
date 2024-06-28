#pragma once

template<class T>
class ArrayT
{
private:
	T* arr = nullptr;
	int size;
public:
	ArrayT();
	void Output();
	~ArrayT();
	int GetSize()const;
	T* GetPtr()const;
	void SetSize(int s,int grow);
	void SetPtr(T* ptr);
	T operator[](int index);

	void GetUpperBound()const;
	void IsEmpty();
	void FreeExtra();
	void RemoveAll();
	T GetAt(int ind);
	T SetAt(int in, T ch);
	T Add();




};

template<class T>
inline ArrayT<T>::ArrayT()
{
	size = 10;
	arr = new T[10];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100 * 1.2;
	}
}

template<class T>
inline void ArrayT<T>::Output()
{
	for (int i = 0; i < size; i++)
	{
		 cout << arr[i] << "\t";  
	}
	cout << endl << endl;
}

template<class T>
inline ArrayT<T>::~ArrayT()
{
	delete[]arr;
	size = 0;
}


template<class T>
inline int ArrayT<T>::GetSize() const
{
	return size;
}

template<class T>
inline T* ArrayT<T>::GetPtr() const
{
	return arr;
}

template<class T>
inline void ArrayT<T>::SetSize(int s,int grow)
{
	size = s;
	if (grow > s) {
		size = s * (s / grow) + s;
	}
}

template<class T>
inline void ArrayT<T>::SetPtr(T* ptr)
{
	arr = ptr;
}

template<class T>
inline T ArrayT<T>::operator[](int index)
{
	return T();
}

template<class T>
inline void ArrayT<T>::GetUpperBound() const
{
	int last = size - 1;
	return last;
}

template<class T>
inline void ArrayT<T>::IsEmpty()
{
	int id = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] = nullptr) {
			id+=1
		}
	}
	if (id = size) {
		cout << "array is empty" << endl;
	}
	else {
		cout << "array contains data" << endl;
	}
}

template<class T>
inline void ArrayT<T>::FreeExtra()
{
	T b.arr = new T[b.size];
	for (int i = 0; i < b.size; i++) {
		b.arr[i] = arr[i];
	}
	delete[]arr;
}

template<class T>
inline void ArrayT<T>::RemoveAll()
{
	for (int i = 0; i < size; i++) {
		arr[i] = nullptr;
	}
}

template<class T>
inline T ArrayT<T>::GetAt(int ind)
{
	return arr[ind];
}

template<class T>
inline T ArrayT<T>::SetAt(int in, T ch)
{
	if (ind < (size - 1)) {
		arr[ind] = ch;
	}
	return T(arr[ind]); 
} 

template<class T>
inline T ArrayT<T>::Add()
{
	int size2 = SetSize(size, 1);
	T b.arr = new T[size2]; 
	b.arr[size] = 0;
	for (int i = 0; i < size2; i++) {
		b.arr[i] = arr[i];
	}
	delete[]arr;
	return T b.arr;
}



