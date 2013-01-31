/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PLAlbumTextField, UIImageView, UIButton, PLUnreadMarkerView, UIImage, NSString, PLImageView, UIView<PLStackableImage>, PLLabel;

@interface PLStackItemViewCell : UIView <UITextFieldDelegate> {
    float _previousEnabledAlpha;
    UIButton *_closeButton;
    PLLabel *_titleLabel;
    PLLabel *_subtitleLabel;
    PLAlbumTextField *_editField;
    UIImageView *_unreadBadge;
    PLUnreadMarkerView *_unreadMarkerStartView;
    UIImageView *_badgeView;
    NSString *_subtitle;
    BOOL _unreadStartMarkerShowsProgress;
    BOOL _labelIsEditable;
    float _stackedAngle;
    BOOL _labelsHidden;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _renameAction;

    UIImage *_badgeImage;
    float _labelsAlpha;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _closeAction;

    BOOL _enabled;
    BOOL _labelsShadowEnabled;
    UIView<PLStackableImage> *_sourceView;
    BOOL _ignoreEndEditing;
    BOOL _showsUnreadStartMarker;
    unsigned int _unreadStartMarkerCount;
    BOOL _showsUnreadIndicator;
    NSString *_title;
}

@property(retain) UIView<PLStackableImage> * sourceView;
@property(readonly) PLImageView * imageView;
@property(copy) NSString * title;
@property(copy) NSString * subtitle;
@property(getter=isLabelEditable) BOOL labelIsEditable;
@property(readonly) BOOL isLabelEditing;
@property BOOL labelsHidden;
@property float labelsAlpha;
@property(getter=isLabelShadowEnabled) BOOL labelsShadowEnabled;
@property BOOL ignoreEndEditing;
@property BOOL showsUnreadIndicator;
@property(getter=isCloseBoxShown) BOOL showCloseBox;
@property(readonly) struct CGPoint { float x1; float x2; } closeBoxPosition;
@property float stackedAngle;
@property(retain) UIImage * badgeImage;
@property unsigned int imageIndex;
@property BOOL showsUnreadStartMarker;
@property unsigned int unreadStartMarkerCount;
@property BOOL unreadStartMarkerShowsProgress;
@property BOOL enabled;
@property(getter=isShadowEnabled) BOOL shadowEnabled;
@property(copy) id renameAction;
@property(copy) id closeAction;

+ (void)initialize;

- (void)dealloc;
- (unsigned int)unreadStartMarkerCount;
- (BOOL)showsUnreadStartMarker;
- (BOOL)isLabelShadowEnabled;
- (id)closeAction;
- (float)labelsAlpha;
- (id)renameAction;
- (BOOL)labelsHidden;
- (BOOL)unreadStartMarkerShowsProgress;
- (void)setUnreadStartMarkerShowsProgress:(BOOL)arg1;
- (void)setShowsUnreadStartMarker:(BOOL)arg1;
- (BOOL)ignoreEndEditing;
- (void)_updateLabelsState;
- (void)_handleCloseBoxTap;
- (void)_getTitleFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 subtitleFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 unreadIndicatorFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (void)_updateUnreadStartMarkerAnimated:(BOOL)arg1;
- (void)_updateBadgeViewAnimated:(BOOL)arg1 forImageChange:(BOOL)arg2;
- (void)setRenameAction:(id)arg1;
- (void)setCloseAction:(id)arg1;
- (void)resetToInitialSizeAndAngle;
- (void)setLabelsShadowEnabled:(BOOL)arg1;
- (void)setUnreadStartMarkerShowsProgress:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setUnreadStartMarkerCount:(unsigned int)arg1;
- (void)setShowsUnreadStartMarker:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setBadgeImage:(id)arg1 animated:(BOOL)arg2;
- (void)setShowCloseBox:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isLabelEditable;
- (BOOL)pointIsInsideTitle:(struct CGPoint { float x1; float x2; })arg1;
- (void)setStackedAngle:(float)arg1;
- (void)setLabelsAlpha:(float)arg1;
- (float)stackedAngle;
- (unsigned int)imageIndex;
- (struct CGPoint { float x1; float x2; })closeBoxPosition;
- (void)setLabelsHidden:(BOOL)arg1;
- (BOOL)isCloseBoxShown;
- (void)setLabelIsEditable:(BOOL)arg1;
- (void)setImageIndex:(unsigned int)arg1;
- (void)setShowCloseBox:(BOOL)arg1;
- (void)setSourceView:(id)arg1;
- (id)sourceView;
- (void)setIgnoreEndEditing:(BOOL)arg1;
- (BOOL)isLabelEditing;
- (BOOL)isShadowEnabled;
- (void)setShadowEnabled:(BOOL)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1 angle:(float)arg2;
- (BOOL)showsUnreadIndicator;
- (void)setShowsUnreadIndicator:(BOOL)arg1;
- (void)setShowsUnreadIndicator:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)enabled;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)imageView;
- (BOOL)textFieldShouldClear:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })textField:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 toCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)title;
- (BOOL)canBecomeFirstResponder;
- (void)setEnabled:(BOOL)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)becomeFirstResponder;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)badgeImage;
- (void)setBadgeImage:(id)arg1;

@end