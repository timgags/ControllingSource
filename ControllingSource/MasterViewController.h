//
//  MasterViewController.h
//  ControllingSource
//
//  Created by Tim Gagliano on 9/24/13.
//  Copyright (c) 2013 TruTouch Apps. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
