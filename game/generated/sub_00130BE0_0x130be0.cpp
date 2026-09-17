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

// Function: sub_00130BE0
// Address: 0x130be0 - 0x130c30
void sub_00130BE0_0x130be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130BE0_0x130be0");
#endif

    switch (ctx->pc) {
        case 0x130c0cu: goto label_130c0c;
        default: break;
    }

    ctx->pc = 0x130be0u;

    // 0x130be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x130be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x130be4: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x130be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x130be8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130bec: 0x24505570  addiu       $s0, $v0, 0x5570
    ctx->pc = 0x130becu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21872));
    // 0x130bf0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x130bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x155570u));
    // 0x130bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130bf8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x130BF8u;
    {
        const bool branch_taken_0x130bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130BF8u;
        // 0x130bfc: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130bf8) {
            ctx->pc = 0x130C0Cu;
            goto label_130c0c;
        }
    }
    ctx->pc = 0x130C00u;
    // 0x130c00: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x130c00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x130c04: 0xc0493d2  jal         func_124F48
    ctx->pc = 0x130C04u;
    SET_GPR_U32(ctx, 31, 0x130C0Cu);
    ctx->pc = 0x130C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130C04u;
    // 0x130c08: 0x24a5f4d0  addiu       $a1, $a1, -0xB30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F48u, 0x130C04u, 0x130C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C0Cu;
label_130c0c:
    // 0x130c0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x130c0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130c10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130c14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x130c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130c18: 0x3e00008  jr          $ra
    ctx->pc = 0x130C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C18u;
        // 0x130c1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130C20u;
    // 0x130c20: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x130c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x130c24: 0x24634d68  addiu       $v1, $v1, 0x4D68
    ctx->pc = 0x130c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19816));
    // 0x130c28: 0x3e00008  jr          $ra
    ctx->pc = 0x130C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C28u;
        // 0x130c2c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130C30u;
}
