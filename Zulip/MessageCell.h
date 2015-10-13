#import <UIKit/UIKit.h>

#import "RawMessage.h"

@protocol MessageCellDelegate <NSObject>

@optional
- (void)openLink:(NSURL *)URL;

@end


@interface MessageCell : UITableViewCell <UITextViewDelegate>

- (void)setMessage:(RawMessage *)message;
- (void)willBeDisplayed;

+ (NSString *)reuseIdentifier;
+ (CGFloat)heightForCellWithMessage:(RawMessage *)message;

@property (strong, nonatomic) IBOutlet UILabel *header;
@property (strong, nonatomic) IBOutlet UILabel *headerBar;
@property (strong, nonatomic) IBOutlet UILabel *sender;
@property (strong, nonatomic) IBOutlet UILabel *timestamp;
@property (strong, nonatomic) IBOutlet UIImageView *gravatar;
@property (strong, nonatomic) IBOutlet UITextView *attributedTextView;

@property (strong, nonatomic) NSString *type;
@property (strong, nonatomic) NSString *recipient;

@property (strong, nonatomic) RawMessage *message;

@property (nonatomic, weak) IBOutlet id <MessageCellDelegate> delegate;

@end
