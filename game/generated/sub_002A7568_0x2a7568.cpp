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

// Function: sub_002A7568
// Address: 0x2a7568 - 0x2a7600
void sub_002A7568_0x2a7568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7568_0x2a7568");
#endif

    switch (ctx->pc) {
        case 0x2a7590u: goto label_2a7590;
        default: break;
    }

    ctx->pc = 0x2a7568u;

    // 0x2a7568: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2a7568u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a756c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2a756cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7570: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A7570u;
    {
        const bool branch_taken_0x2a7570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7570u;
        // 0x2a7574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7570) {
            ctx->pc = 0x2A75D4u;
            goto label_2a75d4;
        }
    }
    ctx->pc = 0x2A7578u;
    // 0x2a7578: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x2a7578u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a757c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A757Cu;
    {
        const bool branch_taken_0x2a757c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A757Cu;
        // 0x2a7580: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a757c) {
            ctx->pc = 0x2A75C8u;
            goto label_2a75c8;
        }
    }
    ctx->pc = 0x2A7584u;
    // 0x2a7584: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x2a7584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7588: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x2a7588u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a758c: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x2a758cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_2a7590:
    // 0x2a7590: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2A7590u;
    {
        const bool branch_taken_0x2a7590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A7594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7590u;
        // 0x2a7594: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7590) {
            ctx->pc = 0x2A75F0u;
            goto label_2a75f0;
        }
    }
    ctx->pc = 0x2A7598u;
    // 0x2a7598: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x2a7598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a759c: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x2a759cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2a75a0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x2a75a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a75a4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A75A4u;
    {
        const bool branch_taken_0x2a75a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A75A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A75A4u;
        // 0x2a75a8: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a75a4) {
            ctx->pc = 0x2A75D4u;
            goto label_2a75d4;
        }
    }
    ctx->pc = 0x2A75ACu;
    // 0x2a75ac: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x2a75acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a75b0: 0x0  nop
    ctx->pc = 0x2a75b0u;
    // NOP
    // 0x2a75b4: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A75B4u;
    {
        const bool branch_taken_0x2a75b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a75b4) {
            ctx->pc = 0x2A75B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A75B4u;
            // 0x2a75b8: 0x80c30000  lb          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7590;
        }
    }
    ctx->pc = 0x2A75BCu;
    // 0x2a75bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A75BCu;
    {
        const bool branch_taken_0x2a75bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A75C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A75BCu;
        // 0x2a75c0: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a75bc) {
            ctx->pc = 0x2A75CCu;
            goto label_2a75cc;
        }
    }
    ctx->pc = 0x2A75C4u;
    // 0x2a75c4: 0x0  nop
    ctx->pc = 0x2a75c4u;
    // NOP
label_2a75c8:
    // 0x2a75c8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x2a75c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2a75cc:
    // 0x2a75cc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A75CCu;
    {
        const bool branch_taken_0x2a75cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a75cc) {
            ctx->pc = 0x2A75F8u;
            goto label_2a75f8;
        }
    }
    ctx->pc = 0x2A75D4u;
label_2a75d4:
    // 0x2a75d4: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x2a75d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2a75d8: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2a75d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a75dc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A75DCu;
    {
        const bool branch_taken_0x2a75dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a75dc) {
            ctx->pc = 0x2A75F8u;
            goto label_2a75f8;
        }
    }
    ctx->pc = 0x2A75E4u;
    // 0x2a75e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A75E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A75E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A75E4u;
        // 0x2a75e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A75E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A75ECu;
    // 0x2a75ec: 0x0  nop
    ctx->pc = 0x2a75ecu;
    // NOP
label_2a75f0:
    // 0x2a75f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A75F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A75F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A75F0u;
        // 0x2a75f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A75F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A75F8u;
label_2a75f8:
    // 0x2a75f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A75F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A75FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A75F8u;
        // 0x2a75fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A75F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7600u;
}
