#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<UnityEngine.Experimental.XR.FrameReceivedEventArgs>
struct Action_1_t2760547698;
// System.Action`1<UnityEngine.Experimental.XR.PlaneAddedEventArgs>
struct Action_1_t2722643320;
// System.Action`1<UnityEngine.Experimental.XR.PlaneRemovedEventArgs>
struct Action_1_t1739597377;
// System.Action`1<UnityEngine.Experimental.XR.PlaneUpdatedEventArgs>
struct Action_1_t521953446;
// System.Action`1<UnityEngine.Experimental.XR.ReferencePointUpdatedEventArgs>
struct Action_1_t2218980328;
// System.Action`1<UnityEngine.Experimental.XR.SessionTrackingStateChangedEventArgs>
struct Action_1_t2515503250;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>,System.Collections.DictionaryEntry>
struct Transform_1_t3648916398;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>,System.Collections.DictionaryEntry>
struct Transform_1_t753573090;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate,System.Collections.DictionaryEntry>
struct Transform_1_t3455874290;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate,System.Collections.DictionaryEntry>
struct Transform_1_t602873398;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>,System.Collections.DictionaryEntry>
struct Transform_1_t4131697049;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>,System.Collections.DictionaryEntry>
struct Transform_1_t1853193634;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>
struct Dictionary_2_t2760358902;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>
struct Dictionary_2_t2706875346;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate>
struct Dictionary_2_t820068610;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate>
struct Dictionary_2_t204178958;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>>
struct Dictionary_2_t3245361703;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>>
struct Dictionary_2_t757416466;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>
struct Func_2_t2975102603;
// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>[]
struct Func_2U5BU5D_t503537386;
// System.Func`3<System.Object,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>
struct Func_3_t2197716167;
// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>
struct Func_3_t2921619047;
// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>[]
struct Func_3U5BU5D_t1903161374;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Void
struct Void_t1185182177;
// UnityEngine.Experimental.ISubsystemDescriptor
struct ISubsystemDescriptor_t515866703;
// UnityEngine.Experimental.SubsystemDescriptorBase
struct SubsystemDescriptorBase_t2374447182;
// UnityEngine.Experimental.Subsystem`1<System.Object>
struct Subsystem_1_t4274336850;
// UnityEngine.Experimental.Subsystem`1<UnityEngine.Experimental.XR.XRCameraSubsystemDescriptor>
struct Subsystem_1_t588646725;
// UnityEngine.Experimental.Subsystem`1<UnityEngine.Experimental.XR.XRPlaneSubsystemDescriptor>
struct Subsystem_1_t1428396990;
// UnityEngine.Experimental.Subsystem`1<UnityEngine.Experimental.XR.XRReferencePointSubsystemDescriptor>
struct Subsystem_1_t2853778384;
// UnityEngine.Experimental.XR.XRCameraSubsystem
struct XRCameraSubsystem_t4195795144;
// UnityEngine.Experimental.XR.XRCameraSubsystemDescriptor
struct XRCameraSubsystemDescriptor_t3689383335;
// UnityEngine.Experimental.XR.XRPlaneSubsystem
struct XRPlaneSubsystem_t2260142932;
// UnityEngine.Experimental.XR.XRPlaneSubsystemDescriptor
struct XRPlaneSubsystemDescriptor_t234166304;
// UnityEngine.Experimental.XR.XRReferencePointSubsystem
struct XRReferencePointSubsystem_t416875062;
// UnityEngine.Experimental.XR.XRReferencePointSubsystemDescriptor
struct XRReferencePointSubsystemDescriptor_t1659547698;
// UnityEngine.Experimental.XR.XRSessionSubsystem
struct XRSessionSubsystem_t3616338244;
// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionAvailability>
struct Promise_1_t3923167537;
// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>
struct Promise_1_t1435222300;
// UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate
struct TryGetColorCorrectionDelegate_t1034812311;
// UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate[]
struct TryGetColorCorrectionDelegateU5BU5D_t310495278;
// UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate
struct AttachReferencePointDelegate_t418922659;
// UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate[]
struct AttachReferencePointDelegateU5BU5D_t1752461682;
// UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>
struct AsyncDelegate_1_t3460105404;
// UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>[]
struct AsyncDelegate_1U5BU5D_t986318037;
// UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>[]
struct AsyncDelegate_1U5BU5D_t3002781918;

extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* Color_t2555686324_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t204178958_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2706875346_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2760358902_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3245361703_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t757416466_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t820068610_il2cpp_TypeInfo_var;
extern RuntimeClass* Pose_t545244865_il2cpp_TypeInfo_var;
extern RuntimeClass* TrackableId_t1251031970_il2cpp_TypeInfo_var;
extern RuntimeClass* XRCameraExtensions_t1293988219_il2cpp_TypeInfo_var;
extern RuntimeClass* XRPlaneExtensions_t1202600805_il2cpp_TypeInfo_var;
extern RuntimeClass* XRReferencePointExtensions_t125072412_il2cpp_TypeInfo_var;
extern RuntimeClass* XRSessionExtensions_t411788579_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1165407477;
extern String_t* _stringLiteral2235816782;
extern String_t* _stringLiteral834956432;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1560576558_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m2113858240_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m601792371_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1771204320_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1921437841_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2975023327_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m383910843_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m49728138_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m555241001_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m2124544062_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m3033294665_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m3827254201_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m3849172357_RuntimeMethod_var;
extern const RuntimeMethod* Func_3_Invoke_m2530530313_RuntimeMethod_var;
extern const RuntimeMethod* Subsystem_1_get_SubsystemDescriptor_m2169025228_RuntimeMethod_var;
extern const RuntimeMethod* Subsystem_1_get_SubsystemDescriptor_m3649074082_RuntimeMethod_var;
extern const RuntimeMethod* Subsystem_1_get_SubsystemDescriptor_m441071667_RuntimeMethod_var;
extern const RuntimeMethod* XRCameraExtensions_TryGetColorCorrection_m3844756087_RuntimeMethod_var;
extern const RuntimeMethod* XRPlaneExtensions_GetTrackingState_m2696238282_RuntimeMethod_var;
extern const RuntimeMethod* XRReferencePointExtensions_ActivateExtensions_m2683210974_RuntimeMethod_var;
extern const RuntimeMethod* XRReferencePointExtensions_UpdateCurrentHandler_TisAttachReferencePointDelegate_t418922659_m4209335079_RuntimeMethod_var;
extern const RuntimeMethod* XRSessionExtensions_ExecuteAsync_TisSessionAvailability_t4252731961_m2904076345_RuntimeMethod_var;
extern const RuntimeMethod* XRSessionExtensions_ExecuteAsync_TisSessionInstallationStatus_t1764786724_m1224681037_RuntimeMethod_var;
extern const uint32_t AttachReferencePointDelegate_BeginInvoke_m455971734_MetadataUsageId;
extern const uint32_t TryGetColorCorrectionDelegate_BeginInvoke_m1810176191_MetadataUsageId;
extern const uint32_t XRCameraExtensions_RegisterIsPermissionGrantedHandler_m23889859_MetadataUsageId;
extern const uint32_t XRCameraExtensions_TryGetColorCorrection_m3844756087_MetadataUsageId;
extern const uint32_t XRCameraExtensions__cctor_m3236015190_MetadataUsageId;
extern const uint32_t XRPlaneExtensions_GetTrackingState_m2696238282_MetadataUsageId;
extern const uint32_t XRPlaneExtensions_RegisterGetTrackingStateHandler_m3719762041_MetadataUsageId;
extern const uint32_t XRPlaneExtensions__cctor_m1656397022_MetadataUsageId;
extern const uint32_t XRReferencePointExtensions_ActivateExtensions_m2683210974_MetadataUsageId;
extern const uint32_t XRReferencePointExtensions_AttachReferencePoint_m42308643_MetadataUsageId;
extern const uint32_t XRReferencePointExtensions_RegisterAttachReferencePointHandler_m2848125376_MetadataUsageId;
extern const uint32_t XRReferencePointExtensions__cctor_m3153365008_MetadataUsageId;
extern const uint32_t XRSessionExtensions_GetAvailabilityAsync_m1573784747_MetadataUsageId;
extern const uint32_t XRSessionExtensions_InstallAsync_m658298074_MetadataUsageId;
extern const uint32_t XRSessionExtensions_RegisterGetAvailabilityAsyncHandler_m3177527582_MetadataUsageId;
extern const uint32_t XRSessionExtensions__cctor_m298900539_MetadataUsageId;



#ifndef U3CMODULEU3E_T692745542_H
#define U3CMODULEU3E_T692745542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745542 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745542_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DICTIONARY_2_T2760358902_H
#define DICTIONARY_2_T2760358902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>
struct  Dictionary_2_t2760358902  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Func_2U5BU5D_t503537386* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2760358902, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2760358902, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2760358902, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2760358902, ___valueSlots_7)); }
	inline Func_2U5BU5D_t503537386* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Func_2U5BU5D_t503537386** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Func_2U5BU5D_t503537386* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2760358902, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2760358902, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2760358902, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2760358902, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2760358902, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2760358902, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2760358902, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2760358902_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3648916398 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2760358902_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3648916398 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3648916398 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3648916398 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2760358902_H
#ifndef DICTIONARY_2_T2706875346_H
#define DICTIONARY_2_T2706875346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>
struct  Dictionary_2_t2706875346  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Func_3U5BU5D_t1903161374* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2706875346, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2706875346, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2706875346, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2706875346, ___valueSlots_7)); }
	inline Func_3U5BU5D_t1903161374* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Func_3U5BU5D_t1903161374** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Func_3U5BU5D_t1903161374* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2706875346, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2706875346, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2706875346, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2706875346, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2706875346, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2706875346, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2706875346, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2706875346_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t753573090 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2706875346_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t753573090 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t753573090 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t753573090 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2706875346_H
#ifndef DICTIONARY_2_T820068610_H
#define DICTIONARY_2_T820068610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate>
struct  Dictionary_2_t820068610  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	TryGetColorCorrectionDelegateU5BU5D_t310495278* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t820068610, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t820068610, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t820068610, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t820068610, ___valueSlots_7)); }
	inline TryGetColorCorrectionDelegateU5BU5D_t310495278* get_valueSlots_7() const { return ___valueSlots_7; }
	inline TryGetColorCorrectionDelegateU5BU5D_t310495278** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(TryGetColorCorrectionDelegateU5BU5D_t310495278* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t820068610, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t820068610, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t820068610, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t820068610, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t820068610, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t820068610, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t820068610, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t820068610_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3455874290 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t820068610_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3455874290 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3455874290 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3455874290 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T820068610_H
#ifndef DICTIONARY_2_T204178958_H
#define DICTIONARY_2_T204178958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate>
struct  Dictionary_2_t204178958  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	AttachReferencePointDelegateU5BU5D_t1752461682* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t204178958, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t204178958, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t204178958, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t204178958, ___valueSlots_7)); }
	inline AttachReferencePointDelegateU5BU5D_t1752461682* get_valueSlots_7() const { return ___valueSlots_7; }
	inline AttachReferencePointDelegateU5BU5D_t1752461682** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(AttachReferencePointDelegateU5BU5D_t1752461682* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t204178958, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t204178958, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t204178958, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t204178958, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t204178958, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t204178958, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t204178958, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t204178958_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t602873398 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t204178958_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t602873398 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t602873398 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t602873398 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T204178958_H
#ifndef DICTIONARY_2_T3245361703_H
#define DICTIONARY_2_T3245361703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>>
struct  Dictionary_2_t3245361703  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	AsyncDelegate_1U5BU5D_t986318037* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3245361703, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3245361703, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3245361703, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3245361703, ___valueSlots_7)); }
	inline AsyncDelegate_1U5BU5D_t986318037* get_valueSlots_7() const { return ___valueSlots_7; }
	inline AsyncDelegate_1U5BU5D_t986318037** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(AsyncDelegate_1U5BU5D_t986318037* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3245361703, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3245361703, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3245361703, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3245361703, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3245361703, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3245361703, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3245361703, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3245361703_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t4131697049 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3245361703_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t4131697049 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t4131697049 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t4131697049 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3245361703_H
#ifndef DICTIONARY_2_T757416466_H
#define DICTIONARY_2_T757416466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>>
struct  Dictionary_2_t757416466  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	AsyncDelegate_1U5BU5D_t3002781918* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t757416466, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t757416466, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t757416466, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t757416466, ___valueSlots_7)); }
	inline AsyncDelegate_1U5BU5D_t3002781918* get_valueSlots_7() const { return ___valueSlots_7; }
	inline AsyncDelegate_1U5BU5D_t3002781918** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(AsyncDelegate_1U5BU5D_t3002781918* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t757416466, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t757416466, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t757416466, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t757416466, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t757416466, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t757416466, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t757416466, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t757416466_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1853193634 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t757416466_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1853193634 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1853193634 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1853193634 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T757416466_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef CUSTOMYIELDINSTRUCTION_T1895667560_H
#define CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t1895667560  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifndef SESSIONAVAILABILITYEXTENSIONS_T188051186_H
#define SESSIONAVAILABILITYEXTENSIONS_T188051186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.SessionAvailabilityExtensions
struct  SessionAvailabilityExtensions_t188051186  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SESSIONAVAILABILITYEXTENSIONS_T188051186_H
#ifndef XRCAMERAEXTENSIONS_T1293988219_H
#define XRCAMERAEXTENSIONS_T1293988219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.XRCameraExtensions
struct  XRCameraExtensions_t1293988219  : public RuntimeObject
{
public:

public:
};

struct XRCameraExtensions_t1293988219_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_IsPermissionGrantedDelegates
	Dictionary_2_t2760358902 * ___s_IsPermissionGrantedDelegates_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_TryGetColorCorrectionDelegates
	Dictionary_2_t820068610 * ___s_TryGetColorCorrectionDelegates_1;

public:
	inline static int32_t get_offset_of_s_IsPermissionGrantedDelegates_0() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t1293988219_StaticFields, ___s_IsPermissionGrantedDelegates_0)); }
	inline Dictionary_2_t2760358902 * get_s_IsPermissionGrantedDelegates_0() const { return ___s_IsPermissionGrantedDelegates_0; }
	inline Dictionary_2_t2760358902 ** get_address_of_s_IsPermissionGrantedDelegates_0() { return &___s_IsPermissionGrantedDelegates_0; }
	inline void set_s_IsPermissionGrantedDelegates_0(Dictionary_2_t2760358902 * value)
	{
		___s_IsPermissionGrantedDelegates_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsPermissionGrantedDelegates_0), value);
	}

	inline static int32_t get_offset_of_s_TryGetColorCorrectionDelegates_1() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t1293988219_StaticFields, ___s_TryGetColorCorrectionDelegates_1)); }
	inline Dictionary_2_t820068610 * get_s_TryGetColorCorrectionDelegates_1() const { return ___s_TryGetColorCorrectionDelegates_1; }
	inline Dictionary_2_t820068610 ** get_address_of_s_TryGetColorCorrectionDelegates_1() { return &___s_TryGetColorCorrectionDelegates_1; }
	inline void set_s_TryGetColorCorrectionDelegates_1(Dictionary_2_t820068610 * value)
	{
		___s_TryGetColorCorrectionDelegates_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_TryGetColorCorrectionDelegates_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRCAMERAEXTENSIONS_T1293988219_H
#ifndef XRPLANEEXTENSIONS_T1202600805_H
#define XRPLANEEXTENSIONS_T1202600805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.XRPlaneExtensions
struct  XRPlaneExtensions_t1202600805  : public RuntimeObject
{
public:

public:
};

struct XRPlaneExtensions_t1202600805_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>> UnityEngine.XR.ARExtensions.XRPlaneExtensions::s_GetTrackingStateDelegates
	Dictionary_2_t2706875346 * ___s_GetTrackingStateDelegates_0;

public:
	inline static int32_t get_offset_of_s_GetTrackingStateDelegates_0() { return static_cast<int32_t>(offsetof(XRPlaneExtensions_t1202600805_StaticFields, ___s_GetTrackingStateDelegates_0)); }
	inline Dictionary_2_t2706875346 * get_s_GetTrackingStateDelegates_0() const { return ___s_GetTrackingStateDelegates_0; }
	inline Dictionary_2_t2706875346 ** get_address_of_s_GetTrackingStateDelegates_0() { return &___s_GetTrackingStateDelegates_0; }
	inline void set_s_GetTrackingStateDelegates_0(Dictionary_2_t2706875346 * value)
	{
		___s_GetTrackingStateDelegates_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_GetTrackingStateDelegates_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRPLANEEXTENSIONS_T1202600805_H
#ifndef XRREFERENCEPOINTEXTENSIONS_T125072412_H
#define XRREFERENCEPOINTEXTENSIONS_T125072412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.XRReferencePointExtensions
struct  XRReferencePointExtensions_t125072412  : public RuntimeObject
{
public:

public:
};

struct XRReferencePointExtensions_t125072412_StaticFields
{
public:
	// UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate UnityEngine.XR.ARExtensions.XRReferencePointExtensions::s_CurrentAttachDelegate
	AttachReferencePointDelegate_t418922659 * ___s_CurrentAttachDelegate_0;
	// UnityEngine.Experimental.XR.XRReferencePointSubsystem UnityEngine.XR.ARExtensions.XRReferencePointExtensions::s_CurrentSubsystem
	XRReferencePointSubsystem_t416875062 * ___s_CurrentSubsystem_1;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate> UnityEngine.XR.ARExtensions.XRReferencePointExtensions::s_AttachReferencePointHandlers
	Dictionary_2_t204178958 * ___s_AttachReferencePointHandlers_2;

public:
	inline static int32_t get_offset_of_s_CurrentAttachDelegate_0() { return static_cast<int32_t>(offsetof(XRReferencePointExtensions_t125072412_StaticFields, ___s_CurrentAttachDelegate_0)); }
	inline AttachReferencePointDelegate_t418922659 * get_s_CurrentAttachDelegate_0() const { return ___s_CurrentAttachDelegate_0; }
	inline AttachReferencePointDelegate_t418922659 ** get_address_of_s_CurrentAttachDelegate_0() { return &___s_CurrentAttachDelegate_0; }
	inline void set_s_CurrentAttachDelegate_0(AttachReferencePointDelegate_t418922659 * value)
	{
		___s_CurrentAttachDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_CurrentAttachDelegate_0), value);
	}

	inline static int32_t get_offset_of_s_CurrentSubsystem_1() { return static_cast<int32_t>(offsetof(XRReferencePointExtensions_t125072412_StaticFields, ___s_CurrentSubsystem_1)); }
	inline XRReferencePointSubsystem_t416875062 * get_s_CurrentSubsystem_1() const { return ___s_CurrentSubsystem_1; }
	inline XRReferencePointSubsystem_t416875062 ** get_address_of_s_CurrentSubsystem_1() { return &___s_CurrentSubsystem_1; }
	inline void set_s_CurrentSubsystem_1(XRReferencePointSubsystem_t416875062 * value)
	{
		___s_CurrentSubsystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_CurrentSubsystem_1), value);
	}

	inline static int32_t get_offset_of_s_AttachReferencePointHandlers_2() { return static_cast<int32_t>(offsetof(XRReferencePointExtensions_t125072412_StaticFields, ___s_AttachReferencePointHandlers_2)); }
	inline Dictionary_2_t204178958 * get_s_AttachReferencePointHandlers_2() const { return ___s_AttachReferencePointHandlers_2; }
	inline Dictionary_2_t204178958 ** get_address_of_s_AttachReferencePointHandlers_2() { return &___s_AttachReferencePointHandlers_2; }
	inline void set_s_AttachReferencePointHandlers_2(Dictionary_2_t204178958 * value)
	{
		___s_AttachReferencePointHandlers_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_AttachReferencePointHandlers_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRREFERENCEPOINTEXTENSIONS_T125072412_H
#ifndef XRSESSIONEXTENSIONS_T411788579_H
#define XRSESSIONEXTENSIONS_T411788579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.XRSessionExtensions
struct  XRSessionExtensions_t411788579  : public RuntimeObject
{
public:

public:
};

struct XRSessionExtensions_t411788579_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>> UnityEngine.XR.ARExtensions.XRSessionExtensions::s_InstallAsyncDelegates
	Dictionary_2_t757416466 * ___s_InstallAsyncDelegates_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>> UnityEngine.XR.ARExtensions.XRSessionExtensions::s_GetAvailabilityAsyncDelegates
	Dictionary_2_t3245361703 * ___s_GetAvailabilityAsyncDelegates_1;

public:
	inline static int32_t get_offset_of_s_InstallAsyncDelegates_0() { return static_cast<int32_t>(offsetof(XRSessionExtensions_t411788579_StaticFields, ___s_InstallAsyncDelegates_0)); }
	inline Dictionary_2_t757416466 * get_s_InstallAsyncDelegates_0() const { return ___s_InstallAsyncDelegates_0; }
	inline Dictionary_2_t757416466 ** get_address_of_s_InstallAsyncDelegates_0() { return &___s_InstallAsyncDelegates_0; }
	inline void set_s_InstallAsyncDelegates_0(Dictionary_2_t757416466 * value)
	{
		___s_InstallAsyncDelegates_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_InstallAsyncDelegates_0), value);
	}

	inline static int32_t get_offset_of_s_GetAvailabilityAsyncDelegates_1() { return static_cast<int32_t>(offsetof(XRSessionExtensions_t411788579_StaticFields, ___s_GetAvailabilityAsyncDelegates_1)); }
	inline Dictionary_2_t3245361703 * get_s_GetAvailabilityAsyncDelegates_1() const { return ___s_GetAvailabilityAsyncDelegates_1; }
	inline Dictionary_2_t3245361703 ** get_address_of_s_GetAvailabilityAsyncDelegates_1() { return &___s_GetAvailabilityAsyncDelegates_1; }
	inline void set_s_GetAvailabilityAsyncDelegates_1(Dictionary_2_t3245361703 * value)
	{
		___s_GetAvailabilityAsyncDelegates_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_GetAvailabilityAsyncDelegates_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRSESSIONEXTENSIONS_T411788579_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef TRACKABLEID_T1251031970_H
#define TRACKABLEID_T1251031970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.TrackableId
struct  TrackableId_t1251031970 
{
public:
	// System.UInt64 UnityEngine.Experimental.XR.TrackableId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.Experimental.XR.TrackableId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(TrackableId_t1251031970, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(TrackableId_t1251031970, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct TrackableId_t1251031970_StaticFields
{
public:
	// UnityEngine.Experimental.XR.TrackableId UnityEngine.Experimental.XR.TrackableId::s_InvalidId
	TrackableId_t1251031970  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(TrackableId_t1251031970_StaticFields, ___s_InvalidId_0)); }
	inline TrackableId_t1251031970  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline TrackableId_t1251031970 * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(TrackableId_t1251031970  value)
	{
		___s_InvalidId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEID_T1251031970_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef SUBSYSTEM_T89723475_H
#define SUBSYSTEM_T89723475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Subsystem
struct  Subsystem_t89723475  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Experimental.Subsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Experimental.ISubsystemDescriptor UnityEngine.Experimental.Subsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Subsystem_t89723475, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_subsystemDescriptor_1() { return static_cast<int32_t>(offsetof(Subsystem_t89723475, ___m_subsystemDescriptor_1)); }
	inline RuntimeObject* get_m_subsystemDescriptor_1() const { return ___m_subsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_1() { return &___m_subsystemDescriptor_1; }
	inline void set_m_subsystemDescriptor_1(RuntimeObject* value)
	{
		___m_subsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_subsystemDescriptor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Subsystem
struct Subsystem_t89723475_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Subsystem
struct Subsystem_t89723475_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
#endif // SUBSYSTEM_T89723475_H
#ifndef SUBSYSTEMDESCRIPTORBASE_T2374447182_H
#define SUBSYSTEMDESCRIPTORBASE_T2374447182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.SubsystemDescriptorBase
struct  SubsystemDescriptorBase_t2374447182  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Experimental.SubsystemDescriptorBase::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptorBase_t2374447182, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.SubsystemDescriptorBase
struct SubsystemDescriptorBase_t2374447182_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Experimental.SubsystemDescriptorBase
struct SubsystemDescriptorBase_t2374447182_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // SUBSYSTEMDESCRIPTORBASE_T2374447182_H
#ifndef TRACKINGSTATE_T1935085052_H
#define TRACKINGSTATE_T1935085052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.TrackingState
struct  TrackingState_t1935085052 
{
public:
	// System.Int32 UnityEngine.Experimental.XR.TrackingState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TrackingState_t1935085052, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKINGSTATE_T1935085052_H
#ifndef POSE_T545244865_H
#define POSE_T545244865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Pose
struct  Pose_t545244865 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t3722313464  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t2301928331  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t545244865, ___position_0)); }
	inline Vector3_t3722313464  get_position_0() const { return ___position_0; }
	inline Vector3_t3722313464 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3722313464  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t545244865, ___rotation_1)); }
	inline Quaternion_t2301928331  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t2301928331 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t2301928331  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t545244865_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t545244865  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t545244865_StaticFields, ___k_Identity_2)); }
	inline Pose_t545244865  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t545244865 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t545244865  value)
	{
		___k_Identity_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSE_T545244865_H
#ifndef SESSIONAVAILABILITY_T4252731961_H
#define SESSIONAVAILABILITY_T4252731961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.SessionAvailability
struct  SessionAvailability_t4252731961 
{
public:
	// System.Int32 UnityEngine.XR.ARExtensions.SessionAvailability::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SessionAvailability_t4252731961, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SESSIONAVAILABILITY_T4252731961_H
#ifndef SESSIONINSTALLATIONSTATUS_T1764786724_H
#define SESSIONINSTALLATIONSTATUS_T1764786724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.SessionInstallationStatus
struct  SessionInstallationStatus_t1764786724 
{
public:
	// System.Int32 UnityEngine.XR.ARExtensions.SessionInstallationStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SessionInstallationStatus_t1764786724, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SESSIONINSTALLATIONSTATUS_T1764786724_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef SUBSYSTEMDESCRIPTOR_1_T1932951644_H
#define SUBSYSTEMDESCRIPTOR_1_T1932951644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.SubsystemDescriptor`1<UnityEngine.Experimental.XR.XRCameraSubsystem>
struct  SubsystemDescriptor_1_t1932951644  : public SubsystemDescriptorBase_t2374447182
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEMDESCRIPTOR_1_T1932951644_H
#ifndef SUBSYSTEMDESCRIPTOR_1_T4292266728_H
#define SUBSYSTEMDESCRIPTOR_1_T4292266728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.SubsystemDescriptor`1<UnityEngine.Experimental.XR.XRPlaneSubsystem>
struct  SubsystemDescriptor_1_t4292266728  : public SubsystemDescriptorBase_t2374447182
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEMDESCRIPTOR_1_T4292266728_H
#ifndef SUBSYSTEMDESCRIPTOR_1_T2448998858_H
#define SUBSYSTEMDESCRIPTOR_1_T2448998858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.SubsystemDescriptor`1<UnityEngine.Experimental.XR.XRReferencePointSubsystem>
struct  SubsystemDescriptor_1_t2448998858  : public SubsystemDescriptorBase_t2374447182
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEMDESCRIPTOR_1_T2448998858_H
#ifndef SUBSYSTEM_1_T588646725_H
#define SUBSYSTEM_1_T588646725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Subsystem`1<UnityEngine.Experimental.XR.XRCameraSubsystemDescriptor>
struct  Subsystem_1_t588646725  : public Subsystem_t89723475
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEM_1_T588646725_H
#ifndef SUBSYSTEM_1_T1428396990_H
#define SUBSYSTEM_1_T1428396990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Subsystem`1<UnityEngine.Experimental.XR.XRPlaneSubsystemDescriptor>
struct  Subsystem_1_t1428396990  : public Subsystem_t89723475
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEM_1_T1428396990_H
#ifndef SUBSYSTEM_1_T2853778384_H
#define SUBSYSTEM_1_T2853778384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Subsystem`1<UnityEngine.Experimental.XR.XRReferencePointSubsystemDescriptor>
struct  Subsystem_1_t2853778384  : public Subsystem_t89723475
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEM_1_T2853778384_H
#ifndef SUBSYSTEM_1_T2383066733_H
#define SUBSYSTEM_1_T2383066733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Subsystem`1<UnityEngine.Experimental.XR.XRSessionSubsystemDescriptor>
struct  Subsystem_1_t2383066733  : public Subsystem_t89723475
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEM_1_T2383066733_H
#ifndef PROMISE_1_T3923167537_H
#define PROMISE_1_T3923167537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionAvailability>
struct  Promise_1_t3923167537  : public CustomYieldInstruction_t1895667560
{
public:
	// T UnityEngine.XR.ARExtensions.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARExtensions.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_t3923167537, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_t3923167537, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROMISE_1_T3923167537_H
#ifndef PROMISE_1_T1435222300_H
#define PROMISE_1_T1435222300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>
struct  Promise_1_t1435222300  : public CustomYieldInstruction_t1895667560
{
public:
	// T UnityEngine.XR.ARExtensions.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARExtensions.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_t1435222300, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_t1435222300, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROMISE_1_T1435222300_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef FUNC_2_T2975102603_H
#define FUNC_2_T2975102603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>
struct  Func_2_t2975102603  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T2975102603_H
#ifndef FUNC_3_T2921619047_H
#define FUNC_3_T2921619047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>
struct  Func_3_t2921619047  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T2921619047_H
#ifndef XRCAMERASUBSYSTEM_T4195795144_H
#define XRCAMERASUBSYSTEM_T4195795144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRCameraSubsystem
struct  XRCameraSubsystem_t4195795144  : public Subsystem_1_t588646725
{
public:
	// System.Action`1<UnityEngine.Experimental.XR.FrameReceivedEventArgs> UnityEngine.Experimental.XR.XRCameraSubsystem::FrameReceived
	Action_1_t2760547698 * ___FrameReceived_2;

public:
	inline static int32_t get_offset_of_FrameReceived_2() { return static_cast<int32_t>(offsetof(XRCameraSubsystem_t4195795144, ___FrameReceived_2)); }
	inline Action_1_t2760547698 * get_FrameReceived_2() const { return ___FrameReceived_2; }
	inline Action_1_t2760547698 ** get_address_of_FrameReceived_2() { return &___FrameReceived_2; }
	inline void set_FrameReceived_2(Action_1_t2760547698 * value)
	{
		___FrameReceived_2 = value;
		Il2CppCodeGenWriteBarrier((&___FrameReceived_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRCAMERASUBSYSTEM_T4195795144_H
#ifndef XRCAMERASUBSYSTEMDESCRIPTOR_T3689383335_H
#define XRCAMERASUBSYSTEMDESCRIPTOR_T3689383335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRCameraSubsystemDescriptor
struct  XRCameraSubsystemDescriptor_t3689383335  : public SubsystemDescriptor_1_t1932951644
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRCAMERASUBSYSTEMDESCRIPTOR_T3689383335_H
#ifndef XRPLANESUBSYSTEM_T2260142932_H
#define XRPLANESUBSYSTEM_T2260142932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRPlaneSubsystem
struct  XRPlaneSubsystem_t2260142932  : public Subsystem_1_t1428396990
{
public:
	// System.Action`1<UnityEngine.Experimental.XR.PlaneAddedEventArgs> UnityEngine.Experimental.XR.XRPlaneSubsystem::PlaneAdded
	Action_1_t2722643320 * ___PlaneAdded_2;
	// System.Action`1<UnityEngine.Experimental.XR.PlaneUpdatedEventArgs> UnityEngine.Experimental.XR.XRPlaneSubsystem::PlaneUpdated
	Action_1_t521953446 * ___PlaneUpdated_3;
	// System.Action`1<UnityEngine.Experimental.XR.PlaneRemovedEventArgs> UnityEngine.Experimental.XR.XRPlaneSubsystem::PlaneRemoved
	Action_1_t1739597377 * ___PlaneRemoved_4;

public:
	inline static int32_t get_offset_of_PlaneAdded_2() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_t2260142932, ___PlaneAdded_2)); }
	inline Action_1_t2722643320 * get_PlaneAdded_2() const { return ___PlaneAdded_2; }
	inline Action_1_t2722643320 ** get_address_of_PlaneAdded_2() { return &___PlaneAdded_2; }
	inline void set_PlaneAdded_2(Action_1_t2722643320 * value)
	{
		___PlaneAdded_2 = value;
		Il2CppCodeGenWriteBarrier((&___PlaneAdded_2), value);
	}

	inline static int32_t get_offset_of_PlaneUpdated_3() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_t2260142932, ___PlaneUpdated_3)); }
	inline Action_1_t521953446 * get_PlaneUpdated_3() const { return ___PlaneUpdated_3; }
	inline Action_1_t521953446 ** get_address_of_PlaneUpdated_3() { return &___PlaneUpdated_3; }
	inline void set_PlaneUpdated_3(Action_1_t521953446 * value)
	{
		___PlaneUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((&___PlaneUpdated_3), value);
	}

	inline static int32_t get_offset_of_PlaneRemoved_4() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_t2260142932, ___PlaneRemoved_4)); }
	inline Action_1_t1739597377 * get_PlaneRemoved_4() const { return ___PlaneRemoved_4; }
	inline Action_1_t1739597377 ** get_address_of_PlaneRemoved_4() { return &___PlaneRemoved_4; }
	inline void set_PlaneRemoved_4(Action_1_t1739597377 * value)
	{
		___PlaneRemoved_4 = value;
		Il2CppCodeGenWriteBarrier((&___PlaneRemoved_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRPLANESUBSYSTEM_T2260142932_H
#ifndef XRPLANESUBSYSTEMDESCRIPTOR_T234166304_H
#define XRPLANESUBSYSTEMDESCRIPTOR_T234166304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRPlaneSubsystemDescriptor
struct  XRPlaneSubsystemDescriptor_t234166304  : public SubsystemDescriptor_1_t4292266728
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRPLANESUBSYSTEMDESCRIPTOR_T234166304_H
#ifndef XRREFERENCEPOINTSUBSYSTEM_T416875062_H
#define XRREFERENCEPOINTSUBSYSTEM_T416875062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRReferencePointSubsystem
struct  XRReferencePointSubsystem_t416875062  : public Subsystem_1_t2853778384
{
public:
	// System.Action`1<UnityEngine.Experimental.XR.ReferencePointUpdatedEventArgs> UnityEngine.Experimental.XR.XRReferencePointSubsystem::ReferencePointUpdated
	Action_1_t2218980328 * ___ReferencePointUpdated_2;

public:
	inline static int32_t get_offset_of_ReferencePointUpdated_2() { return static_cast<int32_t>(offsetof(XRReferencePointSubsystem_t416875062, ___ReferencePointUpdated_2)); }
	inline Action_1_t2218980328 * get_ReferencePointUpdated_2() const { return ___ReferencePointUpdated_2; }
	inline Action_1_t2218980328 ** get_address_of_ReferencePointUpdated_2() { return &___ReferencePointUpdated_2; }
	inline void set_ReferencePointUpdated_2(Action_1_t2218980328 * value)
	{
		___ReferencePointUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((&___ReferencePointUpdated_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRREFERENCEPOINTSUBSYSTEM_T416875062_H
#ifndef XRREFERENCEPOINTSUBSYSTEMDESCRIPTOR_T1659547698_H
#define XRREFERENCEPOINTSUBSYSTEMDESCRIPTOR_T1659547698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRReferencePointSubsystemDescriptor
struct  XRReferencePointSubsystemDescriptor_t1659547698  : public SubsystemDescriptor_1_t2448998858
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRREFERENCEPOINTSUBSYSTEMDESCRIPTOR_T1659547698_H
#ifndef XRSESSIONSUBSYSTEM_T3616338244_H
#define XRSESSIONSUBSYSTEM_T3616338244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRSessionSubsystem
struct  XRSessionSubsystem_t3616338244  : public Subsystem_1_t2383066733
{
public:
	// System.Action`1<UnityEngine.Experimental.XR.SessionTrackingStateChangedEventArgs> UnityEngine.Experimental.XR.XRSessionSubsystem::TrackingStateChanged
	Action_1_t2515503250 * ___TrackingStateChanged_2;

public:
	inline static int32_t get_offset_of_TrackingStateChanged_2() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t3616338244, ___TrackingStateChanged_2)); }
	inline Action_1_t2515503250 * get_TrackingStateChanged_2() const { return ___TrackingStateChanged_2; }
	inline Action_1_t2515503250 ** get_address_of_TrackingStateChanged_2() { return &___TrackingStateChanged_2; }
	inline void set_TrackingStateChanged_2(Action_1_t2515503250 * value)
	{
		___TrackingStateChanged_2 = value;
		Il2CppCodeGenWriteBarrier((&___TrackingStateChanged_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRSESSIONSUBSYSTEM_T3616338244_H
#ifndef TRYGETCOLORCORRECTIONDELEGATE_T1034812311_H
#define TRYGETCOLORCORRECTIONDELEGATE_T1034812311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate
struct  TryGetColorCorrectionDelegate_t1034812311  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRYGETCOLORCORRECTIONDELEGATE_T1034812311_H
#ifndef ATTACHREFERENCEPOINTDELEGATE_T418922659_H
#define ATTACHREFERENCEPOINTDELEGATE_T418922659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate
struct  AttachReferencePointDelegate_t418922659  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTACHREFERENCEPOINTDELEGATE_T418922659_H
#ifndef ASYNCDELEGATE_1_T3460105404_H
#define ASYNCDELEGATE_1_T3460105404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>
struct  AsyncDelegate_1_t3460105404  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCDELEGATE_1_T3460105404_H


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !0 UnityEngine.Experimental.Subsystem`1<System.Object>::get_SubsystemDescriptor()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Subsystem_1_get_SubsystemDescriptor_m2291515923_gshared (Subsystem_1_t4274336850 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3280774074_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// !2 System.Func`3<System.Object,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>::Invoke(!0,!1)
extern "C" IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_m50126256_gshared (Func_3_t2197716167 * __this, RuntimeObject * p0, TrackableId_t1251031970  p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions::UpdateCurrentHandler<System.Object>(System.String,System.Collections.Generic.Dictionary`2<System.String,T>,T&)
extern "C" IL2CPP_METHOD_ATTR void XRReferencePointExtensions_UpdateCurrentHandler_TisRuntimeObject_m2949012162_gshared (RuntimeObject * __this /* static, unused */, String_t* ___subsystemId0, Dictionary_2_t2865362463 * ___handlers1, RuntimeObject ** ___currentHandler2, const RuntimeMethod* method);
// UnityEngine.XR.ARExtensions.Promise`1<T> UnityEngine.XR.ARExtensions.XRSessionExtensions::ExecuteAsync<UnityEngine.XR.ARExtensions.SessionAvailability>(UnityEngine.Experimental.XR.XRSessionSubsystem,System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<T>>,T)
extern "C" IL2CPP_METHOD_ATTR Promise_1_t3923167537 * XRSessionExtensions_ExecuteAsync_TisSessionAvailability_t4252731961_m2904076345_gshared (RuntimeObject * __this /* static, unused */, XRSessionSubsystem_t3616338244 * ___sessionSubsystem0, Dictionary_2_t3245361703 * ___delegates1, int32_t ___defaultValue2, const RuntimeMethod* method);
// UnityEngine.XR.ARExtensions.Promise`1<T> UnityEngine.XR.ARExtensions.XRSessionExtensions::ExecuteAsync<UnityEngine.XR.ARExtensions.SessionInstallationStatus>(UnityEngine.Experimental.XR.XRSessionSubsystem,System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<T>>,T)
extern "C" IL2CPP_METHOD_ATTR Promise_1_t1435222300 * XRSessionExtensions_ExecuteAsync_TisSessionInstallationStatus_t1764786724_m1224681037_gshared (RuntimeObject * __this /* static, unused */, XRSessionSubsystem_t3616338244 * ___sessionSubsystem0, Dictionary_2_t757416466 * ___delegates1, int32_t ___defaultValue2, const RuntimeMethod* method);

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m3849172357 (Dictionary_2_t2760358902 * __this, String_t* p0, Func_2_t2975102603 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2760358902 *, String_t*, Func_2_t2975102603 *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method);
// !0 UnityEngine.Experimental.Subsystem`1<UnityEngine.Experimental.XR.XRCameraSubsystemDescriptor>::get_SubsystemDescriptor()
inline XRCameraSubsystemDescriptor_t3689383335 * Subsystem_1_get_SubsystemDescriptor_m441071667 (Subsystem_1_t588646725 * __this, const RuntimeMethod* method)
{
	return ((  XRCameraSubsystemDescriptor_t3689383335 * (*) (Subsystem_1_t588646725 *, const RuntimeMethod*))Subsystem_1_get_SubsystemDescriptor_m2291515923_gshared)(__this, method);
}
// System.String UnityEngine.Experimental.SubsystemDescriptorBase::get_id()
extern "C" IL2CPP_METHOD_ATTR String_t* SubsystemDescriptorBase_get_id_m893539935 (SubsystemDescriptorBase_t2374447182 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m1560576558 (Dictionary_2_t820068610 * __this, String_t* p0, TryGetColorCorrectionDelegate_t1034812311 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t820068610 *, String_t*, TryGetColorCorrectionDelegate_t1034812311 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3280774074_gshared)(__this, p0, p1, method);
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate::Invoke(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.Color&)
extern "C" IL2CPP_METHOD_ATTR bool TryGetColorCorrectionDelegate_Invoke_m442821292 (TryGetColorCorrectionDelegate_t1034812311 * __this, XRCameraSubsystem_t4195795144 * ___cameraSubsystems0, Color_t2555686324 * ___color1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>::.ctor()
inline void Dictionary_2__ctor_m555241001 (Dictionary_2_t2760358902 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2760358902 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate>::.ctor()
inline void Dictionary_2__ctor_m1771204320 (Dictionary_2_t820068610 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t820068610 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m3827254201 (Dictionary_2_t2706875346 * __this, String_t* p0, Func_3_t2921619047 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2706875346 *, String_t*, Func_3_t2921619047 *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method);
}
// !0 UnityEngine.Experimental.Subsystem`1<UnityEngine.Experimental.XR.XRPlaneSubsystemDescriptor>::get_SubsystemDescriptor()
inline XRPlaneSubsystemDescriptor_t234166304 * Subsystem_1_get_SubsystemDescriptor_m2169025228 (Subsystem_1_t1428396990 * __this, const RuntimeMethod* method)
{
	return ((  XRPlaneSubsystemDescriptor_t234166304 * (*) (Subsystem_1_t1428396990 *, const RuntimeMethod*))Subsystem_1_get_SubsystemDescriptor_m2291515923_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m2113858240 (Dictionary_2_t2706875346 * __this, String_t* p0, Func_3_t2921619047 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2706875346 *, String_t*, Func_3_t2921619047 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3280774074_gshared)(__this, p0, p1, method);
}
// !2 System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>::Invoke(!0,!1)
inline int32_t Func_3_Invoke_m2530530313 (Func_3_t2921619047 * __this, XRPlaneSubsystem_t2260142932 * p0, TrackableId_t1251031970  p1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_3_t2921619047 *, XRPlaneSubsystem_t2260142932 *, TrackableId_t1251031970 , const RuntimeMethod*))Func_3_Invoke_m50126256_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>::.ctor()
inline void Dictionary_2__ctor_m2975023327 (Dictionary_2_t2706875346 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2706875346 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m3033294665 (Dictionary_2_t204178958 * __this, String_t* p0, AttachReferencePointDelegate_t418922659 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t204178958 *, String_t*, AttachReferencePointDelegate_t418922659 *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions::UpdateCurrentHandler<UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate>(System.String,System.Collections.Generic.Dictionary`2<System.String,T>,T&)
inline void XRReferencePointExtensions_UpdateCurrentHandler_TisAttachReferencePointDelegate_t418922659_m4209335079 (RuntimeObject * __this /* static, unused */, String_t* ___subsystemId0, Dictionary_2_t204178958 * ___handlers1, AttachReferencePointDelegate_t418922659 ** ___currentHandler2, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject * /* static, unused */, String_t*, Dictionary_2_t204178958 *, AttachReferencePointDelegate_t418922659 **, const RuntimeMethod*))XRReferencePointExtensions_UpdateCurrentHandler_TisRuntimeObject_m2949012162_gshared)(__this /* static, unused */, ___subsystemId0, ___handlers1, ___currentHandler2, method);
}
// UnityEngine.Experimental.XR.TrackableId UnityEngine.Experimental.XR.TrackableId::get_InvalidId()
extern "C" IL2CPP_METHOD_ATTR TrackableId_t1251031970  TrackableId_get_InvalidId_m4062814271 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Experimental.XR.TrackableId UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate::Invoke(UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR TrackableId_t1251031970  AttachReferencePointDelegate_Invoke_m3134245136 (AttachReferencePointDelegate_t418922659 * __this, XRReferencePointSubsystem_t416875062 * ___referencePointSubsystem0, TrackableId_t1251031970  ___trackableId1, Pose_t545244865  ___pose2, const RuntimeMethod* method);
// !0 UnityEngine.Experimental.Subsystem`1<UnityEngine.Experimental.XR.XRReferencePointSubsystemDescriptor>::get_SubsystemDescriptor()
inline XRReferencePointSubsystemDescriptor_t1659547698 * Subsystem_1_get_SubsystemDescriptor_m3649074082 (Subsystem_1_t2853778384 * __this, const RuntimeMethod* method)
{
	return ((  XRReferencePointSubsystemDescriptor_t1659547698 * (*) (Subsystem_1_t2853778384 *, const RuntimeMethod*))Subsystem_1_get_SubsystemDescriptor_m2291515923_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m601792371 (Dictionary_2_t204178958 * __this, String_t* p0, AttachReferencePointDelegate_t418922659 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t204178958 *, String_t*, AttachReferencePointDelegate_t418922659 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3280774074_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate>::.ctor()
inline void Dictionary_2__ctor_m49728138 (Dictionary_2_t204178958 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t204178958 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m2124544062 (Dictionary_2_t3245361703 * __this, String_t* p0, AsyncDelegate_1_t3460105404 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3245361703 *, String_t*, AsyncDelegate_1_t3460105404 *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method);
}
// UnityEngine.XR.ARExtensions.Promise`1<T> UnityEngine.XR.ARExtensions.XRSessionExtensions::ExecuteAsync<UnityEngine.XR.ARExtensions.SessionAvailability>(UnityEngine.Experimental.XR.XRSessionSubsystem,System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<T>>,T)
inline Promise_1_t3923167537 * XRSessionExtensions_ExecuteAsync_TisSessionAvailability_t4252731961_m2904076345 (RuntimeObject * __this /* static, unused */, XRSessionSubsystem_t3616338244 * ___sessionSubsystem0, Dictionary_2_t3245361703 * ___delegates1, int32_t ___defaultValue2, const RuntimeMethod* method)
{
	return ((  Promise_1_t3923167537 * (*) (RuntimeObject * /* static, unused */, XRSessionSubsystem_t3616338244 *, Dictionary_2_t3245361703 *, int32_t, const RuntimeMethod*))XRSessionExtensions_ExecuteAsync_TisSessionAvailability_t4252731961_m2904076345_gshared)(__this /* static, unused */, ___sessionSubsystem0, ___delegates1, ___defaultValue2, method);
}
// UnityEngine.XR.ARExtensions.Promise`1<T> UnityEngine.XR.ARExtensions.XRSessionExtensions::ExecuteAsync<UnityEngine.XR.ARExtensions.SessionInstallationStatus>(UnityEngine.Experimental.XR.XRSessionSubsystem,System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<T>>,T)
inline Promise_1_t1435222300 * XRSessionExtensions_ExecuteAsync_TisSessionInstallationStatus_t1764786724_m1224681037 (RuntimeObject * __this /* static, unused */, XRSessionSubsystem_t3616338244 * ___sessionSubsystem0, Dictionary_2_t757416466 * ___delegates1, int32_t ___defaultValue2, const RuntimeMethod* method)
{
	return ((  Promise_1_t1435222300 * (*) (RuntimeObject * /* static, unused */, XRSessionSubsystem_t3616338244 *, Dictionary_2_t757416466 *, int32_t, const RuntimeMethod*))XRSessionExtensions_ExecuteAsync_TisSessionInstallationStatus_t1764786724_m1224681037_gshared)(__this /* static, unused */, ___sessionSubsystem0, ___delegates1, ___defaultValue2, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>>::.ctor()
inline void Dictionary_2__ctor_m1921437841 (Dictionary_2_t757416466 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t757416466 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>>::.ctor()
inline void Dictionary_2__ctor_m383910843 (Dictionary_2_t3245361703 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3245361703 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARExtensions.SessionAvailabilityExtensions::IsSupported(UnityEngine.XR.ARExtensions.SessionAvailability)
extern "C" IL2CPP_METHOD_ATTR bool SessionAvailabilityExtensions_IsSupported_m449853241 (RuntimeObject * __this /* static, unused */, int32_t ___availability0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___availability0;
		return (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.SessionAvailabilityExtensions::IsInstalled(UnityEngine.XR.ARExtensions.SessionAvailability)
extern "C" IL2CPP_METHOD_ATTR bool SessionAvailabilityExtensions_IsInstalled_m1398198835 (RuntimeObject * __this /* static, unused */, int32_t ___availability0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___availability0;
		return (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::RegisterIsPermissionGrantedHandler(System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void XRCameraExtensions_RegisterIsPermissionGrantedHandler_m23889859 (RuntimeObject * __this /* static, unused */, String_t* ___subsystemId0, Func_2_t2975102603 * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_RegisterIsPermissionGrantedHandler_m23889859_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t1293988219_il2cpp_TypeInfo_var);
		Dictionary_2_t2760358902 * L_0 = ((XRCameraExtensions_t1293988219_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t1293988219_il2cpp_TypeInfo_var))->get_s_IsPermissionGrantedDelegates_0();
		String_t* L_1 = ___subsystemId0;
		Func_2_t2975102603 * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m3849172357(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m3849172357_RuntimeMethod_var);
		return;
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions::TryGetColorCorrection(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.Color&)
extern "C" IL2CPP_METHOD_ATTR bool XRCameraExtensions_TryGetColorCorrection_m3844756087 (RuntimeObject * __this /* static, unused */, XRCameraSubsystem_t4195795144 * ___cameraSubsystem0, Color_t2555686324 * ___color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_TryGetColorCorrection_m3844756087_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TryGetColorCorrectionDelegate_t1034812311 * V_0 = NULL;
	Color_t2555686324  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		XRCameraSubsystem_t4195795144 * L_0 = ___cameraSubsystem0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1165407477, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XRCameraExtensions_TryGetColorCorrection_m3844756087_RuntimeMethod_var);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t1293988219_il2cpp_TypeInfo_var);
		Dictionary_2_t820068610 * L_2 = ((XRCameraExtensions_t1293988219_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t1293988219_il2cpp_TypeInfo_var))->get_s_TryGetColorCorrectionDelegates_1();
		XRCameraSubsystem_t4195795144 * L_3 = ___cameraSubsystem0;
		NullCheck(L_3);
		XRCameraSubsystemDescriptor_t3689383335 * L_4 = Subsystem_1_get_SubsystemDescriptor_m441071667(L_3, /*hidden argument*/Subsystem_1_get_SubsystemDescriptor_m441071667_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_5 = SubsystemDescriptorBase_get_id_m893539935(L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_6 = Dictionary_2_TryGetValue_m1560576558(L_2, L_5, (TryGetColorCorrectionDelegate_t1034812311 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1560576558_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		TryGetColorCorrectionDelegate_t1034812311 * L_7 = V_0;
		XRCameraSubsystem_t4195795144 * L_8 = ___cameraSubsystem0;
		Color_t2555686324 * L_9 = ___color1;
		NullCheck(L_7);
		bool L_10 = TryGetColorCorrectionDelegate_Invoke_m442821292(L_7, L_8, (Color_t2555686324 *)L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0036:
	{
		Color_t2555686324 * L_11 = ___color1;
		il2cpp_codegen_initobj((&V_1), sizeof(Color_t2555686324 ));
		Color_t2555686324  L_12 = V_1;
		*(Color_t2555686324 *)L_11 = L_12;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::.cctor()
extern "C" IL2CPP_METHOD_ATTR void XRCameraExtensions__cctor_m3236015190 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions__cctor_m3236015190_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2760358902 * L_0 = (Dictionary_2_t2760358902 *)il2cpp_codegen_object_new(Dictionary_2_t2760358902_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m555241001(L_0, /*hidden argument*/Dictionary_2__ctor_m555241001_RuntimeMethod_var);
		((XRCameraExtensions_t1293988219_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t1293988219_il2cpp_TypeInfo_var))->set_s_IsPermissionGrantedDelegates_0(L_0);
		Dictionary_2_t820068610 * L_1 = (Dictionary_2_t820068610 *)il2cpp_codegen_object_new(Dictionary_2_t820068610_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1771204320(L_1, /*hidden argument*/Dictionary_2__ctor_m1771204320_RuntimeMethod_var);
		((XRCameraExtensions_t1293988219_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t1293988219_il2cpp_TypeInfo_var))->set_s_TryGetColorCorrectionDelegates_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TryGetColorCorrectionDelegate__ctor_m3211817899 (TryGetColorCorrectionDelegate_t1034812311 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate::Invoke(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.Color&)
extern "C" IL2CPP_METHOD_ATTR bool TryGetColorCorrectionDelegate_Invoke_m442821292 (TryGetColorCorrectionDelegate_t1034812311 * __this, XRCameraSubsystem_t4195795144 * ___cameraSubsystems0, Color_t2555686324 * ___color1, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		TryGetColorCorrectionDelegate_Invoke_m442821292((TryGetColorCorrectionDelegate_t1034812311 *)__this->get_prev_9(), ___cameraSubsystems0, ___color1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, XRCameraSubsystem_t4195795144 *, Color_t2555686324 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___cameraSubsystems0, ___color1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, XRCameraSubsystem_t4195795144 *, Color_t2555686324 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___cameraSubsystems0, ___color1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< bool, XRCameraSubsystem_t4195795144 *, Color_t2555686324 * >::Invoke(targetMethod, targetThis, ___cameraSubsystems0, ___color1);
					else
						result = GenericVirtFuncInvoker2< bool, XRCameraSubsystem_t4195795144 *, Color_t2555686324 * >::Invoke(targetMethod, targetThis, ___cameraSubsystems0, ___color1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< bool, XRCameraSubsystem_t4195795144 *, Color_t2555686324 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cameraSubsystems0, ___color1);
					else
						result = VirtFuncInvoker2< bool, XRCameraSubsystem_t4195795144 *, Color_t2555686324 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cameraSubsystems0, ___color1);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, XRCameraSubsystem_t4195795144 *, Color_t2555686324 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___cameraSubsystems0, ___color1, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, Color_t2555686324 * >::Invoke(targetMethod, ___cameraSubsystems0, ___color1);
					else
						result = GenericVirtFuncInvoker1< bool, Color_t2555686324 * >::Invoke(targetMethod, ___cameraSubsystems0, ___color1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, Color_t2555686324 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___cameraSubsystems0, ___color1);
					else
						result = VirtFuncInvoker1< bool, Color_t2555686324 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___cameraSubsystems0, ___color1);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (XRCameraSubsystem_t4195795144 *, Color_t2555686324 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___cameraSubsystems0, ___color1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate::BeginInvoke(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.Color&,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TryGetColorCorrectionDelegate_BeginInvoke_m1810176191 (TryGetColorCorrectionDelegate_t1034812311 * __this, XRCameraSubsystem_t4195795144 * ___cameraSubsystems0, Color_t2555686324 * ___color1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TryGetColorCorrectionDelegate_BeginInvoke_m1810176191_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___cameraSubsystems0;
	__d_args[1] = Box(Color_t2555686324_il2cpp_TypeInfo_var, &*___color1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate::EndInvoke(UnityEngine.Color&,System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool TryGetColorCorrectionDelegate_EndInvoke_m4215197378 (TryGetColorCorrectionDelegate_t1034812311 * __this, Color_t2555686324 * ___color0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___color0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARExtensions.XRPlaneExtensions::RegisterGetTrackingStateHandler(System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>)
extern "C" IL2CPP_METHOD_ATTR void XRPlaneExtensions_RegisterGetTrackingStateHandler_m3719762041 (RuntimeObject * __this /* static, unused */, String_t* ___subsystemId0, Func_3_t2921619047 * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions_RegisterGetTrackingStateHandler_m3719762041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRPlaneExtensions_t1202600805_il2cpp_TypeInfo_var);
		Dictionary_2_t2706875346 * L_0 = ((XRPlaneExtensions_t1202600805_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_t1202600805_il2cpp_TypeInfo_var))->get_s_GetTrackingStateDelegates_0();
		String_t* L_1 = ___subsystemId0;
		Func_3_t2921619047 * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m3827254201(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m3827254201_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.Experimental.XR.TrackingState UnityEngine.XR.ARExtensions.XRPlaneExtensions::GetTrackingState(UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId)
extern "C" IL2CPP_METHOD_ATTR int32_t XRPlaneExtensions_GetTrackingState_m2696238282 (RuntimeObject * __this /* static, unused */, XRPlaneSubsystem_t2260142932 * ___planeSubsystem0, TrackableId_t1251031970  ___planeId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions_GetTrackingState_m2696238282_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_3_t2921619047 * V_0 = NULL;
	{
		XRPlaneSubsystem_t2260142932 * L_0 = ___planeSubsystem0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2235816782, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XRPlaneExtensions_GetTrackingState_m2696238282_RuntimeMethod_var);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRPlaneExtensions_t1202600805_il2cpp_TypeInfo_var);
		Dictionary_2_t2706875346 * L_2 = ((XRPlaneExtensions_t1202600805_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_t1202600805_il2cpp_TypeInfo_var))->get_s_GetTrackingStateDelegates_0();
		XRPlaneSubsystem_t2260142932 * L_3 = ___planeSubsystem0;
		NullCheck(L_3);
		XRPlaneSubsystemDescriptor_t234166304 * L_4 = Subsystem_1_get_SubsystemDescriptor_m2169025228(L_3, /*hidden argument*/Subsystem_1_get_SubsystemDescriptor_m2169025228_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_5 = SubsystemDescriptorBase_get_id_m893539935(L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_6 = Dictionary_2_TryGetValue_m2113858240(L_2, L_5, (Func_3_t2921619047 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2113858240_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		Func_3_t2921619047 * L_7 = V_0;
		XRPlaneSubsystem_t2260142932 * L_8 = ___planeSubsystem0;
		TrackableId_t1251031970  L_9 = ___planeId1;
		NullCheck(L_7);
		int32_t L_10 = Func_3_Invoke_m2530530313(L_7, L_8, L_9, /*hidden argument*/Func_3_Invoke_m2530530313_RuntimeMethod_var);
		return L_10;
	}

IL_0036:
	{
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRPlaneExtensions::.cctor()
extern "C" IL2CPP_METHOD_ATTR void XRPlaneExtensions__cctor_m1656397022 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions__cctor_m1656397022_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2706875346 * L_0 = (Dictionary_2_t2706875346 *)il2cpp_codegen_object_new(Dictionary_2_t2706875346_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2975023327(L_0, /*hidden argument*/Dictionary_2__ctor_m2975023327_RuntimeMethod_var);
		((XRPlaneExtensions_t1202600805_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_t1202600805_il2cpp_TypeInfo_var))->set_s_GetTrackingStateDelegates_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions::RegisterAttachReferencePointHandler(System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate)
extern "C" IL2CPP_METHOD_ATTR void XRReferencePointExtensions_RegisterAttachReferencePointHandler_m2848125376 (RuntimeObject * __this /* static, unused */, String_t* ___subsystemId0, AttachReferencePointDelegate_t418922659 * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointExtensions_RegisterAttachReferencePointHandler_m2848125376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRReferencePointExtensions_t125072412_il2cpp_TypeInfo_var);
		Dictionary_2_t204178958 * L_0 = ((XRReferencePointExtensions_t125072412_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_t125072412_il2cpp_TypeInfo_var))->get_s_AttachReferencePointHandlers_2();
		String_t* L_1 = ___subsystemId0;
		AttachReferencePointDelegate_t418922659 * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m3033294665(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m3033294665_RuntimeMethod_var);
		String_t* L_3 = ___subsystemId0;
		Dictionary_2_t204178958 * L_4 = ((XRReferencePointExtensions_t125072412_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_t125072412_il2cpp_TypeInfo_var))->get_s_AttachReferencePointHandlers_2();
		XRReferencePointExtensions_UpdateCurrentHandler_TisAttachReferencePointDelegate_t418922659_m4209335079(NULL /*static, unused*/, L_3, L_4, (AttachReferencePointDelegate_t418922659 **)(((XRReferencePointExtensions_t125072412_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_t125072412_il2cpp_TypeInfo_var))->get_address_of_s_CurrentAttachDelegate_0()), /*hidden argument*/XRReferencePointExtensions_UpdateCurrentHandler_TisAttachReferencePointDelegate_t418922659_m4209335079_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.Experimental.XR.TrackableId UnityEngine.XR.ARExtensions.XRReferencePointExtensions::AttachReferencePoint(UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR TrackableId_t1251031970  XRReferencePointExtensions_AttachReferencePoint_m42308643 (RuntimeObject * __this /* static, unused */, XRReferencePointSubsystem_t416875062 * ___referencePointSubsystem0, TrackableId_t1251031970  ___trackableId1, Pose_t545244865  ___pose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointExtensions_AttachReferencePoint_m42308643_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRReferencePointExtensions_t125072412_il2cpp_TypeInfo_var);
		AttachReferencePointDelegate_t418922659 * L_0 = ((XRReferencePointExtensions_t125072412_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_t125072412_il2cpp_TypeInfo_var))->get_s_CurrentAttachDelegate_0();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_t1251031970_il2cpp_TypeInfo_var);
		TrackableId_t1251031970  L_1 = TrackableId_get_InvalidId_m4062814271(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_1;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRReferencePointExtensions_t125072412_il2cpp_TypeInfo_var);
		AttachReferencePointDelegate_t418922659 * L_2 = ((XRReferencePointExtensions_t125072412_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_t125072412_il2cpp_TypeInfo_var))->get_s_CurrentAttachDelegate_0();
		XRReferencePointSubsystem_t416875062 * L_3 = ___referencePointSubsystem0;
		TrackableId_t1251031970  L_4 = ___trackableId1;
		Pose_t545244865  L_5 = ___pose2;
		NullCheck(L_2);
		TrackableId_t1251031970  L_6 = AttachReferencePointDelegate_Invoke_m3134245136(L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions::ActivateExtensions(UnityEngine.Experimental.XR.XRReferencePointSubsystem)
extern "C" IL2CPP_METHOD_ATTR void XRReferencePointExtensions_ActivateExtensions_m2683210974 (RuntimeObject * __this /* static, unused */, XRReferencePointSubsystem_t416875062 * ___referencePointSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointExtensions_ActivateExtensions_m2683210974_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		XRReferencePointSubsystem_t416875062 * L_0 = ___referencePointSubsystem0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral834956432, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XRReferencePointExtensions_ActivateExtensions_m2683210974_RuntimeMethod_var);
	}

IL_0011:
	{
		XRReferencePointSubsystem_t416875062 * L_2 = ___referencePointSubsystem0;
		IL2CPP_RUNTIME_CLASS_INIT(XRReferencePointExtensions_t125072412_il2cpp_TypeInfo_var);
		((XRReferencePointExtensions_t125072412_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_t125072412_il2cpp_TypeInfo_var))->set_s_CurrentSubsystem_1(L_2);
		XRReferencePointSubsystem_t416875062 * L_3 = ___referencePointSubsystem0;
		NullCheck(L_3);
		XRReferencePointSubsystemDescriptor_t1659547698 * L_4 = Subsystem_1_get_SubsystemDescriptor_m3649074082(L_3, /*hidden argument*/Subsystem_1_get_SubsystemDescriptor_m3649074082_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_5 = SubsystemDescriptorBase_get_id_m893539935(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Dictionary_2_t204178958 * L_6 = ((XRReferencePointExtensions_t125072412_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_t125072412_il2cpp_TypeInfo_var))->get_s_AttachReferencePointHandlers_2();
		String_t* L_7 = V_0;
		NullCheck(L_6);
		Dictionary_2_TryGetValue_m601792371(L_6, L_7, (AttachReferencePointDelegate_t418922659 **)(((XRReferencePointExtensions_t125072412_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_t125072412_il2cpp_TypeInfo_var))->get_address_of_s_CurrentAttachDelegate_0()), /*hidden argument*/Dictionary_2_TryGetValue_m601792371_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions::.cctor()
extern "C" IL2CPP_METHOD_ATTR void XRReferencePointExtensions__cctor_m3153365008 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointExtensions__cctor_m3153365008_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t204178958 * L_0 = (Dictionary_2_t204178958 *)il2cpp_codegen_object_new(Dictionary_2_t204178958_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m49728138(L_0, /*hidden argument*/Dictionary_2__ctor_m49728138_RuntimeMethod_var);
		((XRReferencePointExtensions_t125072412_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_t125072412_il2cpp_TypeInfo_var))->set_s_AttachReferencePointHandlers_2(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AttachReferencePointDelegate__ctor_m3040356846 (AttachReferencePointDelegate_t418922659 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.Experimental.XR.TrackableId UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate::Invoke(UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR TrackableId_t1251031970  AttachReferencePointDelegate_Invoke_m3134245136 (AttachReferencePointDelegate_t418922659 * __this, XRReferencePointSubsystem_t416875062 * ___referencePointSubsystem0, TrackableId_t1251031970  ___trackableId1, Pose_t545244865  ___pose2, const RuntimeMethod* method)
{
	TrackableId_t1251031970  result;
	memset(&result, 0, sizeof(result));
	if(__this->get_prev_9() != NULL)
	{
		AttachReferencePointDelegate_Invoke_m3134245136((AttachReferencePointDelegate_t418922659 *)__this->get_prev_9(), ___referencePointSubsystem0, ___trackableId1, ___pose2, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// open
			{
				typedef TrackableId_t1251031970  (*FunctionPointerType) (RuntimeObject *, XRReferencePointSubsystem_t416875062 *, TrackableId_t1251031970 , Pose_t545244865 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___referencePointSubsystem0, ___trackableId1, ___pose2, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef TrackableId_t1251031970  (*FunctionPointerType) (RuntimeObject *, void*, XRReferencePointSubsystem_t416875062 *, TrackableId_t1251031970 , Pose_t545244865 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___referencePointSubsystem0, ___trackableId1, ___pose2, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< TrackableId_t1251031970 , XRReferencePointSubsystem_t416875062 *, TrackableId_t1251031970 , Pose_t545244865  >::Invoke(targetMethod, targetThis, ___referencePointSubsystem0, ___trackableId1, ___pose2);
					else
						result = GenericVirtFuncInvoker3< TrackableId_t1251031970 , XRReferencePointSubsystem_t416875062 *, TrackableId_t1251031970 , Pose_t545244865  >::Invoke(targetMethod, targetThis, ___referencePointSubsystem0, ___trackableId1, ___pose2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< TrackableId_t1251031970 , XRReferencePointSubsystem_t416875062 *, TrackableId_t1251031970 , Pose_t545244865  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___referencePointSubsystem0, ___trackableId1, ___pose2);
					else
						result = VirtFuncInvoker3< TrackableId_t1251031970 , XRReferencePointSubsystem_t416875062 *, TrackableId_t1251031970 , Pose_t545244865  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___referencePointSubsystem0, ___trackableId1, ___pose2);
				}
			}
			else
			{
				typedef TrackableId_t1251031970  (*FunctionPointerType) (void*, XRReferencePointSubsystem_t416875062 *, TrackableId_t1251031970 , Pose_t545244865 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___referencePointSubsystem0, ___trackableId1, ___pose2, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< TrackableId_t1251031970 , TrackableId_t1251031970 , Pose_t545244865  >::Invoke(targetMethod, ___referencePointSubsystem0, ___trackableId1, ___pose2);
					else
						result = GenericVirtFuncInvoker2< TrackableId_t1251031970 , TrackableId_t1251031970 , Pose_t545244865  >::Invoke(targetMethod, ___referencePointSubsystem0, ___trackableId1, ___pose2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< TrackableId_t1251031970 , TrackableId_t1251031970 , Pose_t545244865  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___referencePointSubsystem0, ___trackableId1, ___pose2);
					else
						result = VirtFuncInvoker2< TrackableId_t1251031970 , TrackableId_t1251031970 , Pose_t545244865  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___referencePointSubsystem0, ___trackableId1, ___pose2);
				}
			}
			else
			{
				typedef TrackableId_t1251031970  (*FunctionPointerType) (XRReferencePointSubsystem_t416875062 *, TrackableId_t1251031970 , Pose_t545244865 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___referencePointSubsystem0, ___trackableId1, ___pose2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate::BeginInvoke(UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Pose,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AttachReferencePointDelegate_BeginInvoke_m455971734 (AttachReferencePointDelegate_t418922659 * __this, XRReferencePointSubsystem_t416875062 * ___referencePointSubsystem0, TrackableId_t1251031970  ___trackableId1, Pose_t545244865  ___pose2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttachReferencePointDelegate_BeginInvoke_m455971734_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___referencePointSubsystem0;
	__d_args[1] = Box(TrackableId_t1251031970_il2cpp_TypeInfo_var, &___trackableId1);
	__d_args[2] = Box(Pose_t545244865_il2cpp_TypeInfo_var, &___pose2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// UnityEngine.Experimental.XR.TrackableId UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR TrackableId_t1251031970  AttachReferencePointDelegate_EndInvoke_m197713093 (AttachReferencePointDelegate_t418922659 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(TrackableId_t1251031970 *)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions::RegisterGetAvailabilityAsyncHandler(System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>)
extern "C" IL2CPP_METHOD_ATTR void XRSessionExtensions_RegisterGetAvailabilityAsyncHandler_m3177527582 (RuntimeObject * __this /* static, unused */, String_t* ___subsystemId0, AsyncDelegate_1_t3460105404 * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionExtensions_RegisterGetAvailabilityAsyncHandler_m3177527582_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSessionExtensions_t411788579_il2cpp_TypeInfo_var);
		Dictionary_2_t3245361703 * L_0 = ((XRSessionExtensions_t411788579_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t411788579_il2cpp_TypeInfo_var))->get_s_GetAvailabilityAsyncDelegates_1();
		String_t* L_1 = ___subsystemId0;
		AsyncDelegate_1_t3460105404 * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m2124544062(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m2124544062_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionAvailability> UnityEngine.XR.ARExtensions.XRSessionExtensions::GetAvailabilityAsync(UnityEngine.Experimental.XR.XRSessionSubsystem)
extern "C" IL2CPP_METHOD_ATTR Promise_1_t3923167537 * XRSessionExtensions_GetAvailabilityAsync_m1573784747 (RuntimeObject * __this /* static, unused */, XRSessionSubsystem_t3616338244 * ___sessionSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionExtensions_GetAvailabilityAsync_m1573784747_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRSessionSubsystem_t3616338244 * L_0 = ___sessionSubsystem0;
		IL2CPP_RUNTIME_CLASS_INIT(XRSessionExtensions_t411788579_il2cpp_TypeInfo_var);
		Dictionary_2_t3245361703 * L_1 = ((XRSessionExtensions_t411788579_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t411788579_il2cpp_TypeInfo_var))->get_s_GetAvailabilityAsyncDelegates_1();
		Promise_1_t3923167537 * L_2 = XRSessionExtensions_ExecuteAsync_TisSessionAvailability_t4252731961_m2904076345(NULL /*static, unused*/, L_0, L_1, 6, /*hidden argument*/XRSessionExtensions_ExecuteAsync_TisSessionAvailability_t4252731961_m2904076345_RuntimeMethod_var);
		return L_2;
	}
}
// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus> UnityEngine.XR.ARExtensions.XRSessionExtensions::InstallAsync(UnityEngine.Experimental.XR.XRSessionSubsystem)
extern "C" IL2CPP_METHOD_ATTR Promise_1_t1435222300 * XRSessionExtensions_InstallAsync_m658298074 (RuntimeObject * __this /* static, unused */, XRSessionSubsystem_t3616338244 * ___sessionSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionExtensions_InstallAsync_m658298074_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRSessionSubsystem_t3616338244 * L_0 = ___sessionSubsystem0;
		IL2CPP_RUNTIME_CLASS_INIT(XRSessionExtensions_t411788579_il2cpp_TypeInfo_var);
		Dictionary_2_t757416466 * L_1 = ((XRSessionExtensions_t411788579_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t411788579_il2cpp_TypeInfo_var))->get_s_InstallAsyncDelegates_0();
		Promise_1_t1435222300 * L_2 = XRSessionExtensions_ExecuteAsync_TisSessionInstallationStatus_t1764786724_m1224681037(NULL /*static, unused*/, L_0, L_1, 4, /*hidden argument*/XRSessionExtensions_ExecuteAsync_TisSessionInstallationStatus_t1764786724_m1224681037_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions::.cctor()
extern "C" IL2CPP_METHOD_ATTR void XRSessionExtensions__cctor_m298900539 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionExtensions__cctor_m298900539_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t757416466 * L_0 = (Dictionary_2_t757416466 *)il2cpp_codegen_object_new(Dictionary_2_t757416466_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1921437841(L_0, /*hidden argument*/Dictionary_2__ctor_m1921437841_RuntimeMethod_var);
		((XRSessionExtensions_t411788579_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t411788579_il2cpp_TypeInfo_var))->set_s_InstallAsyncDelegates_0(L_0);
		Dictionary_2_t3245361703 * L_1 = (Dictionary_2_t3245361703 *)il2cpp_codegen_object_new(Dictionary_2_t3245361703_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m383910843(L_1, /*hidden argument*/Dictionary_2__ctor_m383910843_RuntimeMethod_var);
		((XRSessionExtensions_t411788579_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t411788579_il2cpp_TypeInfo_var))->set_s_GetAvailabilityAsyncDelegates_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
