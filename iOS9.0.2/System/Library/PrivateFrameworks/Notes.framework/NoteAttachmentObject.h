/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NoteObject;

@interface NoteAttachmentObject : NSManagedObject

@property (nonatomic,retain) NSString * contentID; 
@property (nonatomic,retain) NSString * filename; 
@property (nonatomic,retain) NSString * mimeType; 
@property (nonatomic,retain) NoteObject * note; 
+(id)attachmentDirectoryURLForAttachmentObjectID:(id)arg1 error:(id*)arg2 ;
+(id)attachmentDirectoryPathForAttachmentObjectID:(id)arg1 error:(id*)arg2 ;
+(char)migrateFileForAttachment:(id)arg1 toCurrentAttachmentPathWithError:(id*)arg2 ;
+(char)applyFileAttributesForAttachment:(id)arg1 error:(id*)arg2 ;
+(char)migrateAttachmentRelatedFilesInContext:(id)arg1 error:(id*)arg2 ;
-(id)attachmentDataFileURLWithError:(id*)arg1 ;
-(char)persistAttachmentData:(id)arg1 error:(id*)arg2 ;
-(id)attachmentDataWithError:(id*)arg1 ;
-(void)prepareForDeletion;
@end

