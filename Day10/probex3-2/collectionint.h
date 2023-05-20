#ifndef _COLLECTION_H_
#define _COLLECTION_H_

template<typename T> class collection{
  private:
    T n_array;
    T n_length;
  public:
    collection(T num1, T num2);
    ~collection();
    T getMax();
    T getMin();
    T showArray();
};
#endif // _COLLECTION_H_
