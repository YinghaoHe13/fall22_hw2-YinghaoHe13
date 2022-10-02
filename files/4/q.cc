#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc

  // Creates an empty vector.
MyVector::MyVector()
{
  size_ = 0;
  data_ = nullptr;
  error_ = ErrorCode::kNoError;
}

  // Creates a vector of the given size.
MyVector::MyVector(int size)
{
  size_ = size;
  data_ = new int[size];
  error_ = ErrorCode::kNoError;
}

  // Copy constructor.
MyVector::MyVector(const MyVector& rhs)
{
  size_ = rhs.size_;
  int *new_data = new int;
  error_ = ErrorCode::kNoError;
}

  // Destructor.
  // Should delete data and set it to nullptr. Also set size_ to 0.
MyVector::~MyVector()
{
  delete data_;
  data_ = nullptr;
  error_ = ErrorCode::kNoError;
}

  // Inserts the given value at the back of the vector.
void MyVector::push_back(int value)
{
  int* new_data = new int[size_+1];
  for (int i = 0; i < size_; i++)
  {
    new_data[i] = data_[i];
  }
  delete [] data_;
  data_ = new_data;
  data_[size_] = value;
  size_++;
  error_ = ErrorCode::kNoError;
}

  // Removes and returns a value from the backs of the vector.
int MyVector::pop_back()
{
  if (size_ == 0)
  {
    error_ = ErrorCode::kPopFromEmptyVector;
    return -1;
  }
  int* new_data = new int[size_-1];
  for (int i = 0; i < size_-1; i++)
  {
    new_data[i] = data_[i];
  }
  int res = data_[size_-1];
  delete data_;
  data_ = new_data;
  size_--;
  error_ = ErrorCode::kNoError;
  return res;
}

  // Inserts the given value at the front of the vector.
void MyVector::push_front(int value)
{
  int* new_data = new int[size_+1];
  new_data[0] = value;
  for (int i = 1; i < size_+1; i++)
  {
    new_data[i] = data_[i-1];
  }
  delete data_;
  data_ = new_data;
  size_ ++;
  error_ = ErrorCode::kNoError;
}

  // Removes and returns a value from the front of the vector.
int MyVector::pop_front()
{
  if (size_ == 0)
  {
    error_ = ErrorCode::kPopFromEmptyVector;
    return -1;
  }
  int* new_data = new int[size_-1];
  for (int i = 0; i < size_; i++)
  {
    new_data[i] = data_[i+1];
  }
  delete [] data_;
  size_ --;
  error_ = ErrorCode::kNoError; 
}

  // If the given index is -1, it inserts the item at the very beginning of the
  // vector.
void MyVector::insert(int value, int index)
{
  if (index != -1 && (index <0 ||index > size_ -1))
  {
    error_ = ErrorCode::kIndexError;
  }
  if(index == -1)
  {
    index = 0;
  }
  int* new_data = new int[size_+1];
  for (int i = 0;i < index; i++)
  {
    new_data[i] = data_[i];
  }
  new_data[index] = value;
  for (int j = index +1; j< size_+1; j++)
  {
    new_data[j] = data_[j-1];
  }
  delete [] data_;
  data_ = new_data;
  size_++;
  error_ = ErrorCode::kNoError; 
}

  // Returns the item at the given index.
int MyVector::at(int index)
{
  if (index <0 ||index > size_ -1)
  {
    error_ = ErrorCode::kIndexError;
    return -1;
  }
  error_ = ErrorCode::kNoError; 
  return data_[index];
}

  // Returns the first index of the given item in the vector. Returns -1 if not
  // found.
int MyVector::find(int item)
{
  for (int i =0; i< size_;i++)
  {
    if (data_[i] == item)
    {
      return i;
      break;
    }
  }
  return -1;
  error_ = ErrorCode::kNotFound; 
}

  // Returns the value of error_
ErrorCode MyVector::get_error() const
{
  return error_;
}

  // Returns the value of size_
int MyVector::size() const
{
  return size_;
}

  // Converts to std::vector. Used for testing.
std::vector<int> MyVector::ConvertToStdVector()
{
  std::vector<int> new_vector;
  for (int i =0; i< size_;i++)
  {
    new_vector.push_back(data_[i]);
  }
  return new_vector;
}