#include <iostream>
#include <chrono>

class Stopwatch{
    private:
        std::chrono::time_point<std::chrono::high_resolution_clock> start, end, lap_time;
    public:
        Stopwatch() : start(std::chrono::high_resolution_clock::now()){}
        ~Stopwatch(){
            end = std::chrono::high_resolution_clock::now();
            std::cout << "Time: " << std::chrono::duration<double>(end - start).count() << "s" << std::endl;
        }
        void reset(){ start = std::chrono::high_resolution_clock::now(); }
        void lap(){
            if(lap_time == std::chrono::time_point<std::chrono::high_resolution_clock>()){
                lap_time = std::chrono::high_resolution_clock::now();
            }else{
                auto now = std::chrono::high_resolution_clock::now();
                std::cout << "Lap: " << std::chrono::duration<double>(now - lap_time).count() << "s" << std::endl;
                lap_time = now;
            }
        }
        void split(){
            auto now = std::chrono::high_resolution_clock::now();
            std::cout << "Split: " << std::chrono::duration<double>(now - start).count() << "s" << std::endl;
        }
};

int main(){
    Stopwatch sw;
    for(int i = 0; i < 1000000; i++){
        if(i % 100000 == 0){
            sw.lap();
        }
    }
    sw.split();
}
