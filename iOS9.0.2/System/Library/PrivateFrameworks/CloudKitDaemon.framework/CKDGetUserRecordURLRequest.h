/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKRecord;

@interface CKDGetUserRecordURLRequest : CKDURLRequest {

	/*^block*/id _recordFetchedBlock;
	CKRecord* _userRecord;

}

@property (nonatomic,copy) id recordFetchedBlock;                //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (nonatomic,retain) CKRecord * userRecord;              //@synthesize userRecord=_userRecord - In the implementation block
-(CKRecord *)userRecord;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(id)recordFetchedBlock;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(void)setUserRecord:(CKRecord *)arg1 ;
-(int)operationType;
@end

