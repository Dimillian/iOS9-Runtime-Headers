/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface AUAudioUnit : NSObject {
    BOOL  _allParameterValues;
    AUViewController * _cachedViewController;
    BOOL  _canProcessInPlace;
    struct OpaqueAudioComponent { } * _component;
    struct AudioComponentDescription { 
        unsigned int componentType; 
        unsigned int componentSubType; 
        unsigned int componentManufacturer; 
        unsigned int componentFlags; 
        unsigned int componentFlagsMask; 
    }  _componentDescription;
    NSString * _componentName;
    unsigned int  _componentVersion;
    NSString * _contextName;
    AUAudioUnitPreset * _currentPreset;
    NSArray * _factoryPresets;
    NSDictionary * _fullState;
    double  _latency;
    unsigned int  _maximumFramesToRender;
    id /* block */  _musicalContextBlock;
    struct RealtimeState { 
        struct CAMutex { 
            int (**_vptr$CAMutex)(); 
            char *mName; 
            struct _opaque_pthread_t {} *mOwner; 
            struct _opaque_pthread_mutex_t { 
                long __sig; 
                BOOL __opaque[40]; 
            } mMutex; 
        } mMutex; 
        struct RenderObserverList { 
            struct TThreadSafeList<RenderObserver> { 
                struct NodeStack { 
                    struct Node {} *mHead; 
                } mActiveList; 
                struct NodeStack { 
                    struct Node {} *mHead; 
                } mPendingList; 
                struct NodeStack { 
                    struct Node {} *mHead; 
                } mFreeList; 
            } mObservers; 
            bool mTouched; 
        } renderObserverList; 
        struct AUEventSchedule { 
            struct AURenderEventAllocator {} *mAllocator; 
            struct TAtomicStack<AURenderEventStruct> { 
                struct AURenderEventStruct {} *mHead; 
            } mAddedEventStack; 
            union { /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x_0_2_1; void*x_0_2_2; void*x_0_2_3; in double x_0_2_4; void*x_0_2_5; const void*x_0_2_6; void x_0_2_7; void*x_0_2_8; in void*x_0_2_9; } *mScheduleHead; 
            union { void*x_0_2_1; void*x_0_2_2; void*x_0_2_3; in double x_0_2_4; void*x_0_2_5; const void*x_0_2_6; void x_0_2_7; void*x_0_2_8; in void*x_0_2_9; } *mCurrentSliceScheduleHead; 
            AUAudioUnit *mOwningAU; 
        } eventSchedule; 
    }  _realtimeState;
    int  _renderQuality;
    BOOL  _renderResourcesAllocated;
    BOOL  _renderingOffline;
    BOOL  _shouldBypassEffect;
    double  _tailTime;
    id /* block */  _transportStateBlock;
    int  _virtualMIDICableCount;
}

@property (nonatomic, readonly) BOOL allParameterValues;
@property (nonatomic, readonly, copy) NSString *audioUnitName;
@property (nonatomic, readonly) BOOL canProcessInPlace;
@property (nonatomic, readonly, copy) NSArray *channelCapabilities;
@property (nonatomic, readonly) struct OpaqueAudioComponent { }*component;
@property (nonatomic, readonly) struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } componentDescription;
@property (nonatomic, readonly, copy) NSString *componentName;
@property (nonatomic, readonly) unsigned int componentVersion;
@property (nonatomic, copy) NSString *contextName;
@property (nonatomic, retain) AUAudioUnitPreset *currentPreset;
@property (nonatomic, readonly, copy) NSArray *factoryPresets;
@property (nonatomic, copy) NSDictionary *fullState;
@property (nonatomic, copy) NSDictionary *fullStateForDocument;
@property (nonatomic, readonly) AUAudioUnitBusArray *inputBusses;
@property (nonatomic, readonly) double latency;
@property (nonatomic, readonly, copy) NSString *manufacturerName;
@property (nonatomic) unsigned int maximumFramesToRender;
@property (getter=isMusicDeviceOrEffect, nonatomic, readonly) BOOL musicDeviceOrEffect;
@property (nonatomic, copy) id /* block */ musicalContextBlock;
@property (nonatomic, readonly) AUAudioUnitBusArray *outputBusses;
@property (nonatomic, readonly) AUParameterTree *parameterTree;
@property (nonatomic) struct RealtimeState { struct CAMutex { int (**x_1_1_1)(); char *x_1_1_2; struct _opaque_pthread_t {} *x_1_1_3; struct _opaque_pthread_mutex_t { long x_4_2_1; BOOL x_4_2_2[40]; } x_1_1_4; } x1; struct RenderObserverList { struct TThreadSafeList<RenderObserver> { struct NodeStack { struct Node {} *x_1_3_1; } x_1_2_1; struct NodeStack { struct Node {} *x_2_3_1; } x_1_2_2; struct NodeStack { struct Node {} *x_3_3_1; } x_1_2_3; } x_2_1_1; bool x_2_1_2; } x2; struct AUEventSchedule { struct AURenderEventAllocator {} *x_3_1_1; struct TAtomicStack<AURenderEventStruct> { struct AURenderEventStruct {} *x_2_2_1; } x_3_1_2; union { /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x_3_2_1; void*x_3_2_2; void*x_3_2_3; in double x_3_2_4; void*x_3_2_5; const void*x_3_2_6; void x_3_2_7; void*x_3_2_8; in void*x_3_2_9; } *x_3_1_3; union { void*x_4_2_1; void*x_4_2_2; void*x_4_2_3; in double x_4_2_4; void*x_4_2_5; const void*x_4_2_6; void x_4_2_7; void*x_4_2_8; in void*x_4_2_9; } *x_3_1_4; id x_3_1_5; } x3; void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; out void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; long x29; void*x30; int x31; void*x32; void*x33; unsigned short x34; void*x35; void*x36; void*x37; void*x38; void*x39; struct CAMutex { int (**x_40_1_1)(); char *x_40_1_2; struct _opaque_pthread_t {} *x_40_1_3; struct _opaque_pthread_mutex_t { long x_4_2_1; BOOL x_4_2_2[40]; } x_40_1_4; } x40; struct RenderObserverList { struct TThreadSafeList<RenderObserver> { struct NodeStack { struct Node {} *x_1_3_1; } x_1_2_1; struct NodeStack { struct Node {} *x_2_3_1; } x_1_2_2; struct NodeStack { struct Node {} *x_3_3_1; } x_1_2_3; } x_41_1_1; bool x_41_1_2; } x41; struct AUEventSchedule { struct AURenderEventAllocator {} *x_42_1_1; struct TAtomicStack<AURenderEventStruct> { struct AURenderEventStruct {} *x_2_2_1; } x_42_1_2; union { void*x_3_2_1; void*x_3_2_2; void*x_3_2_3; in double x_3_2_4; void*x_3_2_5; const void*x_3_2_6; void x_3_2_7; void*x_3_2_8; in void*x_3_2_9; } *x_42_1_3; union { void*x_4_2_1; void*x_4_2_2; void*x_4_2_3; in double x_4_2_4; void*x_4_2_5; const void*x_4_2_6; void x_4_2_7; void*x_4_2_8; in void*x_4_2_9; } *x_42_1_4; id x_42_1_5; } x42; void*x43; void*x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; out void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; out void*x67; void*x68; long long x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; const void*x76; void*x77; double x78; void*x79; void*x80; } realtimeState;
@property (nonatomic, readonly) id /* block */ renderBlock;
@property (nonatomic) int renderQuality;
@property (nonatomic, readonly) BOOL renderResourcesAllocated;
@property (getter=isRenderingOffline, nonatomic) BOOL renderingOffline;
@property (nonatomic, readonly) id /* block */ scheduleMIDIEventBlock;
@property (nonatomic, readonly) id /* block */ scheduleParameterBlock;
@property (nonatomic) BOOL shouldBypassEffect;
@property (nonatomic, readonly) double tailTime;
@property (nonatomic, copy) id /* block */ transportStateBlock;
@property (nonatomic, readonly) int virtualMIDICableCount;

+ (id)auAudioUnitForAudioUnit:(struct OpaqueAudioComponentInstance { }*)arg1;
+ (void)instantiateWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned long)arg2 completionHandler:(id /* block */)arg3;
+ (id)keyPathsForValuesAffectingAllParameterValues;
+ (void)registerSubclass:(Class)arg1 asComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg2 name:(id)arg3 version:(unsigned long)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addRenderObserver:(int (*)arg1 userData:(void*)arg2;
- (BOOL)allParameterValues;
- (BOOL)allocateRenderResourcesAndReturnError:(id*)arg1;
- (id)audioUnitName;
- (id)cachedViewController;
- (BOOL)canProcessInPlace;
- (id)channelCapabilities;
- (struct OpaqueAudioComponent { }*)component;
- (struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })componentDescription;
- (id)componentName;
- (unsigned int)componentVersion;
- (id)contextName;
- (id)currentPreset;
- (void)dealloc;
- (void)deallocateRenderResources;
- (id)factoryPresets;
- (id)fullState;
- (id)fullStateForDocument;
- (id)init;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 error:(id*)arg2;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned long)arg2 error:(id*)arg3;
- (id)inputBusses;
- (id /* block */)internalRenderBlock;
- (BOOL)isMusicDeviceOrEffect;
- (BOOL)isRenderingOffline;
- (double)latency;
- (id)manufacturerName;
- (unsigned int)maximumFramesToRender;
- (id /* block */)musicalContextBlock;
- (id)outputBusses;
- (id)parameterTree;
- (id)parametersForOverviewWithCount:(int)arg1;
- (struct RealtimeState { struct CAMutex { int (**x_1_1_1)(); char *x_1_1_2; struct _opaque_pthread_t {} *x_1_1_3; struct _opaque_pthread_mutex_t { long x_4_2_1; BOOL x_4_2_2[40]; } x_1_1_4; } x1; struct RenderObserverList { struct TThreadSafeList<RenderObserver> { struct NodeStack { struct Node {} *x_1_3_1; } x_1_2_1; struct NodeStack { struct Node {} *x_2_3_1; } x_1_2_2; struct NodeStack { struct Node {} *x_3_3_1; } x_1_2_3; } x_2_1_1; bool x_2_1_2; } x2; struct AUEventSchedule { struct AURenderEventAllocator {} *x_3_1_1; struct TAtomicStack<AURenderEventStruct> { struct AURenderEventStruct {} *x_2_2_1; } x_3_1_2; union { /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x_3_2_1; void*x_3_2_2; void*x_3_2_3; in double x_3_2_4; void*x_3_2_5; const void*x_3_2_6; void x_3_2_7; void*x_3_2_8; in void*x_3_2_9; } *x_3_1_3; union { void*x_4_2_1; void*x_4_2_2; void*x_4_2_3; in double x_4_2_4; void*x_4_2_5; const void*x_4_2_6; void x_4_2_7; void*x_4_2_8; in void*x_4_2_9; } *x_3_1_4; id x_3_1_5; } x3; void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; out void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; long x29; void*x30; int x31; void*x32; void*x33; unsigned short x34; void*x35; void*x36; void*x37; void*x38; void*x39; struct CAMutex { int (**x_40_1_1)(); char *x_40_1_2; struct _opaque_pthread_t {} *x_40_1_3; struct _opaque_pthread_mutex_t { long x_4_2_1; BOOL x_4_2_2[40]; } x_40_1_4; } x40; struct RenderObserverList { struct TThreadSafeList<RenderObserver> { struct NodeStack { struct Node {} *x_1_3_1; } x_1_2_1; struct NodeStack { struct Node {} *x_2_3_1; } x_1_2_2; struct NodeStack { struct Node {} *x_3_3_1; } x_1_2_3; } x_41_1_1; bool x_41_1_2; } x41; struct AUEventSchedule { struct AURenderEventAllocator {} *x_42_1_1; struct TAtomicStack<AURenderEventStruct> { struct AURenderEventStruct {} *x_2_2_1; } x_42_1_2; union { void*x_3_2_1; void*x_3_2_2; void*x_3_2_3; in double x_3_2_4; void*x_3_2_5; const void*x_3_2_6; void x_3_2_7; void*x_3_2_8; in void*x_3_2_9; } *x_42_1_3; union { void*x_4_2_1; void*x_4_2_2; void*x_4_2_3; in double x_4_2_4; void*x_4_2_5; const void*x_4_2_6; void x_4_2_7; void*x_4_2_8; in void*x_4_2_9; } *x_42_1_4; id x_42_1_5; } x42; void*x43; void*x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; out void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; unsigned char x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; int (**x73)(); char *x74; struct _opaque_pthread_t {} *x75; struct _opaque_pthread_mutex_t { long x_76_1_1; BOOL x_76_1_2[40]; } x76; })realtimeState;
- (void)removeRenderObserver:(int)arg1;
- (void)removeRenderObserver:(int (*)arg1 userData:(void*)arg2;
- (id /* block */)renderBlock;
- (int)renderQuality;
- (BOOL)renderResourcesAllocated;
- (void)requestViewControllerWithCompletionHandler:(id /* block */)arg1;
- (void)reset;
- (id /* block */)scheduleMIDIEventBlock;
- (id /* block */)scheduleParameterBlock;
- (void)setCachedViewController:(id)arg1;
- (void)setContextName:(id)arg1;
- (void)setCurrentPreset:(id)arg1;
- (void)setFullState:(id)arg1;
- (void)setFullStateForDocument:(id)arg1;
- (void)setMaximumFramesToRender:(unsigned int)arg1;
- (void)setMusicalContextBlock:(id /* block */)arg1;
- (void)setRealtimeState:(struct RealtimeState { struct CAMutex { int (**x_1_1_1)(); char *x_1_1_2; struct _opaque_pthread_t {} *x_1_1_3; struct _opaque_pthread_mutex_t { long x_4_2_1; BOOL x_4_2_2[40]; } x_1_1_4; } x1; struct RenderObserverList { struct TThreadSafeList<RenderObserver> { struct NodeStack { struct Node {} *x_1_3_1; } x_1_2_1; struct NodeStack { struct Node {} *x_2_3_1; } x_1_2_2; struct NodeStack { struct Node {} *x_3_3_1; } x_1_2_3; } x_2_1_1; bool x_2_1_2; } x2; struct AUEventSchedule { struct AURenderEventAllocator {} *x_3_1_1; struct TAtomicStack<AURenderEventStruct> { struct AURenderEventStruct {} *x_2_2_1; } x_3_1_2; union { /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x_3_2_1; void*x_3_2_2; void*x_3_2_3; in double x_3_2_4; void*x_3_2_5; const void*x_3_2_6; void x_3_2_7; void*x_3_2_8; in void*x_3_2_9; } *x_3_1_3; union { void*x_4_2_1; void*x_4_2_2; void*x_4_2_3; in double x_4_2_4; void*x_4_2_5; const void*x_4_2_6; void x_4_2_7; void*x_4_2_8; in void*x_4_2_9; } *x_3_1_4; id x_3_1_5; } x3; void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; out void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; long x29; void*x30; int x31; void*x32; void*x33; unsigned short x34; void*x35; void*x36; void*x37; void*x38; void*x39; struct CAMutex { int (**x_40_1_1)(); char *x_40_1_2; struct _opaque_pthread_t {} *x_40_1_3; struct _opaque_pthread_mutex_t { long x_4_2_1; BOOL x_4_2_2[40]; } x_40_1_4; } x40; struct RenderObserverList { struct TThreadSafeList<RenderObserver> { struct NodeStack { struct Node {} *x_1_3_1; } x_1_2_1; struct NodeStack { struct Node {} *x_2_3_1; } x_1_2_2; struct NodeStack { struct Node {} *x_3_3_1; } x_1_2_3; } x_41_1_1; bool x_41_1_2; } x41; struct AUEventSchedule { struct AURenderEventAllocator {} *x_42_1_1; struct TAtomicStack<AURenderEventStruct> { struct AURenderEventStruct {} *x_2_2_1; } x_42_1_2; union { void*x_3_2_1; void*x_3_2_2; void*x_3_2_3; in double x_3_2_4; void*x_3_2_5; const void*x_3_2_6; void x_3_2_7; void*x_3_2_8; in void*x_3_2_9; } *x_42_1_3; union { void*x_4_2_1; void*x_4_2_2; void*x_4_2_3; in double x_4_2_4; void*x_4_2_5; const void*x_4_2_6; void x_4_2_7; void*x_4_2_8; in void*x_4_2_9; } *x_42_1_4; id x_42_1_5; } x42; void*x43; void*x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; out void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; unsigned char x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; int (**x73)(); char *x74; struct _opaque_pthread_t {} *x75; struct _opaque_pthread_mutex_t { long x_76_1_1; BOOL x_76_1_2[40]; } x76; })arg1;
- (void)setRenderQuality:(int)arg1;
- (void)setRenderResourcesAllocated:(BOOL)arg1;
- (void)setRenderingOffline:(BOOL)arg1;
- (void)setShouldBypassEffect:(BOOL)arg1;
- (void)setTransportStateBlock:(id /* block */)arg1;
- (BOOL)shouldBypassEffect;
- (BOOL)shouldChangeToFormat:(id)arg1 forBus:(id)arg2;
- (double)tailTime;
- (int)tokenByAddingRenderObserver:(id /* block */)arg1;
- (id /* block */)transportStateBlock;
- (int)virtualMIDICableCount;

@end
