/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Bridge/COSGizmoWristSelectionViewDelegate.h>
#import <Bridge/COSBuddyController.h>

@protocol COSBuddyControllerDelegate;
@class COSGizmoWristSelectionView, NSString;

@interface COSBuddyWristSelectionController : UIViewController <COSGizmoWristSelectionViewDelegate, COSBuddyController> {

	id<COSBuddyControllerDelegate> _delegate;
	COSGizmoWristSelectionView* _wristSelectionView;

}

@property (assign,nonatomic,__weak) id<COSBuddyControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) COSGizmoWristSelectionView * wristSelectionView;              //@synthesize wristSelectionView=_wristSelectionView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)donePickedLeftArm:(char)arg1 ;
-(void)proceedToRestore;
-(void)selectedUpdateChoice;
-(void)selectedRestoreChoice;
-(void)returnToWristSelection;
-(void)returnToRestoreChoice;
-(COSGizmoWristSelectionView *)wristSelectionView;
-(void)setWristSelectionView:(COSGizmoWristSelectionView *)arg1 ;
-(void)setDelegate:(id<COSBuddyControllerDelegate>)arg1 ;
-(id)init;
-(id<COSBuddyControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)updateLayout;
-(void)back:(id)arg1 ;
@end
