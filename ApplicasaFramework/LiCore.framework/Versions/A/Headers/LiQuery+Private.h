//
//  LiQuery+Private.h
//  LiCore
//
//  Created by Benny Davidovitz on 12/30/12.
//  Copyright (c) 2012 benny@applicasa.com. All rights reserved.
//

#import <LiCore/LiCore.h>

@interface LiQuery (Private)

- (NSString *) getMongoQueryWithQueryKind:(QueryKind)queryKind ClassName:(NSString *)className;
- (NSString *) sqlQueryDescription;
- (NSString *) sqlOrderQueryWithPager:(BOOL)withPager;

@end
