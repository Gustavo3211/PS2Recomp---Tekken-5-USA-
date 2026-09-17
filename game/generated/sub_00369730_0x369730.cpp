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

// Function: sub_00369730
// Address: 0x369730 - 0x3697f0
void sub_00369730_0x369730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369730_0x369730");
#endif

    switch (ctx->pc) {
        case 0x369754u: goto label_369754;
        case 0x36976cu: goto label_36976c;
        case 0x3697a4u: goto label_3697a4;
        default: break;
    }

    ctx->pc = 0x369730u;

    // 0x369730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x369730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x369734: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x369734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x369738: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x369738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36973c: 0x24506bf8  addiu       $s0, $v0, 0x6BF8
    ctx->pc = 0x36973cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27640));
    // 0x369740: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x369740u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6BF8u));
    // 0x369744: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x369744u;
    {
        const bool branch_taken_0x369744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x369748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369744u;
        // 0x369748: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369744) {
            ctx->pc = 0x36976Cu;
            goto label_36976c;
        }
    }
    ctx->pc = 0x36974Cu;
    // 0x36974c: 0xc0db7d6  jal         func_36DF58
    ctx->pc = 0x36974Cu;
    SET_GPR_U32(ctx, 31, 0x369754u);
    ctx->pc = 0x36DF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DF58u, 0x36974Cu, 0x369754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369754u;
label_369754:
    // 0x369754: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x369754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x369758: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x369758u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36975c: 0x24a52f88  addiu       $a1, $a1, 0x2F88
    ctx->pc = 0x36975cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12168));
    // 0x369760: 0x24c67180  addiu       $a2, $a2, 0x7180
    ctx->pc = 0x369760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29056));
    // 0x369764: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x369764u;
    SET_GPR_U32(ctx, 31, 0x36976Cu);
    ctx->pc = 0x369768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369764u;
    // 0x369768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x369764u, 0x36976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36976Cu;
label_36976c:
    // 0x36976c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36976cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x369770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369774: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x369774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x369778: 0x3e00008  jr          $ra
    ctx->pc = 0x369778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369778u;
        // 0x36977c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369780u;
    // 0x369780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x369780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x369784: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x369784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x369788: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x369788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36978c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36978cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x369790: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x369790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x369794: 0x2442ea50  addiu       $v0, $v0, -0x15B0
    ctx->pc = 0x369794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
    // 0x369798: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x369798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36979c: 0xc0b7faa  jal         func_2DFEA8
    ctx->pc = 0x36979Cu;
    SET_GPR_U32(ctx, 31, 0x3697A4u);
    ctx->pc = 0x3697A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36979Cu;
    // 0x3697a0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEA8u, 0x36979Cu, 0x3697A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3697A4u;
label_3697a4:
    // 0x3697a4: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x3697a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3697a8: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x3697a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x3697ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3697acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3697b0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3697b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3697b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3697b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3697b8: 0x2484d568  addiu       $a0, $a0, -0x2A98
    ctx->pc = 0x3697b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956392));
    // 0x3697bc: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x3697bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x3697c0: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x3697c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x3697c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3697c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3697c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3697c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3697cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3697CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3697D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3697CCu;
        // 0x3697d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3697CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3697D4u;
    // 0x3697d4: 0x0  nop
    ctx->pc = 0x3697d4u;
    // NOP
    // 0x3697d8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3697d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3697dc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x3697dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x3697e0: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x3697e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x3697e4: 0x2484fb18  addiu       $a0, $a0, -0x4E8
    ctx->pc = 0x3697e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966040));
    // 0x3697e8: 0xc048b90  jal         func_122E40
    ctx->pc = 0x3697E8u;
    SET_GPR_U32(ctx, 31, 0x3697F0u);
    ctx->pc = 0x3697ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3697E8u;
    // 0x3697ec: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x3697E8u, 0x3697F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3697F0u;
}
