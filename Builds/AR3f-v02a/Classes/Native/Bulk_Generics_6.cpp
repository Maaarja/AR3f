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
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.Experimental.XR.SessionTrackingStateChangedEventArgs>
struct Action_1_t2515503250;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.DelegateData
struct DelegateData_t1677132599;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.Experimental.ISubsystemDescriptor
struct ISubsystemDescriptor_t515866703;
// UnityEngine.Experimental.XR.XRSessionSubsystem
struct XRSessionSubsystem_t3616338244;
// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>
struct Promise_1_t1435222300;
// UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>
struct AsyncDelegate_1_t972160167;




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
#ifndef ASYNCDELEGATE_1_T972160167_H
#define ASYNCDELEGATE_1_T972160167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>
struct  AsyncDelegate_1_t972160167  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCDELEGATE_1_T972160167_H


// UnityEngine.XR.ARExtensions.Promise`1<T> UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>::Invoke(UnityEngine.Experimental.XR.XRSessionSubsystem)
extern "C" IL2CPP_METHOD_ATTR Promise_1_t1435222300 * AsyncDelegate_1_Invoke_m723727912_gshared (AsyncDelegate_1_t972160167 * __this, XRSessionSubsystem_t3616338244 * ___sessionSubsystem0, const RuntimeMethod* method);

// UnityEngine.XR.ARExtensions.Promise`1<T> UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>::Invoke(UnityEngine.Experimental.XR.XRSessionSubsystem)
inline Promise_1_t1435222300 * AsyncDelegate_1_Invoke_m723727912 (AsyncDelegate_1_t972160167 * __this, XRSessionSubsystem_t3616338244 * ___sessionSubsystem0, const RuntimeMethod* method)
{
	return ((  Promise_1_t1435222300 * (*) (AsyncDelegate_1_t972160167 *, XRSessionSubsystem_t3616338244 *, const RuntimeMethod*))AsyncDelegate_1_Invoke_m723727912_gshared)(__this, ___sessionSubsystem0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AsyncDelegate_1__ctor_m2374002471_gshared (AsyncDelegate_1_t972160167 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.XR.ARExtensions.Promise`1<T> UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>::Invoke(UnityEngine.Experimental.XR.XRSessionSubsystem)
extern "C" IL2CPP_METHOD_ATTR Promise_1_t1435222300 * AsyncDelegate_1_Invoke_m723727912_gshared (AsyncDelegate_1_t972160167 * __this, XRSessionSubsystem_t3616338244 * ___sessionSubsystem0, const RuntimeMethod* method)
{
	Promise_1_t1435222300 * result = NULL;
	if(__this->get_prev_9() != NULL)
	{
		AsyncDelegate_1_Invoke_m723727912((AsyncDelegate_1_t972160167 *)__this->get_prev_9(), ___sessionSubsystem0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef Promise_1_t1435222300 * (*FunctionPointerType) (RuntimeObject *, XRSessionSubsystem_t3616338244 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___sessionSubsystem0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef Promise_1_t1435222300 * (*FunctionPointerType) (RuntimeObject *, void*, XRSessionSubsystem_t3616338244 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sessionSubsystem0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< Promise_1_t1435222300 *, XRSessionSubsystem_t3616338244 * >::Invoke(targetMethod, targetThis, ___sessionSubsystem0);
					else
						result = GenericVirtFuncInvoker1< Promise_1_t1435222300 *, XRSessionSubsystem_t3616338244 * >::Invoke(targetMethod, targetThis, ___sessionSubsystem0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< Promise_1_t1435222300 *, XRSessionSubsystem_t3616338244 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sessionSubsystem0);
					else
						result = VirtFuncInvoker1< Promise_1_t1435222300 *, XRSessionSubsystem_t3616338244 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sessionSubsystem0);
				}
			}
			else
			{
				typedef Promise_1_t1435222300 * (*FunctionPointerType) (void*, XRSessionSubsystem_t3616338244 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___sessionSubsystem0, targetMethod);
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
						result = GenericInterfaceFuncInvoker0< Promise_1_t1435222300 * >::Invoke(targetMethod, ___sessionSubsystem0);
					else
						result = GenericVirtFuncInvoker0< Promise_1_t1435222300 * >::Invoke(targetMethod, ___sessionSubsystem0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< Promise_1_t1435222300 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sessionSubsystem0);
					else
						result = VirtFuncInvoker0< Promise_1_t1435222300 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sessionSubsystem0);
				}
			}
			else
			{
				typedef Promise_1_t1435222300 * (*FunctionPointerType) (XRSessionSubsystem_t3616338244 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___sessionSubsystem0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>::BeginInvoke(UnityEngine.Experimental.XR.XRSessionSubsystem,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AsyncDelegate_1_BeginInvoke_m1806685411_gshared (AsyncDelegate_1_t972160167 * __this, XRSessionSubsystem_t3616338244 * ___sessionSubsystem0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___sessionSubsystem0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// UnityEngine.XR.ARExtensions.Promise`1<T> UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR Promise_1_t1435222300 * AsyncDelegate_1_EndInvoke_m126256703_gshared (AsyncDelegate_1_t972160167 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Promise_1_t1435222300 *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
