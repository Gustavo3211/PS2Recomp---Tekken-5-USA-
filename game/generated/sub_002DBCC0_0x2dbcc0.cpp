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

// Function: sub_002DBCC0
// Address: 0x2dbcc0 - 0x2dbd18
void sub_002DBCC0_0x2dbcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBCC0_0x2dbcc0");
#endif

    switch (ctx->pc) {
        case 0x2dbce0u: goto label_2dbce0;
        case 0x2dbcf4u: goto label_2dbcf4;
        default: break;
    }

    ctx->pc = 0x2dbcc0u;

    // 0x2dbcc0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2dbcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2dbcc4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dbcc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dbcc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dbcc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbccc: 0x248483c0  addiu       $a0, $a0, -0x7C40
    ctx->pc = 0x2dbcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935488));
    // 0x2dbcd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dbcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dbcd4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dbcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2dbcd8: 0xc085238  jal         func_2148E0
    ctx->pc = 0x2DBCD8u;
    SET_GPR_U32(ctx, 31, 0x2DBCE0u);
    ctx->pc = 0x2DBCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBCD8u;
    // 0x2dbcdc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2148E0u, 0x2DBCD8u, 0x2DBCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBCE0u;
label_2dbce0:
    // 0x2dbce0: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x2dbce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2dbce4: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DBCE4u;
    {
        const bool branch_taken_0x2dbce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dbce4) {
            ctx->pc = 0x2DBCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBCE4u;
            // 0x2dbce8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBD04u;
            goto label_2dbd04;
        }
    }
    ctx->pc = 0x2DBCECu;
    // 0x2dbcec: 0xc08215c  jal         func_208570
    ctx->pc = 0x2DBCECu;
    SET_GPR_U32(ctx, 31, 0x2DBCF4u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x2DBCECu, 0x2DBCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBCF4u;
label_2dbcf4:
    // 0x2dbcf4: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x2dbcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2dbcf8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DBCF8u;
    {
        const bool branch_taken_0x2dbcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2DBCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBCF8u;
        // 0x2dbcfc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbcf8) {
            ctx->pc = 0x2DBD08u;
            goto label_2dbd08;
        }
    }
    ctx->pc = 0x2DBD00u;
    // 0x2dbd00: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2dbd00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dbd04:
    // 0x2dbd04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2dbd04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dbd08:
    // 0x2dbd08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dbd08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbd0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dbd0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dbd10: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD10u;
        // 0x2dbd14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBD18u;
}
