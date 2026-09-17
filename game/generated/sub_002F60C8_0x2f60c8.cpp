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

// Function: sub_002F60C8
// Address: 0x2f60c8 - 0x2f6138
void sub_002F60C8_0x2f60c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F60C8_0x2f60c8");
#endif

    switch (ctx->pc) {
        case 0x2f6114u: goto label_2f6114;
        default: break;
    }

    ctx->pc = 0x2f60c8u;

    // 0x2f60c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f60c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f60cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f60ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f60d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f60d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f60d4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f60d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f60d8: 0x26050148  addiu       $a1, $s0, 0x148
    ctx->pc = 0x2f60d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    // 0x2f60dc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f60dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f60e0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F60E0u;
    {
        const bool branch_taken_0x2f60e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f60e0) {
            ctx->pc = 0x2F60E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F60E0u;
            // 0x2f60e4: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F60FCu;
            goto label_2f60fc;
        }
    }
    ctx->pc = 0x2F60E8u;
    // 0x2f60e8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f60e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f60ec: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f60ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f60f0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F60F0u;
    {
        const bool branch_taken_0x2f60f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f60f0) {
            ctx->pc = 0x2F60F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F60F0u;
            // 0x2f60f4: 0x8e060104  lw          $a2, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6108u;
            goto label_2f6108;
        }
    }
    ctx->pc = 0x2F60F8u;
    // 0x2f60f8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f60f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f60fc:
    // 0x2f60fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f60fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6100: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f6100u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2f6104: 0x8e060104  lw          $a2, 0x104($s0)
    ctx->pc = 0x2f6104u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2f6108:
    // 0x2f6108: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f6108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f610c: 0xc0bd50a  jal         func_2F5428
    ctx->pc = 0x2F610Cu;
    SET_GPR_U32(ctx, 31, 0x2F6114u);
    ctx->pc = 0x2F6110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F610Cu;
    // 0x2f6110: 0x8e07004c  lw          $a3, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5428u, 0x2F610Cu, 0x2F6114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6114u;
label_2f6114:
    // 0x2f6114: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6114u;
    {
        const bool branch_taken_0x2f6114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6114u;
        // 0x2f6118: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6114) {
            ctx->pc = 0x2F6124u;
            goto label_2f6124;
        }
    }
    ctx->pc = 0x2F611Cu;
    // 0x2f611c: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2f611cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2f6120: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x2f6120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
label_2f6124:
    // 0x2f6124: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f6124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6128: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f6128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f612c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F612Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F612Cu;
        // 0x2f6130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F612Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6134u;
    // 0x2f6134: 0x0  nop
    ctx->pc = 0x2f6134u;
    // NOP
    ctx->pc = 0x2f6138u;
}
