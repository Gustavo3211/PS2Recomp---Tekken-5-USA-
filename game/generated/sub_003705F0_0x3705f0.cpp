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

// Function: sub_003705F0
// Address: 0x3705f0 - 0x3706b8
void sub_003705F0_0x3705f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003705F0_0x3705f0");
#endif

    switch (ctx->pc) {
        case 0x370614u: goto label_370614;
        case 0x37062cu: goto label_37062c;
        case 0x370668u: goto label_370668;
        default: break;
    }

    ctx->pc = 0x3705f0u;

    // 0x3705f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3705f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3705f4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x3705f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x3705f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3705f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3705fc: 0x24507340  addiu       $s0, $v0, 0x7340
    ctx->pc = 0x3705fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29504));
    // 0x370600: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x370600u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7340u));
    // 0x370604: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x370604u;
    {
        const bool branch_taken_0x370604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x370608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370604u;
        // 0x370608: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370604) {
            ctx->pc = 0x37062Cu;
            goto label_37062c;
        }
    }
    ctx->pc = 0x37060Cu;
    // 0x37060c: 0xc0dc6c2  jal         func_371B08
    ctx->pc = 0x37060Cu;
    SET_GPR_U32(ctx, 31, 0x370614u);
    ctx->pc = 0x371B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371B08u, 0x37060Cu, 0x370614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370614u;
label_370614:
    // 0x370614: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x370614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x370618: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x370618u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x37061c: 0x24a50aa8  addiu       $a1, $a1, 0xAA8
    ctx->pc = 0x37061cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2728));
    // 0x370620: 0x24c67540  addiu       $a2, $a2, 0x7540
    ctx->pc = 0x370620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30016));
    // 0x370624: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x370624u;
    SET_GPR_U32(ctx, 31, 0x37062Cu);
    ctx->pc = 0x370628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370624u;
    // 0x370628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x370624u, 0x37062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37062Cu;
label_37062c:
    // 0x37062c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37062cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370634: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x370634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x370638: 0x3e00008  jr          $ra
    ctx->pc = 0x370638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370638u;
        // 0x37063c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370640u;
    // 0x370640: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x370640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370644: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x370644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x370648: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x370648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37064c: 0x24c30050  addiu       $v1, $a2, 0x50
    ctx->pc = 0x37064cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x370650: 0x244202d8  addiu       $v0, $v0, 0x2D8
    ctx->pc = 0x370650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
    // 0x370654: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x370654u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x370658: 0x24c20058  addiu       $v0, $a2, 0x58
    ctx->pc = 0x370658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 88));
    // 0x37065c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x37065cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x370660: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x370660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x370664: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x370664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_370668:
    // 0x370668: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x370668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x37066c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x37066cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x370670: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x370670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x370674: 0x0  nop
    ctx->pc = 0x370674u;
    // NOP
    // 0x370678: 0x0  nop
    ctx->pc = 0x370678u;
    // NOP
    // 0x37067c: 0x1483fffa  bne         $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x37067Cu;
    {
        const bool branch_taken_0x37067c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x370680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37067Cu;
        // 0x370680: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37067c) {
            ctx->pc = 0x370668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370668;
        }
    }
    ctx->pc = 0x370684u;
    // 0x370684: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x370684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x370688: 0x24c20110  addiu       $v0, $a2, 0x110
    ctx->pc = 0x370688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
    // 0x37068c: 0x24c300b8  addiu       $v1, $a2, 0xB8
    ctx->pc = 0x37068cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 184));
    // 0x370690: 0x2484f6e8  addiu       $a0, $a0, -0x918
    ctx->pc = 0x370690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964968));
    // 0x370694: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x370694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x370698: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x370698u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x37069c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x37069cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3706a0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3706a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x3706a4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3706a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3706a8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3706a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3706ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3706ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3706B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3706ACu;
        // 0x3706b0: 0xacc40008  sw          $a0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3706ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3706B4u;
    // 0x3706b4: 0x0  nop
    ctx->pc = 0x3706b4u;
    // NOP
    ctx->pc = 0x3706b8u;
}
