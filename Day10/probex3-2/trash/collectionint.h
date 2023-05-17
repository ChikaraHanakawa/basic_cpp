#ifdef _COLLECTIONINT_H_
#define COLLECTIONINT_H_

class CollectionInt{
  private:
    int* m_pArray;
    int m_length;
  public:
    CollectionInt(int* array, int length);
    ~CollectionInt();
    int getMax();
    int getMin();
    void showArray();
};
template<typename C> class collection{
  private:
    C* n_array;
    c n_length;
  public:
    collection(C* array, C length);
    ~collection();
    C n_getMax();
    C n_geMin();
    C n_showArray();
 };
#endif // _COLLECTIONINT_H_
