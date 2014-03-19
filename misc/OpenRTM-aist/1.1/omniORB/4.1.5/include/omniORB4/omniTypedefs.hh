// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __omniTypedefs_hh__
#define __omniTypedefs_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_omniTypedefs
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_omniTypedefs
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_omniTypedefs
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





_CORBA_MODULE omniTypedefs

_CORBA_MODULE_BEG

  class ValueBaseSeq_var;

  class ValueBaseSeq : public _CORBA_Unbounded_Sequence_Value< ::CORBA::ValueBase, _CORBA_Value_Element< ::CORBA::ValueBase, ::CORBA::ValueBase_Helper > , ::CORBA::ValueBase_Helper >  {
  public:
    typedef ValueBaseSeq_var _var_type;
    inline ValueBaseSeq() {}
    inline ValueBaseSeq(const ValueBaseSeq& _s)
      : _CORBA_Unbounded_Sequence_Value< ::CORBA::ValueBase, _CORBA_Value_Element< ::CORBA::ValueBase, ::CORBA::ValueBase_Helper > , ::CORBA::ValueBase_Helper > (_s) {}

    inline ValueBaseSeq(_CORBA_ULong _max)
      : _CORBA_Unbounded_Sequence_Value< ::CORBA::ValueBase, _CORBA_Value_Element< ::CORBA::ValueBase, ::CORBA::ValueBase_Helper > , ::CORBA::ValueBase_Helper > (_max) {}
    inline ValueBaseSeq(_CORBA_ULong _max, _CORBA_ULong _len, ::CORBA::ValueBase** _val, _CORBA_Boolean _rel=0)
      : _CORBA_Unbounded_Sequence_Value< ::CORBA::ValueBase, _CORBA_Value_Element< ::CORBA::ValueBase, ::CORBA::ValueBase_Helper > , ::CORBA::ValueBase_Helper > (_max, _len, _val, _rel) {}

  

    inline ValueBaseSeq& operator = (const ValueBaseSeq& _s) {
      _CORBA_Unbounded_Sequence_Value< ::CORBA::ValueBase, _CORBA_Value_Element< ::CORBA::ValueBase, ::CORBA::ValueBase_Helper > , ::CORBA::ValueBase_Helper > ::operator=(_s);
      return *this;
    }
  };

  class ValueBaseSeq_out;

  class ValueBaseSeq_var {
  public:
    inline ValueBaseSeq_var() : _pd_seq(0) {}
    inline ValueBaseSeq_var(ValueBaseSeq* _s) : _pd_seq(_s) {}
    inline ValueBaseSeq_var(const ValueBaseSeq_var& _s) {
      if( _s._pd_seq )  _pd_seq = new ValueBaseSeq(*_s._pd_seq);
      else              _pd_seq = 0;
    }
    inline ~ValueBaseSeq_var() { if( _pd_seq )  delete _pd_seq; }
      
    inline ValueBaseSeq_var& operator = (ValueBaseSeq* _s) {
      if( _pd_seq )  delete _pd_seq;
      _pd_seq = _s;
      return *this;
    }
    inline ValueBaseSeq_var& operator = (const ValueBaseSeq_var& _s) {
      if( _s._pd_seq ) {
        if( !_pd_seq )  _pd_seq = new ValueBaseSeq;
        *_pd_seq = *_s._pd_seq;
      } else if( _pd_seq ) {
        delete _pd_seq;
        _pd_seq = 0;
      }
      return *this;
    }
    inline _CORBA_Value_Element< ::CORBA::ValueBase, ::CORBA::ValueBase_Helper >  operator [] (_CORBA_ULong _s) {
      return (*_pd_seq)[_s];
    }

  

    inline ValueBaseSeq* operator -> () { return _pd_seq; }
    inline const ValueBaseSeq* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
    inline operator ValueBaseSeq& () const { return *_pd_seq; }
#else
    inline operator const ValueBaseSeq& () const { return *_pd_seq; }
    inline operator ValueBaseSeq& () { return *_pd_seq; }
#endif
      
    inline const ValueBaseSeq& in() const { return *_pd_seq; }
    inline ValueBaseSeq&       inout()    { return *_pd_seq; }
    inline ValueBaseSeq*&      out() {
      if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
      return _pd_seq;
    }
    inline ValueBaseSeq* _retn() { ValueBaseSeq* tmp = _pd_seq; _pd_seq = 0; return tmp; }
      
    friend class ValueBaseSeq_out;
    
  private:
    ValueBaseSeq* _pd_seq;
  };

  class ValueBaseSeq_out {
  public:
    inline ValueBaseSeq_out(ValueBaseSeq*& _s) : _data(_s) { _data = 0; }
    inline ValueBaseSeq_out(ValueBaseSeq_var& _s)
      : _data(_s._pd_seq) { _s = (ValueBaseSeq*) 0; }
    inline ValueBaseSeq_out(const ValueBaseSeq_out& _s) : _data(_s._data) {}
    inline ValueBaseSeq_out& operator = (const ValueBaseSeq_out& _s) {
      _data = _s._data;
      return *this;
    }
    inline ValueBaseSeq_out& operator = (ValueBaseSeq* _s) {
      _data = _s;
      return *this;
    }
    inline operator ValueBaseSeq*&()  { return _data; }
    inline ValueBaseSeq*& ptr()       { return _data; }
    inline ValueBaseSeq* operator->() { return _data; }

    inline _CORBA_Value_Element< ::CORBA::ValueBase, ::CORBA::ValueBase_Helper >  operator [] (_CORBA_ULong _i) {
      return (*_data)[_i];
    }

  

    ValueBaseSeq*& _data;

  private:
    ValueBaseSeq_out();
    ValueBaseSeq_out& operator=(const ValueBaseSeq_var&);
  };

  class TypeCodeSeq_var;

  class TypeCodeSeq : public _CORBA_Unbounded_Sequence< ::CORBA::TypeCode_member >  {
  public:
    typedef TypeCodeSeq_var _var_type;
    inline TypeCodeSeq() {}
    inline TypeCodeSeq(const TypeCodeSeq& _s)
      : _CORBA_Unbounded_Sequence< ::CORBA::TypeCode_member > (_s) {}

    inline TypeCodeSeq(_CORBA_ULong _max)
      : _CORBA_Unbounded_Sequence< ::CORBA::TypeCode_member > (_max) {}
    inline TypeCodeSeq(_CORBA_ULong _max, _CORBA_ULong _len, ::CORBA::TypeCode_member* _val, _CORBA_Boolean _rel=0)
      : _CORBA_Unbounded_Sequence< ::CORBA::TypeCode_member > (_max, _len, _val, _rel) {}

  

    inline TypeCodeSeq& operator = (const TypeCodeSeq& _s) {
      _CORBA_Unbounded_Sequence< ::CORBA::TypeCode_member > ::operator=(_s);
      return *this;
    }
  };

  class TypeCodeSeq_out;

  class TypeCodeSeq_var {
  public:
    inline TypeCodeSeq_var() : _pd_seq(0) {}
    inline TypeCodeSeq_var(TypeCodeSeq* _s) : _pd_seq(_s) {}
    inline TypeCodeSeq_var(const TypeCodeSeq_var& _s) {
      if( _s._pd_seq )  _pd_seq = new TypeCodeSeq(*_s._pd_seq);
      else              _pd_seq = 0;
    }
    inline ~TypeCodeSeq_var() { if( _pd_seq )  delete _pd_seq; }
      
    inline TypeCodeSeq_var& operator = (TypeCodeSeq* _s) {
      if( _pd_seq )  delete _pd_seq;
      _pd_seq = _s;
      return *this;
    }
    inline TypeCodeSeq_var& operator = (const TypeCodeSeq_var& _s) {
      if( _s._pd_seq ) {
        if( !_pd_seq )  _pd_seq = new TypeCodeSeq;
        *_pd_seq = *_s._pd_seq;
      } else if( _pd_seq ) {
        delete _pd_seq;
        _pd_seq = 0;
      }
      return *this;
    }
    inline ::CORBA::TypeCode_member& operator [] (_CORBA_ULong _s) {
      return (*_pd_seq)[_s];
    }

  

    inline TypeCodeSeq* operator -> () { return _pd_seq; }
    inline const TypeCodeSeq* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
    inline operator TypeCodeSeq& () const { return *_pd_seq; }
#else
    inline operator const TypeCodeSeq& () const { return *_pd_seq; }
    inline operator TypeCodeSeq& () { return *_pd_seq; }
#endif
      
    inline const TypeCodeSeq& in() const { return *_pd_seq; }
    inline TypeCodeSeq&       inout()    { return *_pd_seq; }
    inline TypeCodeSeq*&      out() {
      if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
      return _pd_seq;
    }
    inline TypeCodeSeq* _retn() { TypeCodeSeq* tmp = _pd_seq; _pd_seq = 0; return tmp; }
      
    friend class TypeCodeSeq_out;
    
  private:
    TypeCodeSeq* _pd_seq;
  };

  class TypeCodeSeq_out {
  public:
    inline TypeCodeSeq_out(TypeCodeSeq*& _s) : _data(_s) { _data = 0; }
    inline TypeCodeSeq_out(TypeCodeSeq_var& _s)
      : _data(_s._pd_seq) { _s = (TypeCodeSeq*) 0; }
    inline TypeCodeSeq_out(const TypeCodeSeq_out& _s) : _data(_s._data) {}
    inline TypeCodeSeq_out& operator = (const TypeCodeSeq_out& _s) {
      _data = _s._data;
      return *this;
    }
    inline TypeCodeSeq_out& operator = (TypeCodeSeq* _s) {
      _data = _s;
      return *this;
    }
    inline operator TypeCodeSeq*&()  { return _data; }
    inline TypeCodeSeq*& ptr()       { return _data; }
    inline TypeCodeSeq* operator->() { return _data; }

    inline ::CORBA::TypeCode_member& operator [] (_CORBA_ULong _i) {
      return (*_data)[_i];
    }

  

    TypeCodeSeq*& _data;

  private:
    TypeCodeSeq_out();
    TypeCodeSeq_out& operator=(const TypeCodeSeq_var&);
  };

_CORBA_MODULE_END



_CORBA_MODULE POA_omniTypedefs
_CORBA_MODULE_BEG

_CORBA_MODULE_END



_CORBA_MODULE OBV_omniTypedefs
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr





#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_omniTypedefs
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_omniTypedefs
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_omniTypedefs
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_omniTypedefs
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_omniTypedefs
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_omniTypedefs
#endif

#endif  // __omniTypedefs_hh__

