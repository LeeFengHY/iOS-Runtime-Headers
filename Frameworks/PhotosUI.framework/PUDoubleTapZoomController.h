/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUDoubleTapZoomController : NSObject <UIGestureRecognizerDelegate> {
    UITapGestureRecognizer *__doubleTapGestureRecognizer;
    BOOL __needsUpdateGestureRecognizers;
    <PUDoubleTapZoomControllerDelegate> *_delegate;
    struct { 
        BOOL respondsToViewHostingGestureRecognizers; 
        BOOL respondsToTilingView; 
        BOOL respondsToDelegateForGestureRecognizer; 
        BOOL respondsToCanDoubleTapBeginAtLocationFromProvider; 
    } _delegateFlags;
}

@property (setter=_setDoubleTapGestureRecognizer:, nonatomic, retain) UITapGestureRecognizer *_doubleTapGestureRecognizer;
@property (setter=_setNeedsUpdateGestureRecognizers:, nonatomic) BOOL _needsUpdateGestureRecognizers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUDoubleTapZoomControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_doubleTapGestureRecognizer;
- (void)_handleDoubleTapGestureRecognizer:(id)arg1;
- (void)_invalidateGestureRecognizers;
- (BOOL)_needsUpdateGestureRecognizers;
- (void)_setDoubleTapGestureRecognizer:(id)arg1;
- (void)_setNeedsUpdateGestureRecognizers:(BOOL)arg1;
- (void)_updateGestureRecognizersIfNeeded;
- (id)_userTransformViewAtLocationFromProvider:(id)arg1;
- (id)delegate;
- (id)doubleTapGestureRecognizer;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (void)invalidateViewHostingGestureRecognizers;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldDoubleTapBeginAtLocationFromProvider:(id)arg1;

@end