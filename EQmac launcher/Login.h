//
//  Login.h
//  EQEmuMac launcher
//
//  Created by Scott Davis on 6/8/14.
//  Copyright (c) 2014 Scott Davis. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Login : NSManagedObject

@property (nonatomic, retain) NSString * username;
@property (nonatomic, retain) NSString * password;

@end
