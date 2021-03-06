/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSData;

@interface FLFollowUpAction : NSObject <NSSecureCoding> {

	NSString* _label;
	NSURL* _url;
	NSURL* _launchActionURL;
	NSData* _launchActionArguments;
	unsigned _sqlID;

}

@property (copy) NSString * label;                            //@synthesize label=_label - In the implementation block
@property (copy) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (copy) NSURL * launchActionURL;                     //@synthesize launchActionURL=_launchActionURL - In the implementation block
@property (copy) NSData * launchActionArguments;              //@synthesize launchActionArguments=_launchActionArguments - In the implementation block
@property (assign,nonatomic) unsigned sqlID;                  //@synthesize sqlID=_sqlID - In the implementation block
+(char)supportsSecureCoding;
+(id)actionWithLabel:(id)arg1 url:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)initWithLabel:(id)arg1 url:(id)arg2 ;
-(NSURL *)launchActionURL;
-(void)setLaunchActionURL:(NSURL *)arg1 ;
-(NSData *)launchActionArguments;
-(void)setLaunchActionArguments:(NSData *)arg1 ;
-(unsigned)sqlID;
-(void)setSqlID:(unsigned)arg1 ;
@end

