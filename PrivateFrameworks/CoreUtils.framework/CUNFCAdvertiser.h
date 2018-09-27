/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUNFCAdvertiser : NSObject <NFNdefTagSessionDelegate> {
    NSURL * _advertisementURI;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    id /* block */  _invalidationHandler;
    CURetrier * _nfcRetrier;
    NFNdefTagSession * _nfcSession;
    bool  _nfcStarted;
    NSObject<NFSession> * _nfcTempSession;
    id /* block */  _tagStateChangedHandler;
}

@property (nonatomic, copy) NSURL *advertisementURI;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ tagStateChangedHandler;

- (void).cxx_destruct;
- (void)_ensureSessionStarted;
- (void)_ensureSessionStopped;
- (void)_handleSessionStarted:(id)arg1 error:(id)arg2;
- (void)_invalidateWithError:(id)arg1;
- (void)activate;
- (id)advertisementURI;
- (id)dispatchQueue;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)ndefTagSession:(id)arg1 didTagStateChange:(unsigned int)arg2;
- (void)ndefTagSessionDidEndUnexpectedly:(id)arg1;
- (void)setAdvertisementURI:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setTagStateChangedHandler:(id /* block */)arg1;
- (id /* block */)tagStateChangedHandler;

@end