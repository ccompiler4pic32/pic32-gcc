
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_IOR__
#define __gnu_CORBA_IOR__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
      namespace CDR
      {
          class AbstractCdrInput;
          class AbstractCdrOutput;
      }
        class IOR;
        class IOR$Internet_profile;
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace IOP
      {
          class TaggedComponent;
          class TaggedProfile;
      }
    }
  }
}

class gnu::CORBA::IOR : public ::java::lang::Object
{

public:
  IOR();
  static ::gnu::CORBA::IOR * parse(::java::lang::String *);
  virtual void _read(::gnu::CORBA::CDR::AbstractCdrInput *);
  virtual void _read_no_endian(::gnu::CORBA::CDR::AbstractCdrInput *);
  virtual void _write(::gnu::CORBA::CDR::AbstractCdrOutput *);
  static void write_null(::gnu::CORBA::CDR::AbstractCdrOutput *);
  virtual void _write_no_endian(::gnu::CORBA::CDR::AbstractCdrOutput *);
  virtual ::java::lang::String * toString();
  virtual ::java::lang::String * toStringFormatted();
  virtual ::java::lang::String * toStringifiedReference();
  virtual void add_ior_component(::org::omg::IOP::TaggedComponent *);
  virtual void add_ior_component_to_profile(::org::omg::IOP::TaggedComponent *, jint);
private:
  static void addComponentTo(::org::omg::IOP::TaggedProfile *, ::org::omg::IOP::TaggedComponent *);
public:
  virtual jboolean equals(::java::lang::Object *);
  virtual jint hashCode();
  static const jint FAILED = 10;
  ::gnu::CORBA::IOR$Internet_profile * __attribute__((aligned(__alignof__( ::java::lang::Object)))) Internet;
  ::java::lang::String * Id;
  JArray< jbyte > * key;
public: // actually package-private
  ::java::util::ArrayList * profiles;
public:
  jboolean Big_Endian;
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_IOR__