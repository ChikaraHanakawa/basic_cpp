#ifndef _COLLECTION_H_
#define _COLLECTION_H_

template<typename C>class collection{
  private:
    C num1;
    C num2;
  public:
    collection(C num1, C num2);
    ~collection();
    C getMax();
    C getMin();
    void showArray();
};
#endif // _COLLECTION_H_
