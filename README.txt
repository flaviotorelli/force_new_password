Description:

Force New Password allows site administrators define a group of users that must reset their password.
Once defined a user role and grouping the users in this role, the module will intercept user login and check if the user account belongs this group.
If so, the reset password e-mail is sent and a warning message is showed.
This verification is done only by username or e-mail, the password will be disconsidered in this flow.

Some reasons to use Force New Password module:

  - After migrate user accounts with passwords that can't be migrated to SHA1.
  - After change your password policy.

How the flow works:

  1 - The user performs a regular login into site account.
  2 - The module will intercept user login and check via username (or e-mail) if the coming user needs a new password.
  3 - If so, the module shows a security message and sends an e-mail given the user further information.
  4 - The user receives the e-mail and click over the one-time-login link.
  5 - User is redirected into edit profile form.
  6 - User changes the password.

** IMPORTANT **

  This module may not work properly if you have redirect actions set with Trigger module.
