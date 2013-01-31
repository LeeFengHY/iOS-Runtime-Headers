/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPageControl, UIPageViewController, _UIQueuingScrollView;

@interface _UIPageViewControllerContentView : UIView  {
    UIPageViewController *_pageViewController;
    _UIQueuingScrollView *_scrollView;
    UIPageControl *_pageControl;
}

@property(readonly) _UIQueuingScrollView * scrollView;
@property(readonly) UIPageControl * pageControl;


- (void)dealloc;
- (id)pageControl;
- (void)invalidatePageViewController;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 andPageViewController:(id)arg2;
- (void)_setupPageControl:(id)arg1;
- (float)_pageSpacing;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_scrollViewFrame;
- (id)scrollView;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end