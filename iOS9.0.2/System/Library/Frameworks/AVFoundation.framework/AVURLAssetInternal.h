/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVAssetInspectorLoader, AVAssetClientURLRequestHelper, NSURL, NSArray, AVAssetResourceLoader, NSObject, NSDictionary;

@interface AVURLAssetInternal : NSObject {

	AVAssetInspectorLoader* loader;
	AVAssetClientURLRequestHelper* URLRequestHelper;
	NSURL* URL;
	NSArray* tracks;
	AVAssetResourceLoader* resourceLoader;
	long makeOneResourceLoaderOnly;
	NSObject*<OS_dispatch_queue> tracksAccessQueue;
	NSDictionary* initializationOptions;
	char hasInstanceIdentifierMapping;

}
@end

