/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class CKDatabase;

@interface CKDatabaseOperation : CKOperation {

	CKDatabase* _database;

}

@property (nonatomic,retain) CKDatabase * database;              //@synthesize database=_database - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)setDatabase:(CKDatabase *)arg1 ;
-(CKDatabase *)database;
@end
