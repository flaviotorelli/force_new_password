Platform: Drupal 7.x
Name: Force New Password
Drupal: 7.x
Author: Flávio Torelli

---

When you should use this module:

  - After migrate users with passwords that can't be imported in SHA1.
  - After change your password policy.
  - Or if you just wanna force a new password change for a group of users set by a user role.

** How the flow works **

  1 - The user performs a regular login into site account.
  2 - The module intercepts user login and checks via username if the coming user needs a new password.
  3 - If so, the module shows a security message and sends an e-mail given the user further information.
  4 - The user receives the e-mail and click over the one-time-login link.
  5 - User is redirected into edit profile form.
  5 - User changes the password.
  6 - Module removes the user from the "force new password role" group avoiding looping this process.

** IMPORTANT **

  This module will not work properly if you have redirect actions set with Trigger module.
