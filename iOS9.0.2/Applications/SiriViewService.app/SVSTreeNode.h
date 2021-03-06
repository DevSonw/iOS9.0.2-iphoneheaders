/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriViewService/SiriViewService-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray;

@interface SVSTreeNode : NSObject <NSFastEnumeration> {

	id _item;
	SVSTreeNode* _parentNode;
	NSMutableArray* _childNodes;

}

@property (nonatomic,retain) id item;                                                       //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) SVSTreeNode * parentNode;                               //@synthesize parentNode=_parentNode - In the implementation block
@property (getter=_childNodes,nonatomic,readonly) NSMutableArray * childNodes;              //@synthesize childNodes=_childNodes - In the implementation block
+(id)absoluteIndexPathsForTreeNodes:(id)arg1 ;
-(id)absoluteIndexPath;
-(id)_childNodes;
-(void)_appendDescriptionToString:(id)arg1 withIndentation:(id)arg2 ;
-(id)indexPathFromAncestorNode:(id)arg1 ;
-(int)numberOfChildNodes;
-(id)childNodeAtIndex:(int)arg1 ;
-(void)enumerateDescendentNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)removeChildNode:(id)arg1 ;
-(void)_setParentNode:(id)arg1 ;
-(void)removeChildNodeAtIndex:(int)arg1 ;
-(void)enumerateChildNodesWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)containsNodeAtIndexPath:(id)arg1 ;
-(id)nodeAtIndexPath:(id)arg1 ;
-(id)indexPathOfNodeWithItem:(id)arg1 ;
-(id)lastChildNode;
-(void)replaceChildNodeAtIndex:(int)arg1 withNode:(id)arg2 ;
-(int)indexOfChildNode:(id)arg1 ;
-(void)enumerateChildNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)insertChildNode:(id)arg1 atIndex:(int)arg2 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_SV1*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(id)init;
-(id)description;
-(id)item;
-(SVSTreeNode *)parentNode;
-(void)setItem:(id)arg1 ;
-(void)addChildNode:(id)arg1 ;
-(void)removeFromParentNode;
@end

