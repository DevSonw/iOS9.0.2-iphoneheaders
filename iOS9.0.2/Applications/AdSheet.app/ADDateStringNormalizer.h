/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSRegularExpression;

@interface ADDateStringNormalizer : NSObject {

	NSRegularExpression* _regularExpression;

}

@property (nonatomic,retain) NSRegularExpression * regularExpression;              //@synthesize regularExpression=_regularExpression - In the implementation block
+(id)normalizers;
+(id)formatter;
+(id)dateFromString:(id)arg1 ;
-(NSRegularExpression *)regularExpression;
-(void)dealloc;
-(void)setRegularExpression:(NSRegularExpression *)arg1 ;
-(id)normalize:(id)arg1 ;
@end
