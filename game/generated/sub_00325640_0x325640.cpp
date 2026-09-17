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

// Function: sub_00325640
// Address: 0x325640 - 0x325678
void sub_00325640_0x325640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325640_0x325640");
#endif

    ctx->pc = 0x325640u;

    // 0x325640: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x325640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x325644: 0x2ca2000c  sltiu       $v0, $a1, 0xC
    ctx->pc = 0x325644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x325648: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x325648u;
    {
        const bool branch_taken_0x325648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x325648) {
            ctx->pc = 0x32564Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325648u;
            // 0x32564c: 0xa0800001  sb          $zero, 0x1($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325688u;
            return;
        }
    }
    ctx->pc = 0x325650u;
    // 0x325650: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x325650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x325654: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x325654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x325658: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x325658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32565c: 0x8c6330d0  lw          $v1, 0x30D0($v1)
    ctx->pc = 0x32565cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12496)));
    // 0x325660: 0x600008  jr          $v1
    ctx->pc = 0x325660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x325668u: goto label_325668;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325660u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x325668u;
label_325668:
    // 0x325668: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x325668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32566c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32566Cu;
    {
        const bool branch_taken_0x32566c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32566Cu;
        // 0x325670: 0xa0820001  sb          $v0, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32566c) {
            ctx->pc = 0x325690u;
            return;
        }
    }
    ctx->pc = 0x325674u;
    // 0x325674: 0x0  nop
    ctx->pc = 0x325674u;
    // NOP
    ctx->pc = 0x325678u;
}
