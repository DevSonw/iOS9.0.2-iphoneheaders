/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Diagnostics/DAModel.h>

@class NSNumber, NSDictionary, NSData, NSString;

@interface DAResults : DAModel {

	NSNumber* _testID;
	NSDictionary* _results;
	NSData* _resultsData;
	NSString* _resultsFilename;

}

@property (nonatomic,copy) NSNumber * testID;                       //@synthesize testID=_testID - In the implementation block
@property (nonatomic,copy) NSDictionary * results;                  //@synthesize results=_results - In the implementation block
@property (nonatomic,copy) NSData * resultsData;                    //@synthesize resultsData=_resultsData - In the implementation block
@property (nonatomic,copy) NSString * resultsFilename;              //@synthesize resultsFilename=_resultsFilename - In the implementation block
-(void)setTestID:(NSNumber *)arg1 ;
-(NSNumber *)testID;
-(NSData *)resultsData;
-(void)setResultsData:(NSData *)arg1 ;
-(NSString *)resultsFilename;
-(void)setResultsFilename:(NSString *)arg1 ;
-(id)dictionary;
-(NSDictionary *)results;
-(void)setResults:(NSDictionary *)arg1 ;
@end

