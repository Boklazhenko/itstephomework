#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Array {
	T* mData;
	int mCounter;
	int mSize;
	int mGrow;

public:
	Array();
	~Array();
	int getSize();
	void setSize(unsigned int size, int grow = 1);
	int getUpperBound();
	bool isEmpty();
	void freeExtra();
	void removeAll();
	T getAt(int index);
	void setAt(int index, T data);
	T& operator[](int index);
	void add(T data);
	void appEnd(Array& obj);
	Array<T>& operator= (const Array& obj);
	T** getData();
	void insertAt(int position, T data);
	void removeAt(int position);
	void show();
};

template <typename T>
Array<T>::Array()
{
	mCounter = 0;
	mSize = 0;
	mGrow = 1;
	mData = nullptr;
}

template <typename T>
Array<T>::~Array()
{
	if (mData) free(mData);
	mData = nullptr;
}

template <typename T>
int Array<T>::getSize()
{
	return mSize;
}

template <typename T>
void Array<T>::setSize(unsigned int size, int grow)
{
	mGrow = grow = 1;

	if (size == mSize) {
		return;
	}

	mSize = size;

	if (mSize > 0)
	{
		if (mSize % mGrow != 0)
		{
			mData = (T*)realloc(mData, sizeof(T) * (mSize + (grow - mSize % grow)));
		}
		else if (mSize % mGrow == 0)
		{
			mData = (T*)realloc(mData, sizeof(T) * mSize);
		}
	}

	if (mCounter > mSize)
	{
		mCounter = mSize;
	}
}

template <typename T>
int Array<T>::getUpperBound()
{
	return mCounter - 1;
}

template <typename T>
bool Array<T>::isEmpty()
{
	if (mCounter == 0) return true;
	else return false;
}

template <typename T>
void Array<T>::freeExtra()
{
	if (mSize % mGrow != 0)
	{
		mData = (T*)realloc(mData, sizeof(T) * (mCounter + (mGrow - mCounter % mGrow)));;
		mSize = mCounter + (mGrow - mCounter % mGrow);
	}
	else if (mSize % mGrow == 0)
	{
		mData = (T*)realloc(mData, sizeof(T) * mCounter);
		mSize = mCounter;
	}
}

template <typename T>
void Array<T>::removeAll()
{
	free(mData);
	mData = nullptr;
	mCounter = 0;
	mSize = 0;
}

template <typename T>
T Array<T>::getAt(int index)
{
	if (index >= 0 && index < mCounter) return mData[index];
}

template <typename T>
void Array<T>::setAt(int index, T data)
{
	if (index >= 0 && index < mSize)
	{
		mData[index] = data;
		mCounter = index + 1;
	}
}

template <typename T>
T& Array<T>::operator[](int index)
{
	if (index >= 0 && index < mCounter) return mData[index];
}

template <typename T>
void Array<T>::add(T data)
{
	if (mCounter < mSize)
	{
		mData[mCounter++] = data;
	}
	else if (mCounter >= mSize)
	{
		setSize(mSize + 1);
		mData[mSize - 1] = data;
		mCounter++;
	}
}

template <typename T>
void Array<T>::appEnd(Array& obj) {
	int maxCounter = this->getUpperBound() > obj.getUpperBound() ? this->getUpperBound() + 1 : obj.getUpperBound() + 1;
	int minCounter = this->getUpperBound() < obj.getUpperBound() ? this->getUpperBound() + 1 : obj.getUpperBound() + 1;
	this->setSize(maxCounter, mGrow);

	for (int i = 0; i < minCounter; i++)
	{
		mData[i] = mData[i] + obj[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator= (const Array& obj)
{
	if (this == &obj) return *this;

	mGrow = obj.mGrow;
	mCounter = obj.mCounter;
	mSize = obj.mSize;

	mData = (T*)realloc(mData, sizeof(T) * (mSize + (mGrow - mSize % mGrow)));

	for (int i = 0; i < mCounter; i++)
	{
		mData[i] = obj.mData[i];
	}

	return *this;
}

template <typename T>
T** Array<T>::getData()
{
	return &mData;
}

template <typename T>
void Array<T>::insertAt(int position, T data)
{
	if (position < 0 || position >= mCounter)
	{
		return;
	}

	if (mCounter >= mSize)
	{
		setSize(mSize + 1);
	}

	for (int i = mCounter; i >= position; i--)
	{
		mData[i] = mData[i - 1];
	}

	mData[position] = data;
	mCounter++;
}

template <typename T>
void Array<T>::removeAt(int position)
{
	if (position < 0 || position >= mCounter)
	{
		return;
	}

	for (int i = position; i < mCounter; i++)
	{
		mData[i] = mData[i + 1];
	}

	mCounter--;
}

template <typename T>
void Array<T>::show()
{
	for (int i = 0; i < mCounter; i++)
	{
		cout << mData[i] << " ";
	}

	cout << endl << endl;
}
