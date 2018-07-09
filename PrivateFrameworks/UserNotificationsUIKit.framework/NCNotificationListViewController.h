/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListViewController : UICollectionViewController <NCNotificationListCellDelegate, NCNotificationListCollectionViewDelegate, NCNotificationViewControllerDelegatePrivate, UIGestureRecognizerDelegate> {
    bool  _backgroundBlurred;
    NCNotificationListCell * _cellWithRevealedActions;
    NSMutableDictionary * _cellsSizesCaches;
    NSMutableDictionary * _cellsSizesCachesSuppressedContent;
    NCAnimationCoordinator * _childPreferredContentSizeChangeCoordinator;
    <NCNotificationListViewControllerDestinationDelegate> * _destinationDelegate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insetMargins;
    bool  _needsReloadData;
    bool  _notificationRequestRemovedWhileInLongLook;
    bool  _notificationRequestRemovedWhilePossiblyInLongLook;
    NCNotificationViewController * _notificationViewControllerForSizing;
    NSHashTable * _observers;
    NCNotificationListTouchEater * _touchEater;
    <NCNotificationListViewControllerUserInteractionDelegate> * _userInteractionDelegate;
    struct { 
        unsigned int significantUserInteraction : 1; 
        unsigned int didScroll : 1; 
        unsigned int didEndScrolling : 1; 
        unsigned int willBeginInteractionWithNotificationVC : 1; 
        unsigned int didEndInteractionWithNotificationVC : 1; 
        unsigned int scrollViewDidScroll : 1; 
        unsigned int scrollViewDidZoom : 1; 
        unsigned int scrollViewWillBeginDragging : 1; 
        unsigned int scrollViewWillEndDragging : 1; 
        unsigned int scrollViewDidEndDragging : 1; 
        unsigned int scrollViewWillBeginDecelerating : 1; 
        unsigned int scrollViewDidEndDecelerating : 1; 
        unsigned int scrollViewDidEndScrollingAnimation : 1; 
        unsigned int scrollViewWillBeginZooming : 1; 
        unsigned int scrollViewDidEndZooming : 1; 
        unsigned int scrollViewShouldScrollToTop : 1; 
        unsigned int scrollViewDidScrollToTop : 1; 
    }  _userInteractionDelegateFlags;
    NCNotificationViewController * _viewControllerPossiblyPresentingLongLook;
    NCNotificationViewController * _viewControllerPresentingLongLook;
}

@property (getter=isBackgroundBlurred, nonatomic) bool backgroundBlurred;
@property (nonatomic, readonly) NSString *backgroundGroupName;
@property (nonatomic) NCNotificationListCell *cellWithRevealedActions;
@property (nonatomic, retain) NSMutableDictionary *cellsSizesCaches;
@property (nonatomic, retain) NSMutableDictionary *cellsSizesCachesSuppressedContent;
@property (nonatomic, retain) NCAnimationCoordinator *childPreferredContentSizeChangeCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NCNotificationListViewControllerDestinationDelegate> *destinationDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insetMargins;
@property (nonatomic, readonly) double itemSpacing;
@property (nonatomic) bool needsReloadData;
@property (nonatomic) bool notificationRequestRemovedWhileInLongLook;
@property (nonatomic) bool notificationRequestRemovedWhilePossiblyInLongLook;
@property (nonatomic, retain) NCNotificationViewController *notificationViewControllerForSizing;
@property (nonatomic, retain) NSHashTable *observers;
@property (getter=isPresentingNotificationInLongLook, nonatomic, readonly) bool presentingNotificationInLongLook;
@property (readonly) Class superclass;
@property (nonatomic, retain) NCNotificationListTouchEater *touchEater;
@property (nonatomic) <NCNotificationListViewControllerUserInteractionDelegate> *userInteractionDelegate;
@property (nonatomic) struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; } userInteractionDelegateFlags;
@property (nonatomic, retain) NCNotificationViewController *viewControllerPossiblyPresentingLongLook;
@property (nonatomic, retain) NCNotificationViewController *viewControllerPresentingLongLook;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_forceTouchAvailabilityDidChange:(id)arg1;
- (bool)_forwardRequestToLongLookIfPresented:(id)arg1 forCoalescedNotification:(id)arg2;
- (id)_groupName;
- (void)_handleEatenTouch:(id)arg1;
- (void)_hintSideSwipeForDefaultActionForNotificationRequest:(id)arg1;
- (void)_installTouchEater;
- (bool)_isContentSuppressedForNotificationRequest:(id)arg1;
- (bool)_isPointInWindowSpace:(struct CGPoint { double x1; double x2; })arg1 insideCell:(id)arg2;
- (id)_notificationRequestForCell:(id)arg1;
- (void)_performCollectionViewOperationBlock:(id /* block */)arg1;
- (void)_performCollectionViewOperationBlockIfNecessary:(id /* block */)arg1;
- (void)_reloadCollectionViewDataIfNecessary;
- (void)_reloadRequestsAtIndices:(id)arg1;
- (void)_removeCachedSizesForNotificationRequest:(id)arg1;
- (void)addContentObserver:(id)arg1;
- (id)backgroundGroupName;
- (id)captureOnlyMaterialViewForCurrentState;
- (id)cellWithRevealedActions;
- (id)cellsSizesCaches;
- (id)cellsSizesCachesSuppressedContent;
- (id)childPreferredContentSizeChangeCoordinator;
- (void)clearAll;
- (void)clearAllNonPersistent;
- (bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 performUpdatesAlongsideLayout:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)destinationDelegate;
- (bool)dismissModalFullScreenAnimated:(bool)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleEatenTouchBeginStateForGestureRecognizer:(id)arg1;
- (void)handleEatenTouchEndStateForGestureRecognizer:(id)arg1;
- (bool)hasContent;
- (bool)hasVisibleContent;
- (id)hideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1;
- (void)hideRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)hideRequestsForNotificationSectionSettings:(id)arg1;
- (id)indexPathForNotificationRequest:(id)arg1;
- (id)init;
- (bool)insertNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insetMargins;
- (bool)isBackgroundBlurred;
- (bool)isContentExtensionVisible:(id)arg1;
- (bool)isNotificationListCellVisibleForNotificationRequest:(id)arg1;
- (bool)isPresentingNotificationInLongLook;
- (double)itemSpacing;
- (void)listViewControllerPresentedByUserAction;
- (void)loadView;
- (void)longLookDidDismissForNotificationViewController:(id)arg1;
- (void)longLookDidPresentForNotificationViewController:(id)arg1;
- (void)longLookWillDismissForNotificationViewController:(id)arg1;
- (void)longLookWillPresentForNotificationViewController:(id)arg1;
- (bool)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (bool)needsReloadData;
- (bool)notificationListCell:(id)arg1 shouldPanHorizontallyWithTouch:(id)arg2;
- (void)notificationListCellDidHideCellActions:(id)arg1 resetCellScrollPosition:(bool)arg2 animated:(bool)arg3;
- (void)notificationListCellDidRevealCellActions:(id)arg1;
- (void)notificationListCellDidSignificantUserInteraction:(id)arg1;
- (void)notificationListCellRequestsDefaultAction:(id)arg1 completion:(id /* block */)arg2;
- (void)notificationListCellRequestsDismissAction:(id)arg1 completion:(id /* block */)arg2;
- (void)notificationListCellRequestsPresentingLongLook:(id)arg1 completion:(id /* block */)arg2;
- (void)notificationListCollectionView:(id)arg1 willSetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)notificationRequestAtIndexPath:(id)arg1;
- (id)notificationRequestInLongLook;
- (id)notificationRequestPossiblyInLongLook;
- (bool)notificationRequestRemovedWhileInLongLook;
- (bool)notificationRequestRemovedWhilePossiblyInLongLook;
- (id)notificationRequestsPassingTest:(id /* block */)arg1;
- (id)notificationUsageTrackingStateForNotificationViewController:(id)arg1;
- (void)notificationViewController:(id)arg1 executeAction:(id)arg2 withParameters:(id)arg3 completion:(id /* block */)arg4;
- (void)notificationViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 withParameters:(id)arg3 completion:(id /* block */)arg4;
- (void)notificationViewController:(id)arg1 shouldFinishLongLookTransitionWithCompletionBlock:(id /* block */)arg2;
- (id)notificationViewController:(id)arg1 staticContentProviderForNotificationRequest:(id)arg2;
- (void)notificationViewControllerDidEndUserInteraction:(id)arg1;
- (id)notificationViewControllerForSizing;
- (bool)notificationViewControllerShouldAllowInteractionGesture:(id)arg1;
- (bool)notificationViewControllerShouldBlurShortLook:(id)arg1;
- (void)notificationViewControllerWillBeginUserInteraction:(id)arg1;
- (void)notifyContentObservers;
- (id)observers;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)reloadNotificationRequest:(id)arg1;
- (void)reloadNotificationRequests:(id)arg1 clearCachedSizes:(bool)arg2;
- (void)reloadRequestsWithSuppressedContent;
- (void)removeContentObserver:(id)arg1;
- (void)removeNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setBackgroundBlurred:(bool)arg1;
- (void)setCellWithRevealedActions:(id)arg1;
- (void)setCellsSizesCaches:(id)arg1;
- (void)setCellsSizesCachesSuppressedContent:(id)arg1;
- (void)setChildPreferredContentSizeChangeCoordinator:(id)arg1;
- (void)setCustomContentHomeAffordanceVisible:(bool)arg1 withGestureRecognizer:(id)arg2;
- (void)setDestinationDelegate:(id)arg1;
- (void)setNeedsReloadData:(bool)arg1;
- (void)setNotificationRequestRemovedWhileInLongLook:(bool)arg1;
- (void)setNotificationRequestRemovedWhilePossiblyInLongLook:(bool)arg1;
- (void)setNotificationViewControllerForSizing:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setTouchEater:(id)arg1;
- (void)setTouchEaterEnabled:(bool)arg1;
- (void)setUserInteractionDelegate:(id)arg1;
- (void)setUserInteractionDelegateFlags:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; })arg1;
- (void)setViewControllerPossiblyPresentingLongLook:(id)arg1;
- (void)setViewControllerPresentingLongLook:(id)arg1;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationViewController:(id)arg1;
- (bool)shouldReceiveTouch:(id)arg1 forGestureRecognizer:(id)arg2;
- (bool)showAdditionalMessageLinesForNotificationViewController:(id)arg1;
- (void)showRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)showRequestsForNotificationSectionSettings:(id)arg1;
- (id)touchEater;
- (id)unhideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1;
- (id)userInteractionDelegate;
- (struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; })userInteractionDelegateFlags;
- (id)viewControllerPossiblyPresentingLongLook;
- (id)viewControllerPresentingLongLook;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willTearDownNotificationListCell:(id)arg1;

@end