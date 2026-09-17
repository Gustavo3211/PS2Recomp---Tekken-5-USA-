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

// Function: sub_002FDC60
// Address: 0x2fdc60 - 0x2fdca0
void sub_002FDC60_0x2fdc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDC60_0x2fdc60");
#endif

    ctx->pc = 0x2fdc60u;

    // 0x2fdc60: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2fdc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdc64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fdc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdc68: 0x90a2000a  lbu         $v0, 0xA($a1)
    ctx->pc = 0x2fdc68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x2fdc6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fdc6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdc70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FDC70u;
    {
        const bool branch_taken_0x2fdc70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDC70u;
        // 0x2fdc74: 0x2c430002  sltiu       $v1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdc70) {
            ctx->pc = 0x2FDC80u;
            goto label_2fdc80;
        }
    }
    ctx->pc = 0x2FDC78u;
    // 0x2fdc78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FDC78u;
    {
        const bool branch_taken_0x2fdc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDC78u;
        // 0x2fdc7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdc78) {
            ctx->pc = 0x2FDC90u;
            goto label_2fdc90;
        }
    }
    ctx->pc = 0x2FDC80u;
label_2fdc80:
    // 0x2fdc80: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FDC80u;
    {
        const bool branch_taken_0x2fdc80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDC80u;
        // 0x2fdc84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdc80) {
            ctx->pc = 0x2FDC90u;
            goto label_2fdc90;
        }
    }
    ctx->pc = 0x2FDC88u;
    // 0x2fdc88: 0x90a2000b  lbu         $v0, 0xB($a1)
    ctx->pc = 0x2fdc88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
    // 0x2fdc8c: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x2fdc8cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2fdc90:
    // 0x2fdc90: 0x2c820001  sltiu       $v0, $a0, 0x1
    ctx->pc = 0x2fdc90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2fdc94: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDC94u;
        // 0x2fdc98: 0x6100b  movn        $v0, $zero, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDC9Cu;
    // 0x2fdc9c: 0x0  nop
    ctx->pc = 0x2fdc9cu;
    // NOP
    ctx->pc = 0x2fdca0u;
}
