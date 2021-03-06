#import "SWGMultibranchPipeline.h"

@implementation SWGMultibranchPipeline

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"displayName": @"displayName", @"estimatedDurationInMillis": @"estimatedDurationInMillis", @"latestRun": @"latestRun", @"name": @"name", @"organization": @"organization", @"weatherScore": @"weatherScore", @"branchNames": @"branchNames", @"numberOfFailingBranches": @"numberOfFailingBranches", @"numberOfFailingPullRequests": @"numberOfFailingPullRequests", @"numberOfSuccessfulBranches": @"numberOfSuccessfulBranches", @"numberOfSuccessfulPullRequests": @"numberOfSuccessfulPullRequests", @"totalNumberOfBranches": @"totalNumberOfBranches", @"totalNumberOfPullRequests": @"totalNumberOfPullRequests", @"class": @"_class" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"displayName", @"estimatedDurationInMillis", @"latestRun", @"name", @"organization", @"weatherScore", @"branchNames", @"numberOfFailingBranches", @"numberOfFailingPullRequests", @"numberOfSuccessfulBranches", @"numberOfSuccessfulPullRequests", @"totalNumberOfBranches", @"totalNumberOfPullRequests", @"class"];
  return [optionalProperties containsObject:propertyName];
}

@end
