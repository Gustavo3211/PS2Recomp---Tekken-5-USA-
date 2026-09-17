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

// Function: sub_00217CD8
// Address: 0x217cd8 - 0x217d70
void sub_00217CD8_0x217cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217CD8_0x217cd8");
#endif

    switch (ctx->pc) {
        case 0x217d34u: goto label_217d34;
        case 0x217d44u: goto label_217d44;
        case 0x217d4cu: goto label_217d4c;
        default: break;
    }

    ctx->pc = 0x217cd8u;

    // 0x217cd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217cdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x217cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ce0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217ce4: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x217ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x217ce8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x217ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x217cec: 0x26028858  addiu       $v0, $s0, -0x77A8
    ctx->pc = 0x217cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
    // 0x217cf0: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x217cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x217cf4: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x217cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x217cf8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x217cf8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x217cfc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x217CFCu;
    {
        const bool branch_taken_0x217cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x217D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CFCu;
        // 0x217d00: 0x30840002  andi        $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217cfc) {
            ctx->pc = 0x217D14u;
            goto label_217d14;
        }
    }
    ctx->pc = 0x217D04u;
    // 0x217d04: 0x8f82a850  lw          $v0, -0x57B0($gp)
    ctx->pc = 0x217d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944848)));
    // 0x217d08: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x217d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x217d0c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x217D0Cu;
    {
        const bool branch_taken_0x217d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217d0c) {
            ctx->pc = 0x217D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217D0Cu;
            // 0x217d10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217D2Cu;
            goto label_217d2c;
        }
    }
    ctx->pc = 0x217D14u;
label_217d14:
    // 0x217d14: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x217D14u;
    {
        const bool branch_taken_0x217d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x217d14) {
            ctx->pc = 0x217D2Cu;
            goto label_217d2c;
        }
    }
    ctx->pc = 0x217D1Cu;
    // 0x217d1c: 0x8f82a854  lw          $v0, -0x57AC($gp)
    ctx->pc = 0x217d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944852)));
    // 0x217d20: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x217d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x217d24: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x217D24u;
    {
        const bool branch_taken_0x217d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217d24) {
            ctx->pc = 0x217D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217D24u;
            // 0x217d28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217D2Cu;
            goto label_217d2c;
        }
    }
    ctx->pc = 0x217D2Cu;
label_217d2c:
    // 0x217d2c: 0xc0b6710  jal         func_2D9C40
    ctx->pc = 0x217D2Cu;
    SET_GPR_U32(ctx, 31, 0x217D34u);
    ctx->pc = 0x217D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D2Cu;
    // 0x217d30: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9C40u, 0x217D2Cu, 0x217D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D34u;
label_217d34:
    // 0x217d34: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x217D34u;
    {
        const bool branch_taken_0x217d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217d34) {
            ctx->pc = 0x217D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217D34u;
            // 0x217d38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217D5Cu;
            goto label_217d5c;
        }
    }
    ctx->pc = 0x217D3Cu;
    // 0x217d3c: 0xc093796  jal         func_24DE58
    ctx->pc = 0x217D3Cu;
    SET_GPR_U32(ctx, 31, 0x217D44u);
    ctx->pc = 0x24DE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DE58u, 0x217D3Cu, 0x217D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D44u;
label_217d44:
    // 0x217d44: 0xc0b6718  jal         func_2D9C60
    ctx->pc = 0x217D44u;
    SET_GPR_U32(ctx, 31, 0x217D4Cu);
    ctx->pc = 0x2D9C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9C60u, 0x217D44u, 0x217D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D4Cu;
label_217d4c:
    // 0x217d4c: 0x26038858  addiu       $v1, $s0, -0x77A8
    ctx->pc = 0x217d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
    // 0x217d50: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x217d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x217d54: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x217d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x217d58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_217d5c:
    // 0x217d5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x217d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x217d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217d64: 0x3e00008  jr          $ra
    ctx->pc = 0x217D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D64u;
        // 0x217d68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217D6Cu;
    // 0x217d6c: 0x0  nop
    ctx->pc = 0x217d6cu;
    // NOP
    ctx->pc = 0x217d70u;
}
