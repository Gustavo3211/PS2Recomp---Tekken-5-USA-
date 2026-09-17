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

// Function: sub_0032DDF8
// Address: 0x32ddf8 - 0x32de20
void sub_0032DDF8_0x32ddf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DDF8_0x32ddf8");
#endif

    switch (ctx->pc) {
        case 0x32ddf8u: goto label_32ddf8;
        case 0x32ddfcu: goto label_32ddfc;
        case 0x32de00u: goto label_32de00;
        case 0x32de04u: goto label_32de04;
        case 0x32de08u: goto label_32de08;
        case 0x32de0cu: goto label_32de0c;
        case 0x32de10u: goto label_32de10;
        case 0x32de14u: goto label_32de14;
        case 0x32de18u: goto label_32de18;
        case 0x32de1cu: goto label_32de1c;
        default: break;
    }

    ctx->pc = 0x32ddf8u;

label_32ddf8:
    // 0x32ddf8: 0x2ca20009  sltiu       $v0, $a1, 0x9
    ctx->pc = 0x32ddf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_32ddfc:
    // 0x32ddfc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_32de00:
    if (ctx->pc == 0x32DE00u) {
        ctx->pc = 0x32DE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DDFCu;
        // 0x32de00: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32DE04u;
        goto label_32de04;
    }
    ctx->pc = 0x32DDFCu;
    {
        const bool branch_taken_0x32ddfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DDFCu;
        // 0x32de00: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ddfc) {
            ctx->pc = 0x32DEA4u;
            return;
        }
    }
    ctx->pc = 0x32DE04u;
label_32de04:
    // 0x32de04: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x32de04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_32de08:
    // 0x32de08: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x32de08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_32de0c:
    // 0x32de0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_32de10:
    // 0x32de10: 0x8c633120  lw          $v1, 0x3120($v1)
    ctx->pc = 0x32de10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12576)));
label_32de14:
    // 0x32de14: 0x600008  jr          $v1
label_32de18:
    if (ctx->pc == 0x32DE18u) {
        ctx->pc = 0x32DE1Cu;
        goto label_32de1c;
    }
    ctx->pc = 0x32DE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DE14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x32DE1Cu;
label_32de1c:
    // 0x32de1c: 0x0  nop
    ctx->pc = 0x32de1cu;
    // NOP
    ctx->pc = 0x32de20u;
}
