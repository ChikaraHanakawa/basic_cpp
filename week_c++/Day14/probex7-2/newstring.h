#ifndef _NEWSTRING_H_
#define _NEWSTRING_H_

#include <iostream>
#include <string>

class NewString{
    private:
        std::string m_value;
    public:
        NewString();
        NewString(std::string value);
        NewString(NewString& value);
        NewString& operator=(NewString& n);
        std::string getValue();
};

#endif // _NEWSTRING_H_