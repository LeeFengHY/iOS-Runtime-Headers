/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIContentUnavailableView : UIView {
    UIButton *_actionButton;
    _UIBackdropView *_backdrop;
    id /* block */ _buttonAction;
    NSString *_buttonTitle;
    UIView *_containerView;
    NSMutableArray *_containerViewContraints;
    UIView *_fromSnapshot;
    struct CGSize { 
        float width; 
        float height; 
    } _fromSnapshotSize;
    NSString *_message;
    UILabel *_messageLabel;
    unsigned int _style;
    NSString *_title;
    UILabel *_titleLabel;
    UIView *_toSnapshot;
    unsigned int _vibrantOptions;
    NSLayoutConstraint *messageToButtonConstraint;
    NSLayoutConstraint *titleToMessageConstraint;
}

@property (nonatomic, copy) id /* block */ buttonAction;
@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned int vibrantOptions;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void).cxx_destruct;
- (void)_actionButtonPressed:(id)arg1;
- (float)_buttonAlpha;
- (id)_buttonBackgroundImageForStyle:(unsigned int)arg1 controlState:(unsigned int)arg2;
- (id)_buttonFont;
- (struct CGSize { float x1; float x2; })_buttonSize;
- (float)_buttonVerticalSpacing;
- (id)_flatTextColor;
- (BOOL)_hasVibrantButton;
- (BOOL)_hasVibrantText;
- (float)_labelAlpha;
- (float)_labelVerticalSpacing;
- (id)_titleFont;
- (void)_updateViewHierarchy;
- (id)_vibrantBaseColor;
- (id /* block */)buttonAction;
- (id)buttonTitle;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 title:(id)arg2 style:(unsigned int)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 title:(id)arg2 style:(unsigned int)arg3 includeBackdrop:(BOOL)arg4;
- (void)layoutSubviews;
- (id)message;
- (id)preferredFocusedView;
- (void)setButtonAction:(id /* block */)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVibrantOptions:(unsigned int)arg1;
- (id)title;
- (void)updateConstraints;
- (unsigned int)vibrantOptions;
- (void)windowDidRotateNotification:(id)arg1;
- (void)windowWillAnimateRotateNotification:(id)arg1;
- (void)windowWillRotateNotification:(id)arg1;

@end
