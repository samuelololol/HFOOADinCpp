#ifndef __EXCEPTION_H__
#define __EXCEPTION_H__

class myexception : public std::exception {
public:
    myexception(){}  
    myexception(const char *message) :
        message_(message){}  

    virtual const char * message(){
        return message_;
    }
protected:
    /* data */
    const char *message_;
};
#endif
