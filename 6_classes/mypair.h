#ifndef MYPAIR_H
#define MYPAIR_H

template<typename First, typename Second> class MyPair {
    public:
        First getFirst();
        Second getSecond();
        void setFirst(First f);
        void setSecond(Second f);
    private:
        First first;
        Second second;
};

#endif