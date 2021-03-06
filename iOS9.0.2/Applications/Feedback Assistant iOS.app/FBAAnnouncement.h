/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant iOS/FBAManagedFeedbackObject.h>
#import <Feedback Assistant iOS/FBAMailboxContent.h>
#import <Feedback Assistant iOS/FBASearchableDocument.h>

@class NSString, NSDate, FBAProject, NSNumber, UIColor, NSURL;

@interface FBAAnnouncement : FBAManagedFeedbackObject <FBAMailboxContent, FBASearchableDocument> {

	NSString* cachedFullHTMLContent;

}

@property (retain) NSString * title; 
@property (retain) NSString * body; 
@property (retain) NSString * type; 
@property (retain) NSDate * createdAt; 
@property (retain) NSDate * updatedAt; 
@property (assign) char isStub; 
@property (assign) char unread; 
@property (retain) FBAProject * project; 
@property (retain) NSString * cachedFullHTMLContent; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSNumber * ID; 
@property (readonly) NSString * mailboxKind; 
@property (readonly) NSString * itemTitle; 
@property (readonly) NSString * itemSubtitle; 
@property (readonly) NSDate * mailboxSortDate; 
@property (readonly) UIColor * itemTitleColor; 
@property (readonly) NSURL * searchURL; 
+(id)keyPathsForValuesAffectingMailboxSortDate;
+(id)entityName;
-(void)setPropertiesFromJSONObject:(id)arg1 ;
-(NSString *)mailboxKind;
-(NSString *)itemSubtitle;
-(NSDate *)mailboxSortDate;
-(UIColor *)itemTitleColor;
-(id)generateSearchText;
-(id)fullHTMLContent;
-(NSString *)cachedFullHTMLContent;
-(void)setCachedFullHTMLContent:(NSString *)arg1 ;
-(NSString *)itemTitle;
-(NSURL *)searchURL;
@end

