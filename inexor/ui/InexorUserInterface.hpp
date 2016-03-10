#ifndef INEXOR_UI_INEXOR_FRAME_HEADER
#define INEXOR_UI_INEXOR_FRAME_HEADER

#include "include/cef_app.h"

#include "inexor/ui/InexorContextProvider.hpp"
#include "inexor/ui/InexorLayerProvider.hpp"

extern int uimenuvisible;
extern char* uimenustate;
extern char* uimenuparentstate;

/**
 * The main user interface of inexor.
 */
class InexorUserInterface : public InexorContextProvider,
                            public AbstractInexorLayerProvider
{

    public:
        InexorUserInterface(std::string &name, std::string &url)
            : AbstractInexorLayerProvider(name, url),
			  _name(name),
			  _url(url),
			  is_menu_visible(true),
			  menu_state("/menu/main"),
			  menu_parent_state("") {};

        // InexorCefContextProvider
        void InitializeContext();
        bool Execute(const CefString& name, CefRefPtr<CefV8Value> object, const CefV8ValueList& arguments, CefRefPtr<CefV8Value>& retval, CefString& exception);
        bool Get(const CefString& name, const CefRefPtr<CefV8Value> object, CefRefPtr<CefV8Value>& retval, CefString& exception);
        bool Set(const CefString& name, const CefRefPtr<CefV8Value> object, const CefRefPtr<CefV8Value> value, CefString& exception);
        std::string GetContextName() { return _name; };

        // User interface resize handling
        void Reload();
        void Resize(int x, int y, int width, int height);
        void AutoResize(int width, int height);

        /// Bind to key ESC
        void Menu() {
            if (is_visible) {
                if (menu_parent_state == "") {
                    if (!mainmenu) {
                        SetMenuVisibility(false);
            	    }
                } else {
                    SetMenuState(menu_parent_state);
                }
            } else {
                SetMenuState("/menu/main");
                SetMenuVisibility(true);
            }
        };

        // Intercept setters for event handling
        void SetVisibility(bool _is_visible);
        void SetAcceptingKeyInput(bool _is_accepting_key_input);
        void SetAcceptingMouseInput(bool _is_accepting_mouse_input);

        // User interface state handling
        bool GetMenuVisibility() { return is_menu_visible; };
        std::string GetMenuState() { return menu_state; };
        std::string GetMenuParentState() { return menu_parent_state; };
        void SetMenuVisibility(bool _is_menu_visible);
        void SetMenuState(std::string _menu_state);
        void SetMenuParentState(std::string _menu_parent_state);

        // Event handling
        void FireUiEvent(std::string name, bool value);
        void FireUiEvent(std::string name, std::string value);

        /// Updates the menu states
        void SetMenuStates(std::string _menu_state, std::string _menu_parent_state, bool _is_menu_visible) {
            SetMenuState(_menu_state);
            SetMenuParentState(_menu_parent_state);
            SetMenuVisibility(_is_menu_visible);
        };

    private:
        std::string _name;
        std::string _url;

        bool is_menu_visible;
        std::string menu_state;
        std::string menu_parent_state;

        // Include the default reference counting implementation.
        IMPLEMENT_REFCOUNTING(InexorUserInterface);
};

#endif