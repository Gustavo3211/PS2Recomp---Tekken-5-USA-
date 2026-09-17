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

// Function: sub_003706F0
// Address: 0x3706f0 - 0x3707e0
void sub_003706F0_0x3706f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003706F0_0x3706f0");
#endif

    switch (ctx->pc) {
        case 0x370714u: goto label_370714;
        case 0x37072cu: goto label_37072c;
        case 0x370788u: goto label_370788;
        default: break;
    }

    ctx->pc = 0x3706f0u;

    // 0x3706f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3706f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3706f4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x3706f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x3706f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3706f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3706fc: 0x24507460  addiu       $s0, $v0, 0x7460
    ctx->pc = 0x3706fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29792));
    // 0x370700: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x370700u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7460u));
    // 0x370704: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x370704u;
    {
        const bool branch_taken_0x370704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x370708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370704u;
        // 0x370708: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370704) {
            ctx->pc = 0x37072Cu;
            goto label_37072c;
        }
    }
    ctx->pc = 0x37070Cu;
    // 0x37070c: 0xc0dc6c2  jal         func_371B08
    ctx->pc = 0x37070Cu;
    SET_GPR_U32(ctx, 31, 0x370714u);
    ctx->pc = 0x371B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371B08u, 0x37070Cu, 0x370714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370714u;
label_370714:
    // 0x370714: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x370714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x370718: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x370718u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x37071c: 0x24a50ac8  addiu       $a1, $a1, 0xAC8
    ctx->pc = 0x37071cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2760));
    // 0x370720: 0x24c67540  addiu       $a2, $a2, 0x7540
    ctx->pc = 0x370720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30016));
    // 0x370724: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x370724u;
    SET_GPR_U32(ctx, 31, 0x37072Cu);
    ctx->pc = 0x370728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370724u;
    // 0x370728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x370724u, 0x37072Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37072Cu;
label_37072c:
    // 0x37072c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37072cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370734: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x370734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x370738: 0x3e00008  jr          $ra
    ctx->pc = 0x370738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370738u;
        // 0x37073c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370740u;
    // 0x370740: 0x8f82c200  lw          $v0, -0x3E00($gp)
    ctx->pc = 0x370740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951424)));
    // 0x370744: 0x3e00008  jr          $ra
    ctx->pc = 0x370744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370744u;
        // 0x370748: 0xac820104  sw          $v0, 0x104($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37074Cu;
    // 0x37074c: 0x0  nop
    ctx->pc = 0x37074cu;
    // NOP
    // 0x370750: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x370750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x370754: 0x3e00008  jr          $ra
    ctx->pc = 0x370754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370754u;
        // 0x370758: 0xaf82c200  sw          $v0, -0x3E00($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294951424), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37075Cu;
    // 0x37075c: 0x0  nop
    ctx->pc = 0x37075cu;
    // NOP
    // 0x370760: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x370760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370764: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x370764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x370768: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x370768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37076c: 0x24e30050  addiu       $v1, $a3, 0x50
    ctx->pc = 0x37076cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x370770: 0x244202d8  addiu       $v0, $v0, 0x2D8
    ctx->pc = 0x370770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
    // 0x370774: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x370774u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x370778: 0x24e20058  addiu       $v0, $a3, 0x58
    ctx->pc = 0x370778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 88));
    // 0x37077c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x37077cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x370780: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x370780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x370784: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x370784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_370788:
    // 0x370788: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x370788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x37078c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x37078cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x370790: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x370790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x370794: 0x0  nop
    ctx->pc = 0x370794u;
    // NOP
    // 0x370798: 0x0  nop
    ctx->pc = 0x370798u;
    // NOP
    // 0x37079c: 0x1483fffa  bne         $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x37079Cu;
    {
        const bool branch_taken_0x37079c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3707A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37079Cu;
        // 0x3707a0: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37079c) {
            ctx->pc = 0x370788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370788;
        }
    }
    ctx->pc = 0x3707A4u;
    // 0x3707a4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3707a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3707a8: 0x24e20110  addiu       $v0, $a3, 0x110
    ctx->pc = 0x3707a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 272));
    // 0x3707ac: 0x24e60140  addiu       $a2, $a3, 0x140
    ctx->pc = 0x3707acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 320));
    // 0x3707b0: 0x24e300b8  addiu       $v1, $a3, 0xB8
    ctx->pc = 0x3707b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 184));
    // 0x3707b4: 0x2484f660  addiu       $a0, $a0, -0x9A0
    ctx->pc = 0x3707b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964832));
    // 0x3707b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3707b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3707bc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3707bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3707c0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3707c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3707c4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3707c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x3707c8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3707c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3707cc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3707ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3707d0: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x3707d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x3707d4: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x3707d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x3707d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3707D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3707DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3707D8u;
        // 0x3707dc: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3707D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3707E0u;
}
