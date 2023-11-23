#ifndef _CROW_H_
#define _CROW_H_


class CCrow : public CBird{
    public:
        void sing(){
            std::cout << "カーカー" << std::endl;
        }
        void fly(){
            std::cout << "鶏は飛べません" << std::endl;
        }
};

#endif // _CROW_H_