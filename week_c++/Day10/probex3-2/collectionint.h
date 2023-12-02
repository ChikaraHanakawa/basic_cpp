#ifndef _COLLECTIONINT_H_
#define _COLLECTIONINT_H_

template <typename T> class Collection{
    private:
        T* m_pArray;
        T m_length;
    public:
        Collection(T* array);
        ~Collection();
        T getMax();
        T getMin();
        void showArray();
};

#endif // _COLLECTIONINT_H_