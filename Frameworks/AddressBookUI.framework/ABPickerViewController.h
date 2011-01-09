/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPickerViewControllerDismissDelegate>, <ABStyleProvider>, <ABPickerViewControllerDelegate>;



@interface ABPickerViewController : UITableViewController 
{
    void *_context;
    SEL _selectionAction;
    <ABPickerViewControllerDelegate> *_delegate;
    <ABPickerViewControllerDismissDelegate> *_dismissDelegate;
    <ABStyleProvider> *_styleProvider;
}

@property(readonly) UIBarButtonItem *cancelBarButtonItem;
@property(readonly) UIBarButtonItem *doneBarButtonItem;
@property(retain) <ABStyleProvider> *styleProvider;
@property SEL selectionAction;
@property <ABPickerViewControllerDismissDelegate> *dismissDelegate;
@property <ABPickerViewControllerDelegate> *delegate;
@property void *context;


- (void)cancelButtonClicked:(id)arg1;
- (void)viewDidLoad;
- (BOOL)_allowsAutorotation;
- (BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg1;
- (void)setContext:(void*)arg1;
- (void*)context;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)doneBarButtonItem;
- (SEL)selectionAction;
- (id)dismissDelegate;
- (void)setSelectionAction:(SEL)arg1;
- (void)setDismissDelegate:(id)arg1;
- (id)cancelBarButtonItem;
- (void)attemptDismissAfterSelectingItem:(id)arg1;
- (float)ab_heightToFitForViewInPopoverView;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end