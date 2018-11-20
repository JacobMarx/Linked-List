//media.h

#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>

class media {

 public:

  virtual void printType();
  virtual void setTitle(char*);
  virtual void setYear(int);
  
 protected:
  char* title;
  int year;
};

#endif
