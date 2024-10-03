class S{
    public:
        template<typename T>
        void foo(T value){}
        template<typename T>
        void bar(T value);
};

template<typename T>
void bar(T value){
    }

int main(){
    S s;
    s.foo<int>(0);
    s.bar<float>(0.0f);
}
