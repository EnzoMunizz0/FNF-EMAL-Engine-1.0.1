// Generated by Haxe 4.1.5
#ifndef INCLUDED_openfl_display__GradientType_GradientType_Impl_
#define INCLUDED_openfl_display__GradientType_GradientType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_GradientType,GradientType_Impl_)

namespace openfl{
namespace display{
namespace _GradientType{


class HXCPP_CLASS_ATTRIBUTES GradientType_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GradientType_Impl__obj OBJ_;
		GradientType_Impl__obj();

	public:
		enum { _hx_ClassId = 0x55fdcb61 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._GradientType.GradientType_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._GradientType.GradientType_Impl_"); }

		inline static ::hx::ObjectPtr< GradientType_Impl__obj > __new() {
			::hx::ObjectPtr< GradientType_Impl__obj > __this = new GradientType_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GradientType_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			GradientType_Impl__obj *__this = (GradientType_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GradientType_Impl__obj), false, "openfl.display._GradientType.GradientType_Impl_"));
			*(void **)__this = GradientType_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GradientType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GradientType_Impl_",0a,25,04,a0); }

		static void __boot();
		static  ::Dynamic LINEAR;
		static  ::Dynamic RADIAL;
		static  ::Dynamic fromInt( ::Dynamic value);
		static ::Dynamic fromInt_dyn();

		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static  ::Dynamic toInt( ::Dynamic this1);
		static ::Dynamic toInt_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _GradientType

#endif /* INCLUDED_openfl_display__GradientType_GradientType_Impl_ */ 
