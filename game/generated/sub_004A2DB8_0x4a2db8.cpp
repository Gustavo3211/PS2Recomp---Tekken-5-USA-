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

// Function: sub_004A2DB8
// Address: 0x4a2db8 - 0x4a2e68
void sub_004A2DB8_0x4a2db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2DB8_0x4a2db8");
#endif

    switch (ctx->pc) {
        case 0x4a2e48u: goto label_4a2e48;
        case 0x4a2e60u: goto label_4a2e60;
        default: break;
    }

    ctx->pc = 0x4a2db8u;

    // 0x4a2db8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4a2db8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a2dbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a2dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a2dc0: 0x43403  sra         $a2, $a0, 16
    ctx->pc = 0x4a2dc0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4a2dc4: 0x50c20010  beql        $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4A2DC4u;
    {
        const bool branch_taken_0x4a2dc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a2dc4) {
            ctx->pc = 0x4A2DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A2DC4u;
            // 0x4a2dc8: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A2E08u;
            goto label_4a2e08;
        }
    }
    ctx->pc = 0x4A2DCCu;
    // 0x4a2dcc: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x4a2dccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4a2dd0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A2DD0u;
    {
        const bool branch_taken_0x4a2dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2dd0) {
            ctx->pc = 0x4A2DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A2DD0u;
            // 0x4a2dd4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A2DE8u;
            goto label_4a2de8;
        }
    }
    ctx->pc = 0x4A2DD8u;
    // 0x4a2dd8: 0x50c0000b  beql        $a2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4A2DD8u;
    {
        const bool branch_taken_0x4a2dd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2dd8) {
            ctx->pc = 0x4A2DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A2DD8u;
            // 0x4a2ddc: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A2E08u;
            goto label_4a2e08;
        }
    }
    ctx->pc = 0x4A2DE0u;
    // 0x4a2de0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4A2DE0u;
    {
        const bool branch_taken_0x4a2de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2DE0u;
        // 0x4a2de4: 0x3c040073  lui         $a0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2de0) {
            ctx->pc = 0x4A2E0Cu;
            goto label_4a2e0c;
        }
    }
    ctx->pc = 0x4A2DE8u;
label_4a2de8:
    // 0x4a2de8: 0x50c20007  beql        $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A2DE8u;
    {
        const bool branch_taken_0x4a2de8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a2de8) {
            ctx->pc = 0x4A2DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A2DE8u;
            // 0x4a2dec: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A2E08u;
            goto label_4a2e08;
        }
    }
    ctx->pc = 0x4A2DF0u;
    // 0x4a2df0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4a2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a2df4: 0x50c20004  beql        $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A2DF4u;
    {
        const bool branch_taken_0x4a2df4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a2df4) {
            ctx->pc = 0x4A2DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A2DF4u;
            // 0x4a2df8: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A2E08u;
            goto label_4a2e08;
        }
    }
    ctx->pc = 0x4A2DFCu;
    // 0x4a2dfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4A2DFCu;
    {
        const bool branch_taken_0x4a2dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2DFCu;
        // 0x4a2e00: 0x3c040073  lui         $a0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2dfc) {
            ctx->pc = 0x4A2E0Cu;
            goto label_4a2e0c;
        }
    }
    ctx->pc = 0x4A2E04u;
    // 0x4a2e04: 0x0  nop
    ctx->pc = 0x4a2e04u;
    // NOP
label_4a2e08:
    // 0x4a2e08: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4a2e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_4a2e0c:
    // 0x4a2e0c: 0x24c20002  addiu       $v0, $a2, 0x2
    ctx->pc = 0x4a2e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x4a2e10: 0x8c83d6c4  lw          $v1, -0x293C($a0)
    ctx->pc = 0x4a2e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294956740)));
    // 0x4a2e14: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a2e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a2e18: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x4a2e18u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a2e1c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x4a2e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x4a2e20: 0x2463003e  addiu       $v1, $v1, 0x3E
    ctx->pc = 0x4a2e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 62));
    // 0x4a2e24: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4a2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4a2e28: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x4a2e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4a2e2c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a2e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a2e30: 0x31bc0  sll         $v1, $v1, 15
    ctx->pc = 0x4a2e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
    // 0x4a2e34: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4a2e34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4a2e38: 0x31c40  sll         $v1, $v1, 17
    ctx->pc = 0x4a2e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 17));
    // 0x4a2e3c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x4a2e3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4a2e40: 0x3e00008  jr          $ra
    ctx->pc = 0x4A2E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A2E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2E40u;
        // 0x4a2e44: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A2E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A2E48u;
label_4a2e48:
    // 0x4a2e48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a2e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a2e4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a2e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a2e50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a2e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2e54: 0x8124724  j           func_491C90
    ctx->pc = 0x4A2E54u;
    ctx->pc = 0x4A2E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2E54u;
    // 0x4a2e58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491C90u, 0x4A2E54u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4A2E5Cu;
    // 0x4a2e5c: 0x0  nop
    ctx->pc = 0x4a2e5cu;
    // NOP
label_4a2e60:
    // 0x4a2e60: 0x3e00008  jr          $ra
    ctx->pc = 0x4A2E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A2E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A2E68u;
}
