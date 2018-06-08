/*
 * UNPUBLISHED -- Rights  reserved  under  the  copyright  laws  of the
 * United States.  Use  of a copyright notice is precautionary only and
 * does not imply publication or disclosure.
 *
 * THIS DOCUMENTATION CONTAINS CONFIDENTIAL AND PROPRIETARY INFORMATION
 * OF    BLIZZARD   ENTERTAINMENT.    ANY   DUPLICATION,  MODIFICATION,
 * DISTRIBUTION, OR DISCLOSURE IS STRICTLY PROHIBITED WITHOUT THE PRIOR
 * EXPRESS WRITTEN PERMISSION OF BLIZZARD ENTERTAINMENT.
 */

//init
extern _SNETVERSIONDATA fileinfo;
extern int init_cpp_init_value; // weak
extern int window_activated; // weak
extern char diablo_exe_path[260];
extern void *unused_mpq;
extern char patch_rt_mpq_path[260];
extern LRESULT (__stdcall *CurrentProc)(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
extern void *diabdat_mpq;
extern char diabdat_mpq_path[260];
extern void *patch_rt_mpq;
extern int killed_mom_parent; // weak
extern bool screensaver_enabled_prev;

void __cdecl init_cpp_init();
void __fastcall init_cleanup(bool show_cursor);
void __cdecl init_run_office_from_start_menu();
void __fastcall init_run_office(char *dir);
void __fastcall init_disable_screensaver(bool disable);
void __cdecl init_create_window();
void __cdecl init_kill_mom_parent();
HWND __cdecl init_find_mom_parent();
void __cdecl init_await_mom_parent_exit();
void __cdecl init_archives();
void *__fastcall init_test_access(char *mpq_path, char *mpq_name, char *reg_loc, int flags, bool on_cd);
char *__fastcall init_strip_trailing_slash(char *path);
int __fastcall init_read_test_file(char *mpq_path, char *mpq_name, int flags, void **archive);
void __cdecl init_get_file_info();
LRESULT __stdcall init_palette(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
void __fastcall init_activate_window(HWND hWnd, bool activated);
LRESULT __stdcall init_redraw_window(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
LRESULT (__stdcall *__fastcall SetWindowProc(void *func))(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

/* data */
extern int init_inf; // weak

/* rdata */

extern char gszVersionNumber[260];
extern char gszProductName[260];