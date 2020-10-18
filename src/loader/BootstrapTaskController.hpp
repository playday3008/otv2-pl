#include "../Vendor.hpp"

#include "ui/UIBridge.hpp"
#include "runtime/RuntimeHandler.hpp"
#include "segment/Segment.hpp"
#include "../segment/SegmentInterpreter.hpp"

namespace BootstrapTask {

    /**
     *
     * @point  - Listener for callbacks & setup ui renderer.
     *
     * @author - 0x000cb. / 18.10.20
     *
     */

    extern DWORD WINAPI SetupUIBridge (_In_ LPVOID lpParameter);

    /**
     *
     * @point  - Callback listener & engine starter.
     *
     * @author - 0x000cb. / 18.10.20
     */

    extern DWORD WINAPI InitializeEngine (_In_ LPVOID lpParameter);

};