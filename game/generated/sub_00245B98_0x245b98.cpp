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

// Function: sub_00245B98
// Address: 0x245b98 - 0x245c10
void sub_00245B98_0x245b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245B98_0x245b98");
#endif

    switch (ctx->pc) {
        case 0x245bacu: goto label_245bac;
        case 0x245bd0u: goto label_245bd0;
        default: break;
    }

    ctx->pc = 0x245b98u;

    // 0x245b98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x245b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x245b9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x245b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x245ba0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x245ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x245ba4: 0xc0916be  jal         func_245AF8
    ctx->pc = 0x245BA4u;
    SET_GPR_U32(ctx, 31, 0x245BACu);
    ctx->pc = 0x245BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245BA4u;
    // 0x245ba8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245AF8u, 0x245BA4u, 0x245BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245BACu;
label_245bac:
    // 0x245bac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x245BACu;
    {
        const bool branch_taken_0x245bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BACu;
        // 0x245bb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245bac) {
            ctx->pc = 0x245BF8u;
            goto label_245bf8;
        }
    }
    ctx->pc = 0x245BB4u;
    // 0x245bb4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x245bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x245bb8: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x245bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x245bbc: 0x1880000e  blez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x245BBCu;
    {
        const bool branch_taken_0x245bbc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x245BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BBCu;
        // 0x245bc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245bbc) {
            ctx->pc = 0x245BF8u;
            goto label_245bf8;
        }
    }
    ctx->pc = 0x245BC4u;
    // 0x245bc4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x245BC4u;
    {
        const bool branch_taken_0x245bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BC4u;
        // 0x245bc8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245bc4) {
            ctx->pc = 0x245BE0u;
            goto label_245be0;
        }
    }
    ctx->pc = 0x245BCCu;
    // 0x245bcc: 0x0  nop
    ctx->pc = 0x245bccu;
    // NOP
label_245bd0:
    // 0x245bd0: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x245bd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x245bd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x245BD4u;
    {
        const bool branch_taken_0x245bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BD4u;
        // 0x245bd8: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245bd4) {
            ctx->pc = 0x245BF8u;
            goto label_245bf8;
        }
    }
    ctx->pc = 0x245BDCu;
    // 0x245bdc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x245bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_245be0:
    // 0x245be0: 0x0  nop
    ctx->pc = 0x245be0u;
    // NOP
    // 0x245be4: 0x0  nop
    ctx->pc = 0x245be4u;
    // NOP
    // 0x245be8: 0x0  nop
    ctx->pc = 0x245be8u;
    // NOP
    // 0x245bec: 0x5450fff8  bnel        $v0, $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x245BECu;
    {
        const bool branch_taken_0x245bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x245bec) {
            ctx->pc = 0x245BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245BECu;
            // 0x245bf0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245bd0;
        }
    }
    ctx->pc = 0x245BF4u;
    // 0x245bf4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x245bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_245bf8:
    // 0x245bf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245bf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245bfc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x245bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245c00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x245c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x245c04: 0x3e00008  jr          $ra
    ctx->pc = 0x245C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C04u;
        // 0x245c08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245C0Cu;
    // 0x245c0c: 0x0  nop
    ctx->pc = 0x245c0cu;
    // NOP
    ctx->pc = 0x245c10u;
}
