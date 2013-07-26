#import <UIKit/UIKit.h>
#import "MessageCell.h"
#import "HumbugAppDelegate.h"

@interface StreamViewController : UITableViewController

-(void)composeButtonPressed;
-(void)initialPopulate;
-(void)reset;
-(int)rowWithId:(int)messageId;

@end
