#ifdef _COLLECTIONINT_H_
#define COLLECTIONINT_H_

class CollectionInt{
  private:
    int* m_pArray;
    int m_legth;
  public:
    CollectionInt(int* array, int length);
    ~CollectionInt();
    int getMax();
    int getMin();
    void showArray();
};
#endif // _COLLECTIONINT_H_
