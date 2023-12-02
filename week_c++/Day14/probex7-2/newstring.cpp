#include "newstring.h"

NewString::NewString(){
    m_value = "";
}
NewString::NewStirng(std::string value){
    m_value = value;
}
NewString& NewString::operator= (NewString& n){
    m_value = n.getValue();
    return *this;
}
std::string NewString::getValue(){
    return m_value;
}