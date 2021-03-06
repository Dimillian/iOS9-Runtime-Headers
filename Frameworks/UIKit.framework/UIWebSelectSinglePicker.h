/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebSelectSinglePicker : UIPickerView <UIPickerViewDataSource, UIPickerViewDelegate, UIWebFormControl> {
    int  _indexToSelectWhenDone;
    NSArray * _optionItems;
    <UIWebSelectedItemPrivate> * _optionToSelectWhenDone;
    DOMHTMLSelectElement * _selectNode;
    int  _selectedIndex;
    <UIWebSelectedItemPrivate> * _selectedOptionItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)controlView;
- (void)dealloc;
- (id)initWithDOMHTMLSelectElement:(id)arg1 allItems:(id)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView:(id)arg1 attributedTitleForRow:(int)arg2 forComponent:(int)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;

@end
