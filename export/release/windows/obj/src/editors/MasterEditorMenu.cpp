// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
#endif
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_editors_CharacterEditorState
#include <editors/CharacterEditorState.h>
#endif
#ifndef INCLUDED_editors_DialogueCharacterEditorState
#include <editors/DialogueCharacterEditorState.h>
#endif
#ifndef INCLUDED_editors_DialogueEditorState
#include <editors/DialogueEditorState.h>
#endif
#ifndef INCLUDED_editors_MasterEditorMenu
#include <editors/MasterEditorMenu.h>
#endif
#ifndef INCLUDED_editors_MenuCharacterEditorState
#include <editors/MenuCharacterEditorState.h>
#endif
#ifndef INCLUDED_editors_WeekEditorState
#include <editors/WeekEditorState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aa1a162bced268b8_18_new,"editors.MasterEditorMenu","new",0xa289ac88,"editors.MasterEditorMenu.new","editors/MasterEditorMenu.hx",18,0x3933e087)
static const ::String _hx_array_data_7d8f0896_1[] = {
	HX_("Week Editor",59,6c,6c,6d),HX_("Menu Character Editor",05,2d,60,f9),HX_("Dialogue Editor",b5,bb,62,71),HX_("Dialogue Portrait Editor",ea,22,45,b5),HX_("Character Editor",84,45,58,b1),
};
HX_LOCAL_STACK_FRAME(_hx_pos_aa1a162bced268b8_32_create,"editors.MasterEditorMenu","create",0xee5b93d4,"editors.MasterEditorMenu.create","editors/MasterEditorMenu.hx",32,0x3933e087)
HX_LOCAL_STACK_FRAME(_hx_pos_aa1a162bced268b8_60_update,"editors.MasterEditorMenu","update",0xf951b2e1,"editors.MasterEditorMenu.update","editors/MasterEditorMenu.hx",60,0x3933e087)
HX_LOCAL_STACK_FRAME(_hx_pos_aa1a162bced268b8_112_changeSelection,"editors.MasterEditorMenu","changeSelection",0x385910e4,"editors.MasterEditorMenu.changeSelection","editors/MasterEditorMenu.hx",112,0x3933e087)
namespace editors{

void MasterEditorMenu_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_aa1a162bced268b8_18_new)
HXLINE(  29)		this->curSelected = 0;
HXLINE(  20)		this->options = ::Array_obj< ::String >::fromData( _hx_array_data_7d8f0896_1,5);
HXLINE(  18)		super::__construct(TransIn,TransOut);
            	}

Dynamic MasterEditorMenu_obj::__CreateEmpty() { return new MasterEditorMenu_obj; }

void *MasterEditorMenu_obj::_hx_vtable = 0;

Dynamic MasterEditorMenu_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MasterEditorMenu_obj > _hx_result = new MasterEditorMenu_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MasterEditorMenu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x01c92cf4) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x01c92cf4;
			} else {
				return inClassId==(int)0x23a57bae;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void MasterEditorMenu_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_aa1a162bced268b8_32_create)
HXLINE(  33)		::flixel::FlxG_obj::camera->bgColor = -16777216;
HXLINE(  36)		::DiscordClient_obj::changePresence(HX_("Editors Main Menu",4c,98,82,a7),null(),null(),null(),null());
HXLINE(  39)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  39)		::String library = null();
HXDLIN(  39)		 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("menuDesat",26,91,04,72));
HXDLIN(  39)		 ::Dynamic bg1;
HXDLIN(  39)		if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  39)			bg1 = imageToReturn;
            		}
            		else {
HXLINE(  39)			bg1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuDesat",26,91,04,72)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            		}
HXDLIN(  39)		 ::flixel::FlxSprite bg2 = bg->loadGraphic(bg1,null(),null(),null(),null(),null());
HXLINE(  40)		bg2->scrollFactor->set(null(),null());
HXLINE(  41)		bg2->set_color(-13290187);
HXLINE(  42)		this->add(bg2);
HXLINE(  44)		this->grpTexts =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  45)		this->add(this->grpTexts);
HXLINE(  47)		{
HXLINE(  47)			int _g = 0;
HXDLIN(  47)			int _g1 = this->options->length;
HXDLIN(  47)			while((_g < _g1)){
HXLINE(  47)				_g = (_g + 1);
HXDLIN(  47)				int i = (_g - 1);
HXLINE(  49)				 ::Alphabet leText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->options->__get(i),true,false,null(),null());
HXLINE(  50)				leText->isMenuItem = true;
HXLINE(  51)				leText->targetY = ( (Float)(i) );
HXLINE(  52)				this->grpTexts->add(leText).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE(  55)		this->changeSelection(null());
HXLINE(  56)		this->super::create();
            	}


void MasterEditorMenu_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_aa1a162bced268b8_60_update)
HXLINE(  61)		if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE(  63)			this->changeSelection(-1);
            		}
HXLINE(  65)		if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE(  67)			this->changeSelection(1);
            		}
HXLINE(  70)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE(  72)			::MusicBeatState_obj::switchState( ::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE(  75)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE(  77)			::String _hx_switch_0 = this->options->__get(this->curSelected);
            			if (  (_hx_switch_0==HX_("Character Editor",84,45,58,b1)) ){
HXLINE(  79)				::MusicBeatState_obj::switchState(::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::editors::CharacterEditorState_obj::__alloc( HX_CTX ,::Character_obj::DEFAULT_CHARACTER,false)) ),false));
HXDLIN(  79)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("Dialogue Editor",b5,bb,62,71)) ){
HXLINE(  87)				::MusicBeatState_obj::switchState(::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::editors::DialogueEditorState_obj::__alloc( HX_CTX ,null(),null())) ),false));
HXDLIN(  87)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("Dialogue Portrait Editor",ea,22,45,b5)) ){
HXLINE(  85)				::MusicBeatState_obj::switchState(::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::editors::DialogueCharacterEditorState_obj::__alloc( HX_CTX ,null(),null())) ),false));
HXDLIN(  85)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("Menu Character Editor",05,2d,60,f9)) ){
HXLINE(  83)				::MusicBeatState_obj::switchState( ::editors::MenuCharacterEditorState_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN(  83)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("Week Editor",59,6c,6c,6d)) ){
HXLINE(  81)				::MusicBeatState_obj::switchState( ::editors::WeekEditorState_obj::__alloc( HX_CTX ,null()));
HXDLIN(  81)				goto _hx_goto_4;
            			}
            			_hx_goto_4:;
HXLINE(  89)			::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
HXLINE(  90)			::FreeplayState_obj::destroyFreeplayVocals();
            		}
HXLINE(  93)		int bullShit = 0;
HXLINE(  94)		{
HXLINE(  94)			int _g = 0;
HXDLIN(  94)			::Array< ::Dynamic> _g1 = this->grpTexts->members;
HXDLIN(  94)			while((_g < _g1->length)){
HXLINE(  94)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN(  94)				_g = (_g + 1);
HXLINE(  96)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE(  97)				bullShit = (bullShit + 1);
HXLINE(  99)				item->set_alpha(((Float)0.6));
HXLINE( 102)				if ((item->targetY == 0)) {
HXLINE( 104)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 108)		this->super::update(elapsed);
            	}


void MasterEditorMenu_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_aa1a162bced268b8_112_changeSelection)
HXLINE( 113)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 113)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 115)		 ::editors::MasterEditorMenu _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 115)		_hx_tmp1->curSelected = (_hx_tmp1->curSelected + change);
HXLINE( 117)		if ((this->curSelected < 0)) {
HXLINE( 118)			this->curSelected = (this->options->length - 1);
            		}
HXLINE( 119)		if ((this->curSelected >= this->options->length)) {
HXLINE( 120)			this->curSelected = 0;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MasterEditorMenu_obj,changeSelection,(void))


::hx::ObjectPtr< MasterEditorMenu_obj > MasterEditorMenu_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MasterEditorMenu_obj > __this = new MasterEditorMenu_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MasterEditorMenu_obj > MasterEditorMenu_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MasterEditorMenu_obj *__this = (MasterEditorMenu_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MasterEditorMenu_obj), true, "editors.MasterEditorMenu"));
	*(void **)__this = MasterEditorMenu_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MasterEditorMenu_obj::MasterEditorMenu_obj()
{
}

void MasterEditorMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MasterEditorMenu);
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(grpTexts,"grpTexts");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MasterEditorMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(grpTexts,"grpTexts");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MasterEditorMenu_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { return ::hx::Val( grpTexts ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MasterEditorMenu_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { grpTexts=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MasterEditorMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("grpTexts",01,f1,99,f0));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MasterEditorMenu_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(MasterEditorMenu_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(MasterEditorMenu_obj,grpTexts),HX_("grpTexts",01,f1,99,f0)},
	{::hx::fsInt,(int)offsetof(MasterEditorMenu_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MasterEditorMenu_obj_sStaticStorageInfo = 0;
#endif

static ::String MasterEditorMenu_obj_sMemberFields[] = {
	HX_("options",5e,33,fe,df),
	HX_("grpTexts",01,f1,99,f0),
	HX_("curSelected",fb,eb,ab,32),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

::hx::Class MasterEditorMenu_obj::__mClass;

void MasterEditorMenu_obj::__register()
{
	MasterEditorMenu_obj _hx_dummy;
	MasterEditorMenu_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("editors.MasterEditorMenu",96,08,8f,7d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MasterEditorMenu_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MasterEditorMenu_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MasterEditorMenu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MasterEditorMenu_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace editors
