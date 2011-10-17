/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSRelationshipDescription, NSString, NSEntityDescription;

@interface NSRelationshipDescription : NSPropertyDescription  {
    void *_reserved5;
    void *_reserved6;
    NSEntityDescription *_destinationEntity;
    NSString *_lazyDestinationEntityName;
    NSRelationshipDescription *_inverseRelationship;
    NSString *_lazyInverseRelationshipName;
    unsigned long _maxCount;
    unsigned long _minCount;
    unsigned int _deleteRule;
}

+ (void)initialize;

- (void)_setLazyDestinationEntityName:(id)arg1;
- (void)setMaxCount:(unsigned int)arg1;
- (void)setMinCount:(unsigned int)arg1;
- (void)setDeleteRule:(unsigned int)arg1;
- (void)setOrdered:(BOOL)arg1;
- (void)setDestinationEntity:(id)arg1;
- (void)setInverseRelationship:(id)arg1;
- (void)_versionHash:(char *)arg1 proxyContext:(id)arg2;
- (BOOL)_validateValuesAreOfDestinationEntity:(id)arg1 source:(id)arg2;
- (void)_updateInverse:(id)arg1;
- (BOOL)_isToManyRelationship;
- (id)inverseRelationship;
- (unsigned int)maxCount;
- (BOOL)isOrdered;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(const id)arg6 fetchRequests:(id)arg7;
- (BOOL)isIndexed;
- (id)_initWithName:(id)arg1;
- (void)_createCachesAndOptimizeState;
- (BOOL)_nonPredicateValidateValue:(id*)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id*)arg4;
- (void)_versionHash:(char *)arg1;
- (id)destinationEntity;
- (unsigned int)_propertyType;
- (id)versionHash;
- (BOOL)isToMany;
- (unsigned int)minCount;
- (BOOL)_isRelationship;
- (unsigned int)deleteRule;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;

@end