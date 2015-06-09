/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneClientSettings : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    NSSet * _occlusions;
    BSSettings * _otherSettings;
    int  _preferredInterfaceOrientation;
    float  _preferredLevel;
    NSString * _preferredSceneHostIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSSet *occlusions;
@property (nonatomic, readonly) int preferredInterfaceOrientation;
@property (nonatomic, readonly) float preferredLevel;
@property (nonatomic, readonly, copy) NSString *preferredSceneHostIdentifier;
@property (readonly) Class superclass;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

// FBSSceneClientSettings (null)

+ (BOOL)_isMutable;
+ (id)settings;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)occlusions;
- (id)otherSettings;
- (int)preferredInterfaceOrientation;
- (float)preferredLevel;
- (id)preferredSceneHostIdentifier;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned int)arg3;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit

// FBSSceneClientSettings (UIApplicationSceneClientSettings)

- (BOOL)isUISubclass;

@end
