
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_HashMap$HashEntry__
#define __java_util_HashMap$HashEntry__

#pragma interface

#include <java/util/AbstractMap$SimpleEntry.h>

class java::util::HashMap$HashEntry : public ::java::util::AbstractMap$SimpleEntry
{

public: // actually package-private
  HashMap$HashEntry(::java::lang::Object *, ::java::lang::Object *);
  virtual void access();
  virtual ::java::lang::Object * cleanup();
  ::java::util::HashMap$HashEntry * __attribute__((aligned(__alignof__( ::java::util::AbstractMap$SimpleEntry)))) next;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_HashMap$HashEntry__
