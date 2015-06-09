/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface AUAudioUnitBus : NSObject {
    int  _busType;
    double  _contextPresentationLatency;
    BOOL  _enabled;
    AVAudioFormat * _format;
    unsigned int  _index;
    unsigned int  _maximumChannelCount;
    NSString * _name;
    struct vector<BusPropertyObserver, std::__1::allocator<BusPropertyObserver> > { 
        struct BusPropertyObserver {} *__begin_; 
        struct BusPropertyObserver {} *__end_; 
        struct __compressed_pair<BusPropertyObserver *, std::__1::allocator<BusPropertyObserver> > { 
            struct BusPropertyObserver {} *__first_; 
        } __end_cap_; 
    }  _observers;
    AUAudioUnit * _ownerAudioUnit;
    NSArray * _supportedChannelCounts;
    NSArray * _supportedChannelLayoutTags;
}

@property (nonatomic, readonly) int busType;
@property (nonatomic) double contextPresentationLatency;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (nonatomic, readonly) AVAudioFormat *format;
@property (nonatomic, readonly) unsigned int index;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<BusPropertyObserver' */ struct  observers; /* unknown property attribute:  std::__1::allocator<BusPropertyObserver> >=^{BusPropertyObserver}}} */
@property (nonatomic, readonly) AUAudioUnit *ownerAudioUnit;
@property (nonatomic, readonly, copy) NSArray *supportedChannelLayoutTags;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void*)arg4;
- (int)busType;
- (double)contextPresentationLatency;
- (void)dealloc;
- (id)format;
- (unsigned int)index;
- (id)initWithFormat:(id)arg1 error:(id*)arg2;
- (BOOL)isEnabled;
- (unsigned int)maximumChannelCount;
- (id)name;
- (struct vector<BusPropertyObserver, std::__1::allocator<BusPropertyObserver> > { struct BusPropertyObserver {} *x1; struct BusPropertyObserver {} *x2; struct __compressed_pair<BusPropertyObserver *, std::__1::allocator<BusPropertyObserver> > { struct BusPropertyObserver {} *x_3_1_1; } x3; })observers;
- (id)ownerAudioUnit;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)setBusType:(int)arg1;
- (void)setContextPresentationLatency:(double)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)setFormat:(id)arg1 error:(id*)arg2;
- (void)setIndex:(unsigned int)arg1;
- (void)setMaximumChannelCount:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setObservers:(struct vector<BusPropertyObserver, std::__1::allocator<BusPropertyObserver> > { struct BusPropertyObserver {} *x1; struct BusPropertyObserver {} *x2; struct __compressed_pair<BusPropertyObserver *, std::__1::allocator<BusPropertyObserver> > { struct BusPropertyObserver {} *x_3_1_1; } x3; })arg1;
- (void)setOwnerAudioUnit:(id)arg1;
- (void)setSupportedChannelCounts:(id)arg1;
- (id)supportedChannelCounts;
- (id)supportedChannelLayoutTags;

@end
