/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSFileManager;

@interface TraceManager : NSObject {

	NSFileManager* _fileManager;

}
+(id)sharedManager;
-(id)pathForUserTrace:(id)arg1 withTraceType:(int)arg2 ;
-(id)_getTracesDirectoryWithTraceType:(int)arg1 ;
-(char)moveUserTraceAtPath:(id)arg1 toPath:(id)arg2 ;
-(id)listOfUserTracesWithTraceType:(int)arg1 ;
-(id)filenameForUserTrace:(id)arg1 ;
-(id)migrateTraceWithExtraResourceType:(id)arg1 ;
-(char)createFolderIfNotPresent:(id)arg1 error:(id*)arg2 ;
-(id)preferredUserTracePathForName:(id)arg1 withTraceType:(int)arg2 ;
-(id)clearSimulatedTracePath;
-(id)listOfTracesFromPaths:(id)arg1 ;
-(id)_cleanPathForDirectory:(id)arg1 ;
-(char)deleteUserTraceWithName:(id)arg1 withTraceType:(int)arg2 ;
-(id)init;
@end
