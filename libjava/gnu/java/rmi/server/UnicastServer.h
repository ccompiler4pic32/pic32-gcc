
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_rmi_server_UnicastServer__
#define __gnu_java_rmi_server_UnicastServer__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace rmi
      {
        namespace dgc
        {
            class DGCImpl;
        }
        namespace server
        {
            class ActivatableServerRef;
            class UnicastConnection;
            class UnicastServer;
            class UnicastServerRef;
        }
      }
    }
  }
  namespace java
  {
    namespace rmi
    {
        class Remote;
      namespace activation
      {
          class ActivationID;
      }
    }
  }
}

class gnu::java::rmi::server::UnicastServer : public ::java::lang::Object
{

public:
  UnicastServer();
  static void exportObject(::gnu::java::rmi::server::UnicastServerRef *);
  static void registerActivatable(::gnu::java::rmi::server::ActivatableServerRef *);
  static void exportActivatableObject(::gnu::java::rmi::server::ActivatableServerRef *);
  static ::gnu::java::rmi::server::ActivatableServerRef * getActivatableRef(::java::rmi::activation::ActivationID *);
  static void unregisterActivatable(::java::rmi::activation::ActivationID *);
  static jboolean unexportObject(::gnu::java::rmi::server::UnicastServerRef *, jboolean);
  static ::gnu::java::rmi::server::UnicastServerRef * getExportedRef(::java::rmi::Remote *);
  static ::java::util::Collection * getExported(::java::lang::Object *);
private:
  static void startDGC();
public:
  static void dispatch(::gnu::java::rmi::server::UnicastConnection *);
private:
  static void incomingMessageCall(::gnu::java::rmi::server::UnicastConnection *);
  static ::java::util::Map * objects;
  static ::java::util::Map * refcache;
public:
  static ::java::util::Map * actIds;
private:
  static ::gnu::java::rmi::dgc::DGCImpl * dgc;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_rmi_server_UnicastServer__
