/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSMutableSet, NSArray, UIImage, NSDate, BBSectionInfo, NSSet;

@interface SBBulletinListSection : NSObject {

	NSString* _sectionID;
	int _sectionType;
	id _widget;
	NSMutableArray* _bulletins;
	NSMutableSet* _bulletinIDs;
	NSArray* _sortDescriptors;
	NSString* _displayName;
	UIImage* _iconImage;
	char _showsInLockScreen;
	char _showsMessagePreview;
	unsigned _messageNumberOfLines;
	char _displaysCriticalBulletins;
	NSDate* _lastSortDate;
	NSMutableSet* _subsections;
	UIImage* _largeIconImage;
	BBSectionInfo* _sectionInfo;

}

@property (nonatomic,copy) NSString * sectionID;                         //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain,readonly) NSArray * bulletins;               //@synthesize bulletins=_bulletins - In the implementation block
@property (nonatomic,retain) id widget;                                  //@synthesize widget=_widget - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;                  //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,copy) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                        //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) UIImage * largeIconImage;                   //@synthesize largeIconImage=_largeIconImage - In the implementation block
@property (assign,nonatomic) char showsInLockScreen;                     //@synthesize showsInLockScreen=_showsInLockScreen - In the implementation block
@property (assign,nonatomic) char showsMessagePreview;                   //@synthesize showsMessagePreview=_showsMessagePreview - In the implementation block
@property (assign,nonatomic) unsigned messageNumberOfLines;              //@synthesize messageNumberOfLines=_messageNumberOfLines - In the implementation block
@property (nonatomic,readonly) NSSet * subsectionIDs; 
@property (nonatomic,retain) BBSectionInfo * sectionInfo;                //@synthesize sectionInfo=_sectionInfo - In the implementation block
-(char)isWidgetSection;
-(char)isBulletinSection;
-(void)_updateWithSectionInfo:(id)arg1 ;
-(void)setShowsInLockScreen:(char)arg1 forSubsectionID:(id)arg2 ;
-(void)setShowsMessagePreview:(char)arg1 forSubsectionID:(id)arg2 ;
-(id)lastSortDate;
-(unsigned)_indexForNewBulletin:(id)arg1 ;
-(id)_sortDateForBulletin:(id)arg1 ;
-(unsigned)indexOfBulletinID:(id)arg1 ;
-(unsigned)_removeBulletin:(id)arg1 ;
-(void)setLargeIconImage:(UIImage *)arg1 ;
-(id)bulletinAtIndex:(unsigned)arg1 ;
-(id)bulletinWithBulletinID:(id)arg1 ;
-(id)_subsectionWithIDCreatingIfNecessary:(id)arg1 ;
-(char)hasClearableBulletins;
-(void)updateWithSectionInfo:(id)arg1 ;
-(int)compareSection:(id)arg1 forOrder:(int)arg2 ;
-(unsigned)replaceBulletin:(id)arg1 withBulletin:(id)arg2 ;
-(char)hasBulletinWithID:(id)arg1 ;
-(UIImage *)largeIconImage;
-(char)showsBulletinIDInLockScreen:(id)arg1 ;
-(char)showsBulletinsInSubsectionIDInLockScreen:(id)arg1 ;
-(char)showsMessagePreviewForBulletinID:(id)arg1 ;
-(char)showsMessagePreviewForBulletinsInSubsectionID:(id)arg1 ;
-(BBSectionInfo *)sectionInfo;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)dealloc;
-(id)description;
-(int)compare:(id)arg1 ;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(UIImage *)iconImage;
-(NSArray *)sortDescriptors;
-(NSString *)displayName;
-(NSSet *)subsectionIDs;
-(void)setShowsMessagePreview:(char)arg1 ;
-(void)setSectionInfo:(BBSectionInfo *)arg1 ;
-(char)showsInLockScreen;
-(void)setShowsInLockScreen:(char)arg1 ;
-(char)displaysCriticalBulletins;
-(unsigned)bulletinCount;
-(unsigned)messageNumberOfLines;
-(id)initWithSectionInfo:(id)arg1 ;
-(NSString *)sectionID;
-(char)showsMessagePreview;
-(NSArray *)bulletins;
-(void)setSectionID:(NSString *)arg1 ;
-(unsigned)removeBulletin:(id)arg1 ;
-(void)setMessageNumberOfLines:(unsigned)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)widget;
-(void)setWidget:(id)arg1 ;
-(unsigned)addBulletin:(id)arg1 ;
@end
