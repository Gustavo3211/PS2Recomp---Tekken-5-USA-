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

// Function: sub_002FDAB0
// Address: 0x2fdab0 - 0x2fdb10
void sub_002FDAB0_0x2fdab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDAB0_0x2fdab0");
#endif

    switch (ctx->pc) {
        case 0x2fdad4u: goto label_2fdad4;
        default: break;
    }

    ctx->pc = 0x2fdab0u;

    // 0x2fdab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fdab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fdab4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fdab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdab8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fdab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fdabc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fdabcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdac0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2fdac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2fdac4: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2FDAC4u;
    {
        const bool branch_taken_0x2fdac4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDAC4u;
        // 0x2fdac8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdac4) {
            ctx->pc = 0x2FDB00u;
            goto label_2fdb00;
        }
    }
    ctx->pc = 0x2FDACCu;
    // 0x2fdacc: 0xc0bf3e0  jal         func_2FCF80
    ctx->pc = 0x2FDACCu;
    SET_GPR_U32(ctx, 31, 0x2FDAD4u);
    ctx->pc = 0x2FDAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDACCu;
    // 0x2fdad0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF80u, 0x2FDACCu, 0x2FDAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDAD4u;
label_2fdad4:
    // 0x2fdad4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2fdad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2fdad8: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2fdad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2fdadc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FDADCu;
    {
        const bool branch_taken_0x2fdadc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDADCu;
        // 0x2fdae0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdadc) {
            ctx->pc = 0x2FDAF0u;
            goto label_2fdaf0;
        }
    }
    ctx->pc = 0x2FDAE4u;
    // 0x2fdae4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2fdae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fdae8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FDAE8u;
    {
        const bool branch_taken_0x2fdae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDAE8u;
        // 0x2fdaec: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdae8) {
            ctx->pc = 0x2FDAF8u;
            goto label_2fdaf8;
        }
    }
    ctx->pc = 0x2FDAF0u;
label_2fdaf0:
    // 0x2fdaf0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2fdaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fdaf4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2fdaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_2fdaf8:
    // 0x2fdaf8: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x2fdaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x2fdafc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2fdafcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_2fdb00:
    // 0x2fdb00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fdb00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fdb04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2fdb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fdb08: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDB08u;
        // 0x2fdb0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDB10u;
}
