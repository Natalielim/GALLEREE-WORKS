//
//  ProfileProfile+CoreDataProperties.h
//  Galleree
//
//  Created by Natalie Lim on 8/8/16.
//  Copyright © 2016 Dianatalie. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "ProfileProfile.h"

NS_ASSUME_NONNULL_BEGIN

@interface ProfileProfile (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSString *occupation;
@property (nullable, nonatomic, retain) NSString *about;
@property (nullable, nonatomic, retain) NSData *imageView;

@end

NS_ASSUME_NONNULL_END
