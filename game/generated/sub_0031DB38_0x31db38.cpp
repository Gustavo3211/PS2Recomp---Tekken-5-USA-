#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031DB38
// Address: 0x31db38 - 0x31db70
void sub_0031DB38_0x31db38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DB38_0x31db38");
#endif

    switch (ctx->pc) {
        case 0x31db38u: goto label_31db38;
        case 0x31db3cu: goto label_31db3c;
        case 0x31db40u: goto label_31db40;
        case 0x31db44u: goto label_31db44;
        case 0x31db48u: goto label_31db48;
        case 0x31db4cu: goto label_31db4c;
        case 0x31db50u: goto label_31db50;
        case 0x31db54u: goto label_31db54;
        case 0x31db58u: goto label_31db58;
        case 0x31db5cu: goto label_31db5c;
        case 0x31db60u: goto label_31db60;
        case 0x31db64u: goto label_31db64;
        case 0x31db68u: goto label_31db68;
        case 0x31db6cu: goto label_31db6c;
        default: break;
    }

    ctx->pc = 0x31db38u;

label_31db38:
    // 0x31db38: 0x94820014  lhu         $v0, 0x14($a0)
    ctx->pc = 0x31db38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_31db3c:
    // 0x31db3c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x31db3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_31db40:
    // 0x31db40: 0x94830016  lhu         $v1, 0x16($a0)
    ctx->pc = 0x31db40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
label_31db44:
    // 0x31db44: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x31db44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_31db48:
    // 0x31db48: 0x90830013  lbu         $v1, 0x13($a0)
    ctx->pc = 0x31db48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 19)));
label_31db4c:
    // 0x31db4c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x31db4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_31db50:
    // 0x31db50: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_31db54:
    if (ctx->pc == 0x31DB54u) {
        ctx->pc = 0x31DB58u;
        goto label_31db58;
    }
    ctx->pc = 0x31DB50u;
    {
        const bool branch_taken_0x31db50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31db50) {
            ctx->pc = 0x31DBB8u;
            return;
        }
    }
    ctx->pc = 0x31DB58u;
label_31db58:
    // 0x31db58: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31db58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_31db5c:
    // 0x31db5c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31db5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_31db60:
    // 0x31db60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31db60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31db64:
    // 0x31db64: 0x8c632f70  lw          $v1, 0x2F70($v1)
    ctx->pc = 0x31db64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12144)));
label_31db68:
    // 0x31db68: 0x600008  jr          $v1
label_31db6c:
    if (ctx->pc == 0x31DB6Cu) {
        ctx->pc = 0x31DB70u;
        goto label_fallthrough_0x31db68;
    }
    ctx->pc = 0x31DB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DB68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x31db68:
    ctx->pc = 0x31DB70u;
}
