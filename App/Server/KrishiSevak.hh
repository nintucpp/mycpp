// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __KrishiSevak_hh__
#define __KrishiSevak_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_KrishiSevak
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_KrishiSevak
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_KrishiSevak
#endif






#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif





_CORBA_MODULE KrishiSevak

_CORBA_MODULE_BEG

#ifndef __KrishiSevak_mServiceKrishiSevak__
#define __KrishiSevak_mServiceKrishiSevak__

  class ServiceKrishiSevak;
  class _objref_ServiceKrishiSevak;
  class _impl_ServiceKrishiSevak;
  
  typedef _objref_ServiceKrishiSevak* ServiceKrishiSevak_ptr;
  typedef ServiceKrishiSevak_ptr ServiceKrishiSevakRef;

  class ServiceKrishiSevak_Helper {
  public:
    typedef ServiceKrishiSevak_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_ServiceKrishiSevak, ServiceKrishiSevak_Helper> ServiceKrishiSevak_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_ServiceKrishiSevak,ServiceKrishiSevak_Helper > ServiceKrishiSevak_out;

#endif

  // interface ServiceKrishiSevak
  class ServiceKrishiSevak {
  public:
    // Declarations for this interface type.
    typedef ServiceKrishiSevak_ptr _ptr_type;
    typedef ServiceKrishiSevak_var _var_type;

    static _ptr_type _duplicate(_ptr_type);
    static _ptr_type _narrow(::CORBA::Object_ptr);
    static _ptr_type _unchecked_narrow(::CORBA::Object_ptr);
    
    static _ptr_type _nil();

    static inline void _marshalObjRef(_ptr_type, cdrStream&);

    static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
      omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static _core_attr const char* _PD_repoId;

    // Other IDL defined within this scope.
    
  };

  class _objref_ServiceKrishiSevak :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    ::CORBA::Boolean CallServiceRoutineA(::CORBA::Long num1, ::CORBA::Long& num2, ::CORBA::Long& retNum);
    ::CORBA::Boolean CallServiceRoutineB(::CORBA::Long& num1, ::CORBA::Long& num2);
    ::CORBA::Boolean CreateKrishiSevakProflie(const char* newProfile, ::CORBA::String_INOUT_arg returnmsg);

    inline _objref_ServiceKrishiSevak()  { _PR_setobj(0); }  // nil
    _objref_ServiceKrishiSevak(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_ServiceKrishiSevak();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_ServiceKrishiSevak(const _objref_ServiceKrishiSevak&);
    _objref_ServiceKrishiSevak& operator = (const _objref_ServiceKrishiSevak&);
    // not implemented

    friend class ServiceKrishiSevak;
  };

  class _pof_ServiceKrishiSevak : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_ServiceKrishiSevak() : _OMNI_NS(proxyObjectFactory)(ServiceKrishiSevak::_PD_repoId) {}
    virtual ~_pof_ServiceKrishiSevak();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_ServiceKrishiSevak :
    public virtual omniServant
  {
  public:
    virtual ~_impl_ServiceKrishiSevak();

    virtual ::CORBA::Boolean CallServiceRoutineA(::CORBA::Long num1, ::CORBA::Long& num2, ::CORBA::Long& retNum) = 0;
    virtual ::CORBA::Boolean CallServiceRoutineB(::CORBA::Long& num1, ::CORBA::Long& num2) = 0;
    virtual ::CORBA::Boolean CreateKrishiSevakProflie(const char* newProfile, char*& returnmsg) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


_CORBA_MODULE_END



_CORBA_MODULE POA_KrishiSevak
_CORBA_MODULE_BEG

  class ServiceKrishiSevak :
    public virtual KrishiSevak::_impl_ServiceKrishiSevak,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~ServiceKrishiSevak();

    inline ::KrishiSevak::ServiceKrishiSevak_ptr _this() {
      return (::KrishiSevak::ServiceKrishiSevak_ptr) _do_this(::KrishiSevak::ServiceKrishiSevak::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_KrishiSevak
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr



inline void
KrishiSevak::ServiceKrishiSevak::_marshalObjRef(::KrishiSevak::ServiceKrishiSevak_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_KrishiSevak
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_KrishiSevak
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_KrishiSevak
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_KrishiSevak
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_KrishiSevak
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_KrishiSevak
#endif

#endif  // __KrishiSevak_hh__
