#include "newstring.h"

NewString::NewString(){
    m_value = "";
}
NewString::NewString(std::string value){
    m_value = value;
}
NewString::NewString(const NewString& n){
    m_value = n.m_value;
}
NewString& NewString::operator= (const NewString& n){
    if(this != &n){
        m_value = n.m_value;
    }
    return *this;
}
std::string NewString::getValue() const{
    return m_value;
}
bool NewString::operator== (const NewString& n){
    std::string str1 = m_value;
    std::string str2 = n.getValue();
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    return str1 == str2;
}