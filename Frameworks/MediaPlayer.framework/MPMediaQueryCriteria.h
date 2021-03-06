/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, NSSet, NSMutableSet;

@interface MPMediaQueryCriteria : NSObject <NSCopying> {
    NSMutableSet *_filterPredicates;
    unsigned int _entityOrder;
    int _groupingType;
    NSArray *_orderingProperties;
    NSSet *_itemPropertiesToFetch;
    NSSet *_collectionPropertiesToFetch;
    BOOL _useSections;
    BOOL _ignoreSystemFilterPredicates;
}

@property(readonly) BOOL specifiesPlaylistItems;
@property(readonly) BOOL excludesEntitiesWithBlankNames;
@property(copy) NSSet * filterPredicates;
@property(copy) NSSet * itemPropertiesToFetch;
@property(copy) NSSet * collectionPropertiesToFetch;
@property int groupingType;
@property unsigned int entityOrder;
@property(copy) NSArray * orderingProperties;
@property BOOL ignoreSystemFilterPredicates;


- (void)setIgnoreSystemFilterPredicates:(BOOL)arg1;
- (BOOL)ignoreSystemFilterPredicates;
- (void)setEntityOrder:(unsigned int)arg1;
- (void)addFilterPredicates:(id)arg1;
- (void)removePredicatesForProperty:(id)arg1;
- (unsigned int)entityOrder;
- (id)ML3OrderingPropertiesForGroupingType:(int)arg1;
- (id)ML3ItemsQueryInLibrary:(id)arg1 orderingProperties:(id)arg2 nameBlankProperty:(id)arg3;
- (id)ML3OrderingPropertiesForMPOrderingProperties:(id)arg1;
- (id)ML3CollectionsQueryInLibrary:(id)arg1;
- (id)ML3ItemsQueryInLibrary:(id)arg1;
- (id)orderingProperties;
- (id)predicateForProperty:(id)arg1;
- (BOOL)excludesEntitiesWithBlankNames;
- (void)setCollectionPropertiesToFetch:(id)arg1;
- (id)collectionPropertiesToFetch;
- (void)setItemPropertiesToFetch:(id)arg1;
- (id)itemPropertiesToFetch;
- (void)removeFilterPredicate:(id)arg1;
- (BOOL)specifiesPlaylistItems;
- (void)addFilterPredicate:(id)arg1;
- (void)setGroupingType:(int)arg1;
- (void)setFilterPredicates:(id)arg1;
- (int)groupingType;
- (id)filterPredicates;
- (void)setOrderingProperties:(id)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
