/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISUIKitDialogOperation : ISDialogOperation {
    UIAlertController * _alert;
    UIWindow * _window;
}

- (void).cxx_destruct;
- (void)_cleanupAlert;
- (void)_showAlertWithCompletion:(id /* block */)arg1;
- (void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2;
- (void)run;

@end