// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __CosTime_hh__
#define __CosTime_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_CosTime
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_CosTime
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_CosTime
#endif


#include "COS_sysdep.h"
#ifndef __TimeBase_hh_EXTERNAL_GUARD__
#define __TimeBase_hh_EXTERNAL_GUARD__
#include "TimeBase.hh"
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





_CORBA_MODULE CosTime

_CORBA_MODULE_BEG

  enum TimeComparison { TCEqualTo, TCLessThan, TCGreaterThan, TCIndeterminate /*, __max_TimeComparison=0xffffffff */ };
  typedef TimeComparison& TimeComparison_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_TimeComparison;

  enum ComparisonType { IntervalC, MidC /*, __max_ComparisonType=0xffffffff */ };
  typedef ComparisonType& ComparisonType_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_ComparisonType;

  enum OverlapType { OTContainer, OTContained, OTOverlap, OTNoOverlap /*, __max_OverlapType=0xffffffff */ };
  typedef OverlapType& OverlapType_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_OverlapType;

  class TimeUnavailable : public ::CORBA::UserException {
  public:
    
    

    inline TimeUnavailable() {
      pd_insertToAnyFn    = insertToAnyFn;
      pd_insertToAnyFnNCP = insertToAnyFnNCP;
    }
    TimeUnavailable(const TimeUnavailable&);
    
    TimeUnavailable& operator=(const TimeUnavailable&);
    virtual ~TimeUnavailable();
    virtual void _raise() const;
    static TimeUnavailable* _downcast(::CORBA::Exception*);
    static const TimeUnavailable* _downcast(const ::CORBA::Exception*);
    static inline TimeUnavailable* _narrow(::CORBA::Exception* _e) {
      return _downcast(_e);
    }
    
    inline void operator>>=(cdrStream&) const { }
    inline void operator<<=(cdrStream&) { }

    static _core_attr insertExceptionToAny    insertToAnyFn;
    static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

    virtual ::CORBA::Exception* _NP_duplicate() const;

    static _core_attr const char* _PD_repoId;
    static _core_attr const char* _PD_typeId;

  private:
    virtual const char* _NP_typeId() const;
    virtual const char* _NP_repoId(int*) const;
    virtual void _NP_marshal(cdrStream&) const;
  };

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_TimeUnavailable;

#ifndef __CosTime_mTIO__
#define __CosTime_mTIO__

  class TIO;
  class _objref_TIO;
  class _impl_TIO;
  
  typedef _objref_TIO* TIO_ptr;
  typedef TIO_ptr TIORef;

  class TIO_Helper {
  public:
    typedef TIO_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_TIO, TIO_Helper> TIO_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_TIO,TIO_Helper > TIO_out;

#endif

#ifndef __CosTime_mUTO__
#define __CosTime_mUTO__

  class UTO;
  class _objref_UTO;
  class _impl_UTO;
  
  typedef _objref_UTO* UTO_ptr;
  typedef UTO_ptr UTORef;

  class UTO_Helper {
  public:
    typedef UTO_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_UTO, UTO_Helper> UTO_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_UTO,UTO_Helper > UTO_out;

#endif

  // interface UTO
  class UTO {
  public:
    // Declarations for this interface type.
    typedef UTO_ptr _ptr_type;
    typedef UTO_var _var_type;

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

  class _objref_UTO :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    UTO_ptr absolute_time();
    TimeComparison compare_time(::CosTime::ComparisonType comparison_type, ::CosTime::UTO_ptr uto);
    TIO_ptr time_to_interval(::CosTime::UTO_ptr uto);
    TIO_ptr interval();
    TimeBase::TimeT time();
    TimeBase::InaccuracyT inaccuracy();
    TimeBase::TdfT tdf();
    TimeBase::UtcT utc_time();

    inline _objref_UTO()  { _PR_setobj(0); }  // nil
    _objref_UTO(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_UTO();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_UTO(const _objref_UTO&);
    _objref_UTO& operator = (const _objref_UTO&);
    // not implemented

    friend class UTO;
  };

  class _pof_UTO : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_UTO() : _OMNI_NS(proxyObjectFactory)(UTO::_PD_repoId) {}
    virtual ~_pof_UTO();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_UTO :
    public virtual omniServant
  {
  public:
    virtual ~_impl_UTO();

    virtual UTO_ptr absolute_time() = 0;
    virtual TimeComparison compare_time(::CosTime::ComparisonType comparison_type, ::CosTime::UTO_ptr uto) = 0;
    virtual TIO_ptr time_to_interval(::CosTime::UTO_ptr uto) = 0;
    virtual TIO_ptr interval() = 0;
    virtual TimeBase::TimeT time() = 0;
    virtual TimeBase::InaccuracyT inaccuracy() = 0;
    virtual TimeBase::TdfT tdf() = 0;
    virtual TimeBase::UtcT utc_time() = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_UTO;

#ifndef __CosTime_mTIO__
#define __CosTime_mTIO__

  class TIO;
  class _objref_TIO;
  class _impl_TIO;
  
  typedef _objref_TIO* TIO_ptr;
  typedef TIO_ptr TIORef;

  class TIO_Helper {
  public:
    typedef TIO_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_TIO, TIO_Helper> TIO_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_TIO,TIO_Helper > TIO_out;

#endif

  // interface TIO
  class TIO {
  public:
    // Declarations for this interface type.
    typedef TIO_ptr _ptr_type;
    typedef TIO_var _var_type;

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

  class _objref_TIO :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    OverlapType spans(::CosTime::UTO_ptr time, ::CosTime::TIO_out overlap);
    OverlapType overlaps(::CosTime::TIO_ptr interval, ::CosTime::TIO_out overlap);
    UTO_ptr time();
    TimeBase::IntervalT time_interval();

    inline _objref_TIO()  { _PR_setobj(0); }  // nil
    _objref_TIO(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_TIO();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_TIO(const _objref_TIO&);
    _objref_TIO& operator = (const _objref_TIO&);
    // not implemented

    friend class TIO;
  };

  class _pof_TIO : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_TIO() : _OMNI_NS(proxyObjectFactory)(TIO::_PD_repoId) {}
    virtual ~_pof_TIO();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_TIO :
    public virtual omniServant
  {
  public:
    virtual ~_impl_TIO();

    virtual OverlapType spans(::CosTime::UTO_ptr time, ::CosTime::TIO_out overlap) = 0;
    virtual OverlapType overlaps(::CosTime::TIO_ptr interval, ::CosTime::TIO_out overlap) = 0;
    virtual UTO_ptr time() = 0;
    virtual TimeBase::IntervalT time_interval() = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_TIO;

#ifndef __CosTime_mTimeService__
#define __CosTime_mTimeService__

  class TimeService;
  class _objref_TimeService;
  class _impl_TimeService;
  
  typedef _objref_TimeService* TimeService_ptr;
  typedef TimeService_ptr TimeServiceRef;

  class TimeService_Helper {
  public:
    typedef TimeService_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_TimeService, TimeService_Helper> TimeService_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_TimeService,TimeService_Helper > TimeService_out;

#endif

  // interface TimeService
  class TimeService {
  public:
    // Declarations for this interface type.
    typedef TimeService_ptr _ptr_type;
    typedef TimeService_var _var_type;

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

  class _objref_TimeService :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    UTO_ptr universal_time();
    UTO_ptr secure_universal_time();
    UTO_ptr new_universal_time(::TimeBase::TimeT time, ::TimeBase::InaccuracyT inaccuracy, ::TimeBase::TdfT tdf);
    UTO_ptr uto_from_utc(const ::TimeBase::UtcT& utc);
    TIO_ptr new_interval(::TimeBase::TimeT lower, ::TimeBase::TimeT upper);

    inline _objref_TimeService()  { _PR_setobj(0); }  // nil
    _objref_TimeService(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_TimeService();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_TimeService(const _objref_TimeService&);
    _objref_TimeService& operator = (const _objref_TimeService&);
    // not implemented

    friend class TimeService;
  };

  class _pof_TimeService : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_TimeService() : _OMNI_NS(proxyObjectFactory)(TimeService::_PD_repoId) {}
    virtual ~_pof_TimeService();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_TimeService :
    public virtual omniServant
  {
  public:
    virtual ~_impl_TimeService();

    virtual UTO_ptr universal_time() = 0;
    virtual UTO_ptr secure_universal_time() = 0;
    virtual UTO_ptr new_universal_time(::TimeBase::TimeT time, ::TimeBase::InaccuracyT inaccuracy, ::TimeBase::TdfT tdf) = 0;
    virtual UTO_ptr uto_from_utc(const ::TimeBase::UtcT& utc) = 0;
    virtual TIO_ptr new_interval(::TimeBase::TimeT lower, ::TimeBase::TimeT upper) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_TimeService;

_CORBA_MODULE_END



_CORBA_MODULE POA_CosTime
_CORBA_MODULE_BEG

  class UTO :
    public virtual CosTime::_impl_UTO,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~UTO();

    inline ::CosTime::UTO_ptr _this() {
      return (::CosTime::UTO_ptr) _do_this(::CosTime::UTO::_PD_repoId);
    }
  };

  class TIO :
    public virtual CosTime::_impl_TIO,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~TIO();

    inline ::CosTime::TIO_ptr _this() {
      return (::CosTime::TIO_ptr) _do_this(::CosTime::TIO::_PD_repoId);
    }
  };

  class TimeService :
    public virtual CosTime::_impl_TimeService,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~TimeService();

    inline ::CosTime::TimeService_ptr _this() {
      return (::CosTime::TimeService_ptr) _do_this(::CosTime::TimeService::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_CosTime
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

inline void operator >>=(CosTime::TimeComparison _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (CosTime::TimeComparison& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= CosTime::TCIndeterminate) {
    _e = (CosTime::TimeComparison) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, CosTime::TimeComparison _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, CosTime::TimeComparison& _s);

inline void operator >>=(CosTime::ComparisonType _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (CosTime::ComparisonType& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= CosTime::MidC) {
    _e = (CosTime::ComparisonType) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, CosTime::ComparisonType _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, CosTime::ComparisonType& _s);

inline void operator >>=(CosTime::OverlapType _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (CosTime::OverlapType& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= CosTime::OTNoOverlap) {
    _e = (CosTime::OverlapType) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, CosTime::OverlapType _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, CosTime::OverlapType& _s);

void operator<<=(::CORBA::Any& _a, const CosTime::TimeUnavailable& _s);
void operator<<=(::CORBA::Any& _a, const CosTime::TimeUnavailable* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const CosTime::TimeUnavailable*& _sp);

void operator<<=(::CORBA::Any& _a, CosTime::UTO_ptr _s);
void operator<<=(::CORBA::Any& _a, CosTime::UTO_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, CosTime::UTO_ptr& _s);

void operator<<=(::CORBA::Any& _a, CosTime::TIO_ptr _s);
void operator<<=(::CORBA::Any& _a, CosTime::TIO_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, CosTime::TIO_ptr& _s);

void operator<<=(::CORBA::Any& _a, CosTime::TimeService_ptr _s);
void operator<<=(::CORBA::Any& _a, CosTime::TimeService_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, CosTime::TimeService_ptr& _s);



inline void
CosTime::UTO::_marshalObjRef(::CosTime::UTO_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}


inline void
CosTime::TIO::_marshalObjRef(::CosTime::TIO_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}


inline void
CosTime::TimeService::_marshalObjRef(::CosTime::TimeService_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_CosTime
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_CosTime
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_CosTime
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_CosTime
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_CosTime
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_CosTime
#endif

#endif  // __CosTime_hh__

