/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVMediaSelectionInternal, AVAsset;

@interface AVMediaSelection : NSObject <NSCopying, NSMutableCopying> {

	AVMediaSelectionInternal* _mediaSelection;

}

@property (nonatomic,__weak,readonly) AVAsset * asset; 
-(id)_initWithAsset:(id)arg1 ;
-(id)_internal;
-(id)_initWithAsset:(id)arg1 selectedMediaArray:(id)arg2 ;
-(id)_selectedMediaArray;
-(id)_groupDictionaries;
-(id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:(id)arg1 ;
-(id)initWithAsset:(id)arg1 propertyList:(id)arg2 ;
-(char)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:(id)arg1 ;
-(id)selectedMediaOptionInMediaSelectionGroup:(id)arg1 ;
-(id)propertyList;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(AVAsset *)asset;
-(void)finalize;
@end

