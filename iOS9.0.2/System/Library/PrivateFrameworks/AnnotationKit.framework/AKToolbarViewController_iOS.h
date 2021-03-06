/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKToolbarViewController.h>
#import <libobjc.A.dylib/AKSignaturesViewControllerDelegate.h>
#import <libobjc.A.dylib/AKSignatureCreationControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class UIView, UIBarButtonItem, NSArray, UIGestureRecognizer, UIAlertController, AKSignaturesViewController_iOS, AKLineStylesViewController, AKTextAttributesViewController, AKColorPickerViewController, AKUndoRedoViewController, AKFloatingAttributePickerViewController, NSLayoutConstraint, NSString;

@interface AKToolbarViewController_iOS : AKToolbarViewController <AKSignaturesViewControllerDelegate, AKSignatureCreationControllerDelegate, UIPopoverPresentationControllerDelegate> {

	UIView* _attributeToolbarContainer;
	UIBarButtonItem* _richSketchButton;
	UIBarButtonItem* _sketchButton;
	UIBarButtonItem* _textButton;
	UIBarButtonItem* _loupeButton;
	UIBarButtonItem* _signatureButton;
	UIBarButtonItem* _undoButton;
	UIBarButtonItem* _textStyleButton;
	UIBarButtonItem* _lineStyleButton;
	UIBarButtonItem* _strokeColorButton;
	NSArray* _staticToolbarItems;
	UIGestureRecognizer* _longPressGestureRecognizer;
	UIAlertController* _signaturesAlertController;
	AKSignaturesViewController_iOS* _signaturesSheetViewController;
	AKLineStylesViewController* _lineStylesViewController;
	AKTextAttributesViewController* _textAttributesViewController;
	AKColorPickerViewController* _colorPickerPopoverViewController;
	AKUndoRedoViewController* _undoPopoverViewController;
	AKFloatingAttributePickerViewController* _attributeToolbarViewController;
	NSLayoutConstraint* _attributeToolbarViewControllerConstraint;

}

@property (nonatomic,readonly) float additionalOffset; 
@property (nonatomic,retain) UIView * attributeToolbarContainer;                                                    //@synthesize attributeToolbarContainer=_attributeToolbarContainer - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * richSketchButton;                                                    //@synthesize richSketchButton=_richSketchButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * sketchButton;                                                        //@synthesize sketchButton=_sketchButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * textButton;                                                          //@synthesize textButton=_textButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * loupeButton;                                                         //@synthesize loupeButton=_loupeButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * signatureButton;                                                     //@synthesize signatureButton=_signatureButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * undoButton;                                                          //@synthesize undoButton=_undoButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * textStyleButton;                                                     //@synthesize textStyleButton=_textStyleButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * lineStyleButton;                                                     //@synthesize lineStyleButton=_lineStyleButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * strokeColorButton;                                                   //@synthesize strokeColorButton=_strokeColorButton - In the implementation block
@property (nonatomic,retain) NSArray * staticToolbarItems;                                                          //@synthesize staticToolbarItems=_staticToolbarItems - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * longPressGestureRecognizer;                                      //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIAlertController * signaturesAlertController;                                         //@synthesize signaturesAlertController=_signaturesAlertController - In the implementation block
@property (nonatomic,retain) AKSignaturesViewController_iOS * signaturesSheetViewController;                        //@synthesize signaturesSheetViewController=_signaturesSheetViewController - In the implementation block
@property (nonatomic,retain) AKLineStylesViewController * lineStylesViewController;                                 //@synthesize lineStylesViewController=_lineStylesViewController - In the implementation block
@property (nonatomic,retain) AKTextAttributesViewController * textAttributesViewController;                         //@synthesize textAttributesViewController=_textAttributesViewController - In the implementation block
@property (nonatomic,retain) AKColorPickerViewController * colorPickerPopoverViewController;                        //@synthesize colorPickerPopoverViewController=_colorPickerPopoverViewController - In the implementation block
@property (nonatomic,retain) AKUndoRedoViewController * undoPopoverViewController;                                  //@synthesize undoPopoverViewController=_undoPopoverViewController - In the implementation block
@property (nonatomic,retain) AKFloatingAttributePickerViewController * attributeToolbarViewController;              //@synthesize attributeToolbarViewController=_attributeToolbarViewController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * attributeToolbarViewControllerConstraint;                         //@synthesize attributeToolbarViewControllerConstraint=_attributeToolbarViewControllerConstraint - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithController:(id)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setLongPressGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(UIGestureRecognizer *)longPressGestureRecognizer;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(void)revalidateItems;
-(void)setFillColorUIDisplayToColor:(id)arg1 ;
-(void)setStrokeColorUIDisplayToColor:(id)arg1 ;
-(void)signatureCreationControllerDidCreateSignature:(id)arg1 ;
-(void)_undoLongPressAction:(id)arg1 ;
-(void)_buildBasicItems;
-(void)_undoManagerNotification:(id)arg1 ;
-(void)dismissAttributeToolbarForSelectedAnnotations;
-(void)setAttributeToolbarContainer:(UIView *)arg1 ;
-(UIView *)attributeToolbarContainer;
-(id)_barButtonForToolbarType:(unsigned)arg1 ;
-(void)setSketchButton:(UIBarButtonItem *)arg1 ;
-(void)setSignatureButton:(UIBarButtonItem *)arg1 ;
-(void)setLoupeButton:(UIBarButtonItem *)arg1 ;
-(void)setTextButton:(UIBarButtonItem *)arg1 ;
-(void)setUndoButton:(UIBarButtonItem *)arg1 ;
-(void)setTextStyleButton:(UIBarButtonItem *)arg1 ;
-(void)setLineStyleButton:(UIBarButtonItem *)arg1 ;
-(void)setStrokeColorButton:(UIBarButtonItem *)arg1 ;
-(void)_layoutToolbarForTraitCollection:(id)arg1 ;
-(UIBarButtonItem *)sketchButton;
-(UIBarButtonItem *)loupeButton;
-(UIBarButtonItem *)textButton;
-(UIBarButtonItem *)signatureButton;
-(UIBarButtonItem *)strokeColorButton;
-(UIBarButtonItem *)lineStyleButton;
-(UIBarButtonItem *)textStyleButton;
-(void)setStaticToolbarItems:(NSArray *)arg1 ;
-(void)_updateToggleButton:(id)arg1 withTraitCollection:(id)arg2 ;
-(NSArray *)staticToolbarItems;
-(id)_doodleModeToolbarImage;
-(UIBarButtonItem *)richSketchButton;
-(UIBarButtonItem *)undoButton;
-(AKUndoRedoViewController *)undoPopoverViewController;
-(void)showAttributeToolbarForSelectedAnnotations:(id)arg1 andToolMode:(unsigned)arg2 ;
-(void)syncUIToSelectedColor;
-(AKColorPickerViewController *)colorPickerPopoverViewController;
-(AKFloatingAttributePickerViewController *)attributeToolbarViewController;
-(id)_createNewToggleToolbarButtonWithImage:(id)arg1 tag:(int)arg2 target:(id)arg3 selector:(SEL)arg4 ;
-(void)_showSignaturesPopover:(id)arg1 ;
-(id)_createNewCustomViewToolbarButtonWithImage:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)_undoButtonAction:(id)arg1 ;
-(void)_showTextStylePopover:(id)arg1 ;
-(void)_showLineStylePopover:(id)arg1 ;
-(void)_showColorPickerPopover:(id)arg1 ;
-(id)_createNewColorPickerToolbarButtonWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)_showUndoAlert:(id)arg1 ;
-(char)_validateUndoButton;
-(char)_validateRedoButton;
-(void)setUndoPopoverViewController:(AKUndoRedoViewController *)arg1 ;
-(id)_buildUndoAlertController;
-(void)_dismissCurrentlyPresentedPopover;
-(void)signaturesViewControllerContinueToCreateSignature:(id)arg1 ;
-(AKSignaturesViewController_iOS *)signaturesSheetViewController;
-(void)setSignaturesAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)signaturesAlertController;
-(void)signaturesViewControllerContinueToManageSignatures:(id)arg1 ;
-(void)signaturesViewControllerDidCancel:(id)arg1 ;
-(void)_setupPassthroughViewsForViewController:(id)arg1 ;
-(AKLineStylesViewController *)lineStylesViewController;
-(void)setLineStylesViewController:(AKLineStylesViewController *)arg1 ;
-(AKTextAttributesViewController *)textAttributesViewController;
-(void)setTextAttributesViewController:(AKTextAttributesViewController *)arg1 ;
-(void)setColorPickerPopoverViewController:(AKColorPickerViewController *)arg1 ;
-(int)_attributeTagForCurrentSelectionState;
-(void)setSignaturesSheetViewController:(AKSignaturesViewController_iOS *)arg1 ;
-(void)setAttributeToolbarViewControllerConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)attributeToolbarViewControllerConstraint;
-(void)_layoutAttributeContainer;
-(void)setAttributeToolbarViewController:(AKFloatingAttributePickerViewController *)arg1 ;
-(void)signaturesViewControllerDidSelectSignature:(id)arg1 ;
-(void)_deleteSelectedItems:(id)arg1 ;
-(void)_sketchButtonAction:(id)arg1 ;
-(id)_toolbarButtonItemOfType:(unsigned)arg1 ;
-(float)additionalOffset;
-(void)setRichSketchButton:(UIBarButtonItem *)arg1 ;
@end

