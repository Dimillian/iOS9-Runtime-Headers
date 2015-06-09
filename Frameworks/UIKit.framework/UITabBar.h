/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITabBar : UIView <_UIBackdropViewGraphicsQualityChangeDelegate, _UIShadowedView> {
    UIView * _accessoryView;
    _UIBackdropView * _adaptiveBackdrop;
    _UITabBarAppearanceStorage * _appearanceStorage;
    NSString * _backdropViewLayerGroupName;
    _UITabBarBackgroundView * _backgroundView;
    int  _barMetrics;
    int  _barOrientation;
    NSArray * _buttonItems;
    NSArray * _customizationItems;
    UIView * _customizeView;
    <UITabBarDelegate> * _delegate;
    NSMutableArray * _dividerImageViews;
    BOOL  _dividerImagesAreInvalid;
    BOOL  _dividerImagesChangeWithSelection;
    UIMotionEffect * _focusedItemHighlightMotionEffect;
    UIView * _focusedItemHighlightView;
    struct __CFArray { } * _hiddenItems;
    BOOL  _hidesShadow;
    int  _imageStyle;
    float  _itemDimension;
    int  _itemPositioning;
    float  _itemSpacing;
    NSArray * _items;
    UIScrollView * _itemsScrollView;
    float  _nextSelectionSlideDuration;
    BOOL  _scrollsItems;
    UITabBarItem * _selectedItem;
    UIView * _shadowView;
    BOOL  _showsHighlightedState;
    struct { 
        unsigned int alertShown : 1; 
        unsigned int wasEnabled : 1; 
        unsigned int customized : 1; 
        unsigned int downButtonSentAction : 1; 
        unsigned int isLocked : 1; 
        unsigned int backgroundIsPattern : 1; 
        unsigned int hasCustomBackgroundView : 1; 
        unsigned int barStyle : 3; 
        unsigned int barTranslucence : 3; 
        unsigned int backgroundNeedsUpdate : 1; 
        unsigned int hiddenAwaitingFocus : 1; 
        unsigned int focusedItemHighlightShouldBeVisible : 1; 
        unsigned int hasVibrantLabels : 1; 
    }  _tabBarFlags;
    int  _tabBarSizing;
}

@property (setter=_setAccessoryView:, nonatomic) UIView *_accessoryView;
@property (setter=_setBackgroundNeedsUpdate:, nonatomic) BOOL _backgroundNeedsUpdate;
@property (setter=_setBackgroundView:, nonatomic, retain) UIView *_backgroundView;
@property (setter=_setBarMetrics:, nonatomic) int _barMetrics;
@property (setter=_setBarOrientation:, nonatomic) int _barOrientation;
@property (setter=_setDividerImageViews:, nonatomic, retain) NSMutableArray *_dividerImageViews;
@property (setter=_setDividerImagesAreInvalid:, nonatomic) BOOL _dividerImagesAreInvalid;
@property (setter=_setDividerImagesChangeWithSelection:, nonatomic) BOOL _dividerImagesChangeWithSelection;
@property (setter=_setHidesShadow:, nonatomic) BOOL _hidesShadow;
@property (setter=_setImageStyle:, nonatomic) int _imageStyle;
@property (setter=_setInterTabButtonSpacing:, nonatomic) float _interTabButtonSpacing;
@property (setter=_setNextSelectionSlideDuration:, nonatomic) float _nextSelectionSlideDuration;
@property (setter=_setScrollsItems:, nonatomic) BOOL _scrollsItems;
@property (setter=_setShowsHighlightedState:, nonatomic) BOOL _showsHighlightedState;
@property (setter=_setTabBarSizing:, nonatomic) int _tabBarSizing;
@property (setter=_setTabButtonWidth:, nonatomic) float _tabButtonWidth;
@property (setter=_setVibrantLabels:, nonatomic) BOOL _vibrantLabels;
@property (getter=_backdropViewLayerGroupName, setter=_setBackdropViewLayerGroupName:, nonatomic, retain) NSString *backdropViewLayerGroupName;
@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic) int barStyle;
@property (nonatomic, retain) UIColor *barTintColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UITabBarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_focusedItemHighlightShouldBeVisible, setter=_setFocusedItemHightlightShouldBeVisible:, nonatomic) BOOL focusedItemHighlightShouldBeVisible;
@property (readonly) unsigned int hash;
@property (getter=_isHiddenAwaitingFocus, setter=_setHiddenAwaitingFocus:, nonatomic) BOOL hiddenAwaitingFocus;
@property (nonatomic) int itemPositioning;
@property (nonatomic) float itemSpacing;
@property (nonatomic) float itemWidth;
@property (nonatomic, copy) NSArray *items;
@property (getter=isLocked, nonatomic) BOOL locked;
@property (nonatomic, retain) UIColor *selectedImageTintColor;
@property (nonatomic) UITabBarItem *selectedItem;
@property (nonatomic, retain) UIImage *selectionIndicatorImage;
@property (nonatomic, retain) UIImage *shadowImage;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *tintColor;
@property (getter=isTranslucent, nonatomic) BOOL translucent;

+ (void)_initializeForIdiom:(int)arg1;
+ (id)_tabBarForView:(id)arg1;
+ (id)_unselectedTabTintColorForView:(id)arg1;

- (void)_accessibilityButtonShapesEnabledDidChangeNotification:(id)arg1;
- (void)_accessibilityButtonShapesParametersDidChange;
- (id)_accessoryView;
- (void)_animateSelectionChangeFromView:(id)arg1 toView:(id)arg2 duration:(float)arg3;
- (id)_appearanceStorage;
- (id)_backdropViewLayerGroupName;
- (BOOL)_backgroundNeedsUpdate;
- (int)_barMetrics;
- (int)_barOrientation;
- (BOOL)_canDrawContent;
- (void)_cleanupAdaptiveBackdrop;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)_didChangeFromIdiom:(int)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (id)_dividerImageForLeftButtonState:(unsigned int)arg1 rightButtonState:(unsigned int)arg2;
- (id)_dividerImageViews;
- (BOOL)_dividerImagesAreInvalid;
- (BOOL)_dividerImagesChangeWithSelection;
- (void)_doCommonTabBarInit;
- (int)_effectiveBarOrientation;
- (id)_effectiveBarTintColor;
- (void)_effectiveBarTintColorDidChange;
- (void)_finishSetItems:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (BOOL)_focusedItemHighlightShouldBeVisible;
- (void)_hideItemsAnimated:(BOOL)arg1;
- (BOOL)_hidesShadow;
- (int)_imageStyle;
- (float)_interTabButtonSpacing;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_invalidateDividerImages;
- (BOOL)_isEligibleForFocus;
- (BOOL)_isHiddenAwaitingFocus;
- (BOOL)_isTranslucent;
- (void)_makeCurrentButtonFirstResponder;
- (float)_nextSelectionSlideDuration;
- (id)_parentViewForItems;
- (void)_populateArchivedSubviews:(id)arg1;
- (BOOL)_scrollsItems;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)_setAccessoryView:(id)arg1;
- (void)_setBackdropViewLayerGroupName:(id)arg1;
- (void)_setBackgroundNeedsUpdate:(BOOL)arg1;
- (void)_setBarMetrics:(int)arg1;
- (void)_setBarOrientation:(int)arg1;
- (void)_setDividerImage:(id)arg1 forLeftButtonState:(unsigned int)arg2 rightButtonState:(unsigned int)arg3;
- (void)_setDividerImageViews:(id)arg1;
- (void)_setDividerImagesAreInvalid:(BOOL)arg1;
- (void)_setDividerImagesChangeWithSelection:(BOOL)arg1;
- (void)_setFocusedItemHightlightShouldBeVisible:(BOOL)arg1;
- (void)_setFocusedItemHightlightVisible:(BOOL)arg1;
- (void)_setHiddenAwaitingFocus:(BOOL)arg1;
- (void)_setHidesShadow:(BOOL)arg1;
- (void)_setImageStyle:(int)arg1;
- (void)_setInterTabButtonSpacing:(float)arg1;
- (void)_setNextSelectionSlideDuration:(float)arg1;
- (void)_setScrollsItems:(BOOL)arg1;
- (void)_setShadowAlpha:(float)arg1;
- (void)_setShowsHighlightedState:(BOOL)arg1;
- (void)_setTabBarSizing:(int)arg1;
- (void)_setTabButtonWidth:(float)arg1;
- (float)_shadowAlpha;
- (id)_shadowView;
- (void)_showItemsAnimated:(BOOL)arg1;
- (BOOL)_showsHighlightedState;
- (BOOL)_subclassImplementsDrawRect;
- (int)_tabBarSizing;
- (float)_tabButtonWidth;
- (id)_topmostDividerImageView;
- (void)_updateFocusedItemHighlightFrame;
- (void)_updateHighlightMotionEffect;
- (void)_updateTintedImages:(id)arg1 selected:(BOOL)arg2;
- (BOOL)_wantsAdaptiveBackdrop;
- (void)addConstraint:(id)arg1;
- (id)backgroundImage;
- (int)barStyle;
- (id)barTintColor;
- (void)beginCustomizingItems:(id)arg1;
- (BOOL)canBecomeFocused;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)endCustomizingAnimated:(BOOL)arg1;
- (void)focusedViewDidChange;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isCustomizing;
- (BOOL)isLocked;
- (BOOL)isTranslucent;
- (int)itemPositioning;
- (float)itemSpacing;
- (float)itemWidth;
- (id)items;
- (void)layoutSubviews;
- (id)preferredFocusedItem;
- (void)removeConstraint:(id)arg1;
- (id)selectedImageTintColor;
- (id)selectedItem;
- (id)selectionIndicatorImage;
- (void)setBackgroundImage:(id)arg1;
- (void)setBarStyle:(int)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setItemPositioning:(int)arg1;
- (void)setItemSpacing:(float)arg1;
- (void)setItemWidth:(float)arg1;
- (void)setItems:(id)arg1;
- (void)setItems:(id)arg1 animated:(BOOL)arg2;
- (void)setLocked:(BOOL)arg1;
- (void)setSelectedImageTintColor:(id)arg1;
- (void)setSelectedItem:(id)arg1;
- (void)setSelectionIndicatorImage:(id)arg1;
- (void)setShadowImage:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (id)shadowImage;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

// UITabBar (Static)

- (void)_adjustButtonSelection:(id)arg1;
- (void)_buttonCancel:(id)arg1;
- (void)_buttonDown:(id)arg1;
- (void)_buttonDownDelayed:(id)arg1;
- (void)_buttonUp:(id)arg1;
- (void)_configureItems:(id)arg1;
- (void)_configureTabBarReplacingItem:(id)arg1 withNewItem:(id)arg2 dragging:(BOOL)arg3 swapping:(BOOL)arg4;
- (void)_customizeDoneButtonAction:(id)arg1;
- (void)_customizeWithAvailableItems:(id)arg1;
- (void)_dismissCustomizeSheet:(BOOL)arg1;
- (void)_finishCustomizeAnimation:(id)arg1;
- (void)_positionTabBarButtons:(id)arg1 ignoringItem:(id)arg2;
- (void)_setVisualAltitude:(float)arg1;
- (void)_setVisualAltitudeBias:(struct CGSize { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_tabAreaLayoutBounds;
- (void)_updateAppearanceCustomizationIfNecessaryForItem:(id)arg1;
- (void)_updateBackgroundImage;
- (void)_updateDividerImagesIfNecessary;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(int)arg2;
- (id)backdropView:(id)arg1 willChangeToGraphicsQuality:(int)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;

// UITabBar (SynthEvents)

- (BOOL)_isHidden:(id)arg1;

// UITabBar (UIKitAccessibilityInterfaceBuilderSupport)

- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;

// UITabBar (UITabBarInternal)

- (void)_alertDidHide;
- (void)_alertWillShow:(BOOL)arg1 duration:(float)arg2;

// UITabBar (UITabBarPrivate)

- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_tabBarFinishedAnimating;
- (id)buttonItems;
- (void)dismissCustomizeSheet:(BOOL)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setAutoresizingMask:(unsigned int)arg1;
- (void)setBadgeAnimated:(BOOL)arg1 forButton:(int)arg2;
- (void)setBadgeGlyph:(id)arg1 forButton:(int)arg2;
- (void)setBadgeValue:(id)arg1 forButton:(int)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setButtonItems:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

// UITabBar (_UIKitLayoutSpacing)

- (float)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (float)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (BOOL)_hasCustomAutolayoutNeighborSpacing;

// UITabBar (_UIPrivateCustomizationSPI)

- (id)_backgroundView;
- (void)_setBackgroundImage:(id)arg1;
- (void)_setBackgroundView:(id)arg1;
- (void)_setLabelFont:(id)arg1;
- (void)_setLabelShadowColor:(id)arg1;
- (void)_setLabelShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)_setLabelTextColor:(id)arg1 selectedTextColor:(id)arg2;
- (void)_setSelectionIndicatorImage:(id)arg1;
- (void)_setVibrantLabels:(BOOL)arg1;
- (BOOL)_vibrantLabels;

@end
