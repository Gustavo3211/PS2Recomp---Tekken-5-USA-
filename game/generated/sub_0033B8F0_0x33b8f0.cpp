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

// Function: sub_0033B8F0
// Address: 0x33b8f0 - 0x33b9d0
void sub_0033B8F0_0x33b8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B8F0_0x33b8f0");
#endif

    switch (ctx->pc) {
        case 0x33b928u: goto label_33b928;
        case 0x33b954u: goto label_33b954;
        default: break;
    }

    ctx->pc = 0x33b8f0u;

    // 0x33b8f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33b8f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33b8f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33b8f8: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x33b8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x33b8fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33b8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33b900: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x33b900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b904: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x33b904u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x33b908: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x33b908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x33b90c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x33b90cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b910: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x33b910u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x33b914: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x33b914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b918: 0x10c20019  beq         $a2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x33B918u;
    {
        const bool branch_taken_0x33b918 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x33B91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B918u;
        // 0x33b91c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b918) {
            ctx->pc = 0x33B980u;
            goto label_33b980;
        }
    }
    ctx->pc = 0x33B920u;
    // 0x33b920: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x33b920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x33b924: 0x0  nop
    ctx->pc = 0x33b924u;
    // NOP
label_33b928:
    // 0x33b928: 0x5445000d  bnel        $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x33B928u;
    {
        const bool branch_taken_0x33b928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x33b928) {
            ctx->pc = 0x33B92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B928u;
            // 0x33b92c: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B960u;
            goto label_33b960;
        }
    }
    ctx->pc = 0x33B930u;
    // 0x33b930: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x33b930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33b934: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x33b934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x33b938: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x33b938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x33b93c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x33b93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x33b940: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33b940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33b944: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x33b944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x33b948: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x33b948u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x33b94c: 0xc0ceccc  jal         func_33B330
    ctx->pc = 0x33B94Cu;
    SET_GPR_U32(ctx, 31, 0x33B954u);
    ctx->pc = 0x33B950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B94Cu;
    // 0x33b950: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B330u, 0x33B94Cu, 0x33B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B954u;
label_33b954:
    // 0x33b954: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x33B954u;
    {
        const bool branch_taken_0x33b954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B954u;
        // 0x33b958: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b954) {
            ctx->pc = 0x33B984u;
            goto label_33b984;
        }
    }
    ctx->pc = 0x33B95Cu;
    // 0x33b95c: 0x0  nop
    ctx->pc = 0x33b95cu;
    // NOP
label_33b960:
    // 0x33b960: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x33b960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b964: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33b964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33b968: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x33b968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x33b96c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x33b96cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x33b970: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x33b970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x33b974: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x33b974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b978: 0x54c2ffeb  bnel        $a2, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x33B978u;
    {
        const bool branch_taken_0x33b978 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x33b978) {
            ctx->pc = 0x33B97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B978u;
            // 0x33b97c: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b928;
        }
    }
    ctx->pc = 0x33B980u;
label_33b980:
    // 0x33b980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33b980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33b984:
    // 0x33b984: 0x3e00008  jr          $ra
    ctx->pc = 0x33B984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B984u;
        // 0x33b988: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B98Cu;
    // 0x33b98c: 0x0  nop
    ctx->pc = 0x33b98cu;
    // NOP
    // 0x33b990: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x33b990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x33b994: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33b994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33b998: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x33b998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33b99c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x33b99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x33b9a0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x33b9a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b9a4: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x33b9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x33b9a8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x33b9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x33b9ac: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x33b9acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x33b9b0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x33b9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b9b4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x33b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x33b9b8: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x33B9B8u;
    {
        const bool branch_taken_0x33b9b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B9B8u;
        // 0x33b9bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b9b8) {
            ctx->pc = 0x33B9C4u;
            goto label_33b9c4;
        }
    }
    ctx->pc = 0x33B9C0u;
    // 0x33b9c0: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x33b9c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_33b9c4:
    // 0x33b9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x33B9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B9C4u;
        // 0x33b9c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B9CCu;
    // 0x33b9cc: 0x0  nop
    ctx->pc = 0x33b9ccu;
    // NOP
    ctx->pc = 0x33b9d0u;
}
