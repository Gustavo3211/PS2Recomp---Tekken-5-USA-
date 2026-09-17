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

// Function: sub_0025FE60
// Address: 0x25fe60 - 0x25feb0
void sub_0025FE60_0x25fe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FE60_0x25fe60");
#endif

    switch (ctx->pc) {
        case 0x25fe74u: goto label_25fe74;
        case 0x25fe9cu: goto label_25fe9c;
        default: break;
    }

    ctx->pc = 0x25fe60u;

    // 0x25fe60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25fe60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25fe64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25fe64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25fe68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x25fe68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x25fe6c: 0xc097f68  jal         func_25FDA0
    ctx->pc = 0x25FE6Cu;
    SET_GPR_U32(ctx, 31, 0x25FE74u);
    ctx->pc = 0x25FE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FE6Cu;
    // 0x25fe70: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDA0u, 0x25FE6Cu, 0x25FE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE74u;
label_25fe74:
    // 0x25fe74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25fe74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fe78: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x25FE78u;
    {
        const bool branch_taken_0x25fe78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fe78) {
            ctx->pc = 0x25FE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25FE78u;
            // 0x25fe7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25FEA4u;
            goto label_25fea4;
        }
    }
    ctx->pc = 0x25FE80u;
    // 0x25fe80: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x25fe80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25fe84: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x25fe84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25fe88: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25FE88u;
    {
        const bool branch_taken_0x25fe88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25fe88) {
            ctx->pc = 0x25FE8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25FE88u;
            // 0x25fe8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25FEA0u;
            goto label_25fea0;
        }
    }
    ctx->pc = 0x25FE90u;
    // 0x25fe90: 0x94a60002  lhu         $a2, 0x2($a1)
    ctx->pc = 0x25fe90u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x25fe94: 0xc04a125  jal         func_128494
    ctx->pc = 0x25FE94u;
    SET_GPR_U32(ctx, 31, 0x25FE9Cu);
    ctx->pc = 0x25FE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FE94u;
    // 0x25fe98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x25FE94u, 0x25FE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE9Cu;
label_25fe9c:
    // 0x25fe9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25fea0:
    // 0x25fea0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25fea0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25fea4:
    // 0x25fea4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25fea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25fea8: 0x3e00008  jr          $ra
    ctx->pc = 0x25FEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FEA8u;
        // 0x25feac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FEB0u;
}
