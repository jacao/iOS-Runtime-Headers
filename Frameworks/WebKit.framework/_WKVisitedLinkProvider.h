/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKVisitedLinkProvider : NSObject {
    struct RefPtr<WebKit::VisitedLinkProvider> { 
        struct VisitedLinkProvider {} *m_ptr; 
    } _visitedLinkProvider;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addVisitedLinkWithURL:(id)arg1;
- (id)init;
- (void)removeAll;

@end