/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MailboxContentTableEntry <NSObject>
@required
-(void)setHighlightedTerms:(id)arg1;
-(void)setShowsBestMatchedAddress:(char)arg1;
-(void)setMessage:(id)arg1 threaded:(char)arg2;
-(void)setHasUnreadMessages:(char)arg1 hasAttachments:(char)arg2 hasFlagged:(char)arg3 hasVIP:(char)arg4 hasNotify:(char)arg5 hasMute:(char)arg6 receivedInterval:(double)arg7;
-(void)updateFlagsFromMessage:(id)arg1;
-(void)setMailboxName:(id)arg1;

@end
