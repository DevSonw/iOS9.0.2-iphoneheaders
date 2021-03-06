/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFMessageRule;
@class MFMailMessageStore, MailChangeManager;

@interface MFMessageRuleManager : NSObject {

	int _lock;
	id<MFMessageRule> _rule;
	MFMailMessageStore* _store;
	MailChangeManager* _changeManager;

}

@property (nonatomic,retain) id<MFMessageRule> rule;                         //@synthesize rule=_rule - In the implementation block
@property (nonatomic,retain) MFMailMessageStore * store;                     //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) MailChangeManager * changeManager;              //@synthesize changeManager=_changeManager - In the implementation block
-(void)_loadRules;
-(void)_subscribeNotification;
-(id)initWithStore:(id)arg1 changeManager:(id)arg2 ;
-(void)_unsubscribeNotification;
-(MailChangeManager *)changeManager;
-(void)_handleDefaultChanged:(id)arg1 ;
-(id)executeRulesOnMessages:(id)arg1 ;
-(void)setChangeManager:(MailChangeManager *)arg1 ;
-(MFMailMessageStore *)store;
-(void)setStore:(MFMailMessageStore *)arg1 ;
-(id<MFMessageRule>)rule;
-(void)dealloc;
-(id)init;
-(void)setRule:(id<MFMessageRule>)arg1 ;
@end

