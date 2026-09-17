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

// Function: sub_003408F0
// Address: 0x3408f0 - 0x3409c8
void sub_003408F0_0x3408f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003408F0_0x3408f0");
#endif

    switch (ctx->pc) {
        case 0x340928u: goto label_340928;
        default: break;
    }

    ctx->pc = 0x3408f0u;

    // 0x3408f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3408f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3408f4: 0x24030502  addiu       $v1, $zero, 0x502
    ctx->pc = 0x3408f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
    // 0x3408f8: 0x94450008  lhu         $a1, 0x8($v0)
    ctx->pc = 0x3408f8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3408fc: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3408FCu;
    {
        const bool branch_taken_0x3408fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3408fc) {
            ctx->pc = 0x340928u;
            goto label_340928;
        }
    }
    ctx->pc = 0x340904u;
    // 0x340904: 0x28a20503  slti        $v0, $a1, 0x503
    ctx->pc = 0x340904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1283) ? 1 : 0);
    // 0x340908: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x340908u;
    {
        const bool branch_taken_0x340908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340908u;
        // 0x34090c: 0x24020602  addiu       $v0, $zero, 0x602 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1538));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340908) {
            ctx->pc = 0x340950u;
            goto label_340950;
        }
    }
    ctx->pc = 0x340910u;
    // 0x340910: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x340910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x340914: 0x10a20020  beq         $a1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x340914u;
    {
        const bool branch_taken_0x340914 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x340918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340914u;
        // 0x340918: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340914) {
            ctx->pc = 0x340998u;
            goto label_340998;
        }
    }
    ctx->pc = 0x34091Cu;
    // 0x34091c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x34091cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x340920: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x340920u;
    {
        const bool branch_taken_0x340920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340920) {
            ctx->pc = 0x340924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340920u;
            // 0x340924: 0x24020103  addiu       $v0, $zero, 0x103 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340930u;
            goto label_340930;
        }
    }
    ctx->pc = 0x340928u;
label_340928:
    // 0x340928: 0x3e00008  jr          $ra
    ctx->pc = 0x340928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340928u;
        // 0x34092c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340930u;
label_340930:
    // 0x340930: 0x50a2001b  beql        $a1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x340930u;
    {
        const bool branch_taken_0x340930 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x340930) {
            ctx->pc = 0x340934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340930u;
            // 0x340934: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3409A0u;
            goto label_3409a0;
        }
    }
    ctx->pc = 0x340938u;
    // 0x340938: 0x0  nop
    ctx->pc = 0x340938u;
    // NOP
    // 0x34093c: 0x0  nop
    ctx->pc = 0x34093cu;
    // NOP
    // 0x340940: 0x0  nop
    ctx->pc = 0x340940u;
    // NOP
    // 0x340944: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x340944u;
    {
        const bool branch_taken_0x340944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340944) {
            ctx->pc = 0x340928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340928;
        }
    }
    ctx->pc = 0x34094Cu;
    // 0x34094c: 0x0  nop
    ctx->pc = 0x34094cu;
    // NOP
label_340950:
    // 0x340950: 0x10a2fff5  beq         $a1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x340950u;
    {
        const bool branch_taken_0x340950 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x340950) {
            ctx->pc = 0x340928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340928;
        }
    }
    ctx->pc = 0x340958u;
    // 0x340958: 0x28a20603  slti        $v0, $a1, 0x603
    ctx->pc = 0x340958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1539) ? 1 : 0);
    // 0x34095c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34095Cu;
    {
        const bool branch_taken_0x34095c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x340960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34095Cu;
        // 0x340960: 0x24025103  addiu       $v0, $zero, 0x5103 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20739));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34095c) {
            ctx->pc = 0x340978u;
            goto label_340978;
        }
    }
    ctx->pc = 0x340964u;
    // 0x340964: 0x24020503  addiu       $v0, $zero, 0x503
    ctx->pc = 0x340964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x340968: 0x50a2000f  beql        $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x340968u;
    {
        const bool branch_taken_0x340968 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x340968) {
            ctx->pc = 0x34096Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340968u;
            // 0x34096c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3409A8u;
            goto label_3409a8;
        }
    }
    ctx->pc = 0x340970u;
    // 0x340970: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x340970u;
    {
        const bool branch_taken_0x340970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340970) {
            ctx->pc = 0x340928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340928;
        }
    }
    ctx->pc = 0x340978u;
label_340978:
    // 0x340978: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x340978u;
    {
        const bool branch_taken_0x340978 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x34097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340978u;
        // 0x34097c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340978) {
            ctx->pc = 0x3409B0u;
            goto label_3409b0;
        }
    }
    ctx->pc = 0x340980u;
    // 0x340980: 0x24025203  addiu       $v0, $zero, 0x5203
    ctx->pc = 0x340980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20995));
    // 0x340984: 0x50a2000c  beql        $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x340984u;
    {
        const bool branch_taken_0x340984 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x340984) {
            ctx->pc = 0x340988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340984u;
            // 0x340988: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3409B8u;
            goto label_3409b8;
        }
    }
    ctx->pc = 0x34098Cu;
    // 0x34098c: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x34098Cu;
    {
        const bool branch_taken_0x34098c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34098c) {
            ctx->pc = 0x340928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340928;
        }
    }
    ctx->pc = 0x340994u;
    // 0x340994: 0x0  nop
    ctx->pc = 0x340994u;
    // NOP
label_340998:
    // 0x340998: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x340998u;
    {
        const bool branch_taken_0x340998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340998u;
        // 0x34099c: 0x24420a80  addiu       $v0, $v0, 0xA80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340998) {
            ctx->pc = 0x3409BCu;
            goto label_3409bc;
        }
    }
    ctx->pc = 0x3409A0u;
label_3409a0:
    // 0x3409a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3409A0u;
    {
        const bool branch_taken_0x3409a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3409A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3409A0u;
        // 0x3409a4: 0x24420ab8  addiu       $v0, $v0, 0xAB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3409a0) {
            ctx->pc = 0x3409BCu;
            goto label_3409bc;
        }
    }
    ctx->pc = 0x3409A8u;
label_3409a8:
    // 0x3409a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3409A8u;
    {
        const bool branch_taken_0x3409a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3409ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3409A8u;
        // 0x3409ac: 0x24420af0  addiu       $v0, $v0, 0xAF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3409a8) {
            ctx->pc = 0x3409BCu;
            goto label_3409bc;
        }
    }
    ctx->pc = 0x3409B0u;
label_3409b0:
    // 0x3409b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3409B0u;
    {
        const bool branch_taken_0x3409b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3409B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3409B0u;
        // 0x3409b4: 0x24420b28  addiu       $v0, $v0, 0xB28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3409b0) {
            ctx->pc = 0x3409BCu;
            goto label_3409bc;
        }
    }
    ctx->pc = 0x3409B8u;
label_3409b8:
    // 0x3409b8: 0x24420b60  addiu       $v0, $v0, 0xB60
    ctx->pc = 0x3409b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2912));
label_3409bc:
    // 0x3409bc: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3409bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x3409c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3409C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3409C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3409C0u;
        // 0x3409c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3409C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3409C8u;
}
