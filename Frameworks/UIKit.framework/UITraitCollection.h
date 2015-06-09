/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITraitCollection : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        int userInterfaceIdiom; 
        float displayScale; 
        int touchLevel; 
        unsigned int interactionModel; 
        int horizontalSizeClass; 
        int verticalSizeClass; 
        int userInterfaceStyle; 
    }  _builtinTraits;
    NSDictionary * _clientDefinedTraits;
}

@property (nonatomic, readonly) int barMetrics;
@property (nonatomic, readonly) int barPosition;
@property (nonatomic, readonly) float displayScale;
@property (nonatomic, readonly) int horizontalSizeClass;
@property (nonatomic, readonly) int userInterfaceIdiom;
@property (nonatomic, readonly) int verticalSizeClass;

+ (id)_emptyTraitCollection;
+ (id)_traitCollectionWithValue:(id)arg1 forTraitNamed:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)traitCollectionWithDisplayScale:(float)arg1;
+ (id)traitCollectionWithHorizontalSizeClass:(int)arg1;
+ (id)traitCollectionWithInteractionModel:(unsigned int)arg1;
+ (id)traitCollectionWithTouchLevel:(int)arg1;
+ (id)traitCollectionWithTraitsFromCollections:(id)arg1;
+ (id)traitCollectionWithUserInterfaceIdiom:(int)arg1;
+ (id)traitCollectionWithUserInterfaceStyle:(int)arg1;
+ (id)traitCollectionWithVerticalSizeClass:(int)arg1;

- (int)_compare:(id)arg1;
- (id)_initWithBuiltinTraitStorage:(struct { int x1; float x2; int x3; unsigned int x4; int x5; int x6; int x7; }*)arg1 clientDefinedTraits:(id)arg2;
- (BOOL)_matchesIntersectionWithTraitCollection:(id)arg1;
- (id)_valueForTraitNamed:(id)arg1;
- (BOOL)containsTraitsInCollection:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (float)displayScale;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (int)horizontalSizeClass;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned int)interactionModel;
- (BOOL)isEqual:(id)arg1;
- (int)touchLevel;
- (int)userInterfaceIdiom;
- (int)userInterfaceStyle;
- (int)verticalSizeClass;

// UITraitCollection (BarTraits)

+ (id)traitCollectionWithBarMetrics:(int)arg1;
+ (id)traitCollectionWithBarPosition:(int)arg1;

- (int)barMetrics;
- (int)barPosition;

// UITraitCollection (UIImageAssetSupport)

- (id)_namedImageDescription;

@end
