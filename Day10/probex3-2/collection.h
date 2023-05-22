#ifndef _COLLECTION_H_
#define _COLLECTION_H_

template<typename T> class collection{
  private:
    T* n_array;
    int n_length;
  public:
    collection(T num1, int num2);
    ~collection();
    T getMax();
    T getMin();
    void showArray();
};
#endif // _COLLECTION_H_
