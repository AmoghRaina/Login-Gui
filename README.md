


# Login-Gui


## Login Page GUI Application

**This repository contains a simple Qt-based Login Page GUI application that demonstrates various Qt functionalities, including GUI design, event handling, and timers. The application includes a main window with two primary functionalities: user login validation and displaying an "About Me" dialog.**


### Main Features

1.  **User Interface Setup**:
    
    -   The main window (`MainWindow`) is set up using the Qt Designer UI file.
    -   The application uses a QPixmap to display an image in a QLabel with proper scaling and alignment.
2.  **Text Animation**:
    
    -   The application showcases a text animation effect where the name "Amogh Raina" is progressively displayed in a QLineEdit.
3.  **Login Validation**:
    
    -   When the login button is clicked, a text animation shows "Validating" on the button.
    -   The application checks the credentials (`username: amoghraina`, `password: 1.618`) after a short delay.
    -   If the credentials are correct, the button text changes to "Success", and the `AboutMe` dialog is shown.
    -   If the credentials are incorrect, the button text changes to "Failed" and reverts to "Login" after a delay.
4.  **About Me Dialog**:
    
    -   An additional button opens an "About Me" dialog that provides more information about the Developer (Me).
    -   The dialog is positioned relative to the main window and is properly managed to ensure memory is freed when it is closed.
	 - Additionally, when the login is granted it will open the about me dialog as well.
### Requirements

-   Qt 6.7 or higher
-   A valid Qt development environment
### Future Enhancements

-   Implement a more secure way to handle user credentials.
-   Add more features to the "About Me" dialog.
-   Improve the UI/UX with additional styling and animations.

**How My Login GUI Fits:**

1.  **Authentication Layer**:  
    My Login GUI offers a complete authentication layer, including username and password fields, validation logic, and feedback mechanisms for success or failure.
    
2.  **Security Considerations**:  
    By using my pre-built authentication logic, developers ensure secure validation of user credentials before granting access to sensitive data or operations. They can enhance security with additional measures like multi-factor authentication or encryption.
    
3.  **Customization Options**:  
    The modular design of my Login GUI allows developers to customize the UI to match their application’s branding and theme. They can modify UI elements, icons, colors, and animations as needed.
    
4.  **Integration Ease**:  
    Developers can integrate my MainWindow class and related UI files into their Qt-based desktop applications with minimal effort. They can adjust styling, behavior, and integrate it with their backend authentication systems.
    
5.  **Time and Resource Savings**:  
    Integrating my Login GUI saves developers significant development time and resources that would otherwise be spent on designing and implementing an authentication system from scratch. This allows them to focus more on core application features.
    
6.  **Community and Support**:  
    Developers benefit from community contributions and ongoing support for enhancements and bug fixes through my GitHub repository. It’s a collaborative space where developers can collaborate, report issues, and suggest improvements.
### Screenshots:

<table>
  <tr>
    <td><img src="https://github.com/AmoghRaina/Login-Gui/assets/116047470/02eb9034-9790-4689-84bd-3e4a633c4bfc" alt="l1" width="300"/></td>
    <td><img src="https://github.com/AmoghRaina/Login-Gui/assets/116047470/7f116156-2216-452c-8e7b-c47010e451dc" alt="l2" width="300"/></td>
  </tr>
  <tr>
    <td><img src="https://github.com/AmoghRaina/Login-Gui/assets/116047470/6e093cfa-33df-4d1c-aa17-7e39db1788e4" alt="l3" width="300"/></td>
    <td><img src="https://github.com/AmoghRaina/Login-Gui/assets/116047470/f8ac7235-47f4-4cfb-a164-474c5cdaf525" alt="l4" width="300"/></td>
  </tr>
  <tr>
    <td><img src="https://github.com/AmoghRaina/Login-Gui/assets/116047470/5cad774e-0e0e-45dc-a329-b0caf822ea75" alt="l5" width="300"/></td>
  </tr>
</table>

### Running media :
![logingifcrop](https://github.com/AmoghRaina/Login-Gui/assets/116047470/f155d81c-bd52-4f2c-bbb7-72d8daec1726)


## Contributions

I welcome contributions to the Login GUI project! If you have ideas for improvements, new features, or bug fixes, feel free to add them to my GitHub repository. I appreciate any help in making this project better and look forward to collaborating with you. Thank you for your support and contributions!
