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

// Function: sub_00124EC0
// Address: 0x124ec0 - 0x124f28
void sub_00124EC0_0x124ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124EC0_0x124ec0");
#endif

    switch (ctx->pc) {
        case 0x124ee0u: goto label_124ee0;
        case 0x124f00u: goto label_124f00;
        default: break;
    }

    ctx->pc = 0x124ec0u;

    // 0x124ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x124ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x124ec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124ec8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x124ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ecc: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x124ECCu;
    {
        const bool branch_taken_0x124ecc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x124ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124ECCu;
        // 0x124ed0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ecc) {
            ctx->pc = 0x124EE8u;
            goto label_124ee8;
        }
    }
    ctx->pc = 0x124ED4u;
    // 0x124ed4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x124ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x124ed8: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x124ED8u;
    SET_GPR_U32(ctx, 31, 0x124EE0u);
    ctx->pc = 0x124EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124ED8u;
    // 0x124edc: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x124ED8u, 0x124EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124EE0u;
label_124ee0:
    // 0x124ee0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x124EE0u;
    {
        const bool branch_taken_0x124ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EE0u;
        // 0x124ee4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ee0) {
            ctx->pc = 0x124EF0u;
            goto label_124ef0;
        }
    }
    ctx->pc = 0x124EE8u;
label_124ee8:
    // 0x124ee8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x124ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124eec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x124eecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124ef0:
    // 0x124ef0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124ef4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x124ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x124EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EF8u;
        // 0x124efc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124F00u;
label_124f00:
    // 0x124f00: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x124F00u;
    {
        const bool branch_taken_0x124f00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F00u;
        // 0x124f04: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f00) {
            ctx->pc = 0x124F1Cu;
            goto label_124f1c;
        }
    }
    ctx->pc = 0x124F08u;
    // 0x124f08: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x124f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x124f0c: 0x24424b98  addiu       $v0, $v0, 0x4B98
    ctx->pc = 0x124f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19352));
    // 0x124f10: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x124f10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x124f14: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x124f14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x124f18: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x124f18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_124f1c:
    // 0x124f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x124F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124F24u;
    // 0x124f24: 0x0  nop
    ctx->pc = 0x124f24u;
    // NOP
    ctx->pc = 0x124f28u;
}
