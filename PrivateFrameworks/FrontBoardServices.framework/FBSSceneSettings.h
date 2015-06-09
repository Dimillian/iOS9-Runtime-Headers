/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneSettings : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    BOOL  _backgrounded;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _frame;
    NSSet * _ignoreOcclusionReasons;
    int  _interfaceOrientation;
    float  _level;
    BOOL  _occluded;
    BOOL  _occludedHasBeenCalculated;
    NSArray * _occlusions;
    BSSettings * _otherSettings;
    BSSettings * _transientLocalSettings;
}

@property (getter=isBackgrounded, nonatomic, readonly) BOOL backgrounded;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int interfaceOrientation;
@property (nonatomic, readonly) float level;
@property (nonatomic, readonly, copy) NSArray *occlusions;
@property (readonly) Class superclass;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

// FBSSceneSettings (null)

+ (BOOL)_isMutable;
+ (id)settings;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (unsigned int)hash;
- (id)ignoreOcclusionReasons;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (int)interfaceOrientation;
- (BOOL)isBackgrounded;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isIgnoringOcclusions;
- (BOOL)isOccluded;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
- (float)level;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)occlusions;
- (id)otherSettings;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)transientLocalSettings;
- (id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned int)arg3;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit

// FBSSceneSettings (UIApplicationSceneSettings)

- (BOOL)isUISubclass;

@end
