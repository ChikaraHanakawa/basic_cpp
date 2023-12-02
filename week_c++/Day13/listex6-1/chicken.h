#ifndef _CHICKEN_H_
#define _CHICKEN_H_


class CChiken : public CBird{
    public:
        void sing(){
            std::cout << "コケコッコー" << std::endl;
        }
        void fly(){
            std::cout << "鶏は飛べません" << std::endl;
        }
};

#endif // _CHICKEN_H_