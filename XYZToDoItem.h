//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by matt elia on 8/28/14.
//  Copyright (c) 2014 Q. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
