/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

@interface JSManagedValue : NSObject {
    struct Weak<JSC::JSGlobalObject> { 
        struct WeakImpl {} *m_impl; 
    }  m_globalObject;
    struct RefPtr<JSC::JSLock> { 
        struct JSLock {} *m_ptr; 
    }  m_lock;
    NSMapTable * m_owners;
    struct WeakValueRef { 
        int m_tag; 
        union WeakValueUnion { 
            struct JSValue { 
                union EncodedValueDescriptor { 
                    long long asInt64; 
                    double asDouble; 
                    struct { 
                        int payload; 
                        int tag; 
                    } asBits; 
                } u; 
            } m_primitive; 
            struct Weak<JSC::JSObject> { 
                struct WeakImpl {} *m_impl; 
            } m_object; 
            struct Weak<JSC::JSString> { 
                struct WeakImpl {} *m_impl; 
            } m_string; 
        } u; 
    }  m_weakValue;
}

@property (readonly) JSValue *value;

+ (id)managedValueWithValue:(id)arg1;
+ (id)managedValueWithValue:(id)arg1 andOwner:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didAddOwner:(id)arg1;
- (void)didRemoveOwner:(id)arg1;
- (void)disconnectValue;
- (id)init;
- (id)initWithValue:(id)arg1;
- (id)value;

@end
