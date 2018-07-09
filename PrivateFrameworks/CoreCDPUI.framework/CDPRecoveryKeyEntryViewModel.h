/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPRecoveryKeyEntryViewModel : NSObject {
    id /* block */  _completionHandler;
    CDPContext * _context;
    int  _mode;
    CDPRemoteDeviceSecretValidator * _secretValidator;
    bool  _shouldSuppressCancelButton;
    <CDPRecoveryKeyValidator> * _validator;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly) int mode;
@property bool shouldSuppressCancelButton;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)footerButtonTitle;
- (id)footerLabelText;
- (void)handleCancel;
- (id)headerSubtitle;
- (id)headerTitle;
- (id)initWithContext:(id)arg1 validator:(id)arg2;
- (id)initWithContext:(id)arg1 validator:(id)arg2 mode:(int)arg3;
- (int)mode;
- (id)placeholderText;
- (void)processCollectedRecoveryKey:(id)arg1 completion:(id /* block */)arg2;
- (id)recoveryKey;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setShouldSuppressCancelButton:(bool)arg1;
- (bool)shouldSuppressCancelButton;

@end