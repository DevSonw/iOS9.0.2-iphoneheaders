/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RecipientSelectionControllerDelegate <NSObject>
@required
-(void)recipientSelectionControllerHeightDidChange:(float)arg1;
-(void)recipientSelectionController:(id)arg1 didAddRecipient:(id)arg2;
-(void)recipientSelectionController:(id)arg1 didRemoveRecipient:(id)arg2;
-(char)isSearchViewControllerVisible;
-(void)showErrorAlertForSelfAddress;
-(void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2;

@end

