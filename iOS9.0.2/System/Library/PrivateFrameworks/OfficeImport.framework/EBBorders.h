/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBBorders : NSObject
+(int)convertXlBorderEnumToED:(int)arg1 ;
+(int)convertXlDiagStyleEnumToED:(int)arg1 ;
+(id)edBordersFromXlDXf:(XlDXf*)arg1 edResources:(id)arg2 ;
+(int)convertEDBorderEnumToXl:(int)arg1 ;
+(int)convertEDDiagonalEnumToXl:(int)arg1 ;
+(id)edBordersFromXlXf:(XlXf*)arg1 edResources:(id)arg2 ;
@end
