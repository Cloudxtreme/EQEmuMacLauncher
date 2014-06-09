//
//  EQMacAppDelegate.h
//  EQmac launcher
//
//  Created by Scott Davis on 6/8/14.
//  Copyright (c) 2014 Scott Davis. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface EQMacAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
