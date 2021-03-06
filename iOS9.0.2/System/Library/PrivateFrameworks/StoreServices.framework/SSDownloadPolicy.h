/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, NSArray;

@interface SSDownloadPolicy : NSObject <NSCoding, SSXPCCoding, NSCopying> {

	int _bagType;
	NSString* _downloadKind;
	NSMutableArray* _policyRules;

}

@property (nonatomic,readonly) NSString * downloadKind;              //@synthesize downloadKind=_downloadKind - In the implementation block
@property (nonatomic,readonly) int URLBagType;                       //@synthesize bagType=_bagType - In the implementation block
@property (nonatomic,copy) NSArray * policyRules;                    //@synthesize policyRules=_policyRules - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)initWithDownloadKind:(id)arg1 URLBagType:(int)arg2 ;
-(NSArray *)policyRules;
-(void)setPolicyRules:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)URLBagType;
-(id)initWithNetworkConstraints:(id)arg1 ;
-(NSString *)downloadKind;
-(void)unionPolicyRule:(id)arg1 ;
-(void)unionNetworkConstraints:(id)arg1 ;
-(id)_policyRuleForSizeLimit:(long long)arg1 ;
-(void)setPolicyRule:(id)arg1 ;
@end

