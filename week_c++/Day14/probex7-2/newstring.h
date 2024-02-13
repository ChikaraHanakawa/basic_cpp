#ifndef _NEWSTRING_H_
#define _NEWSTRING_H_

#include <iostream>
#include <string>
#include <algorithm>

class NewString{
    private:
        std::string m_value;
    public:
        NewString();
        NewString(std::string value);
        NewString(const NewString& value);
        NewString& operator=(const NewString& n);
        std::string getValue() const;
        bool operator==(const NewString& n);
};

#endif // _NEWSTRING_H_