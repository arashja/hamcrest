//
//  OCHamcrest - HCIsIn.h
//  Copyright 2010 www.hamcrest.org. See LICENSE.txt
//
//  Created by: Jon Reid
//

    // Inherited
#import <OCHamcrest/HCBaseMatcher.h>


/**
    Is the object present in the given collection?
    @ingroup collection
 */
@interface HCIsIn : HCBaseMatcher
{
    id collection;
}

+ (id) isInCollection:(id)aCollection;
- (id) initWithCollection:(id)aCollection;

@end


/**
    Is the object present in the given collection?
 
    @b Synonym: @ref isIn
    @see HCIsIn
    @ingroup collection
 */
OBJC_EXPORT id<HCMatcher> HC_isIn(id aCollection);

/**
    Synonym for @ref HC_isIn, available if @c HC_SHORTHAND is defined.
    @ingroup collection
 */
#ifdef HC_SHORTHAND
    #define isIn HC_isIn
#endif