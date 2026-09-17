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

// Function: sub_002D1780
// Address: 0x2d1780 - 0x2d1828
void sub_002D1780_0x2d1780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1780_0x2d1780");
#endif

    switch (ctx->pc) {
        case 0x2d17a0u: goto label_2d17a0;
        case 0x2d17a8u: goto label_2d17a8;
        case 0x2d17bcu: goto label_2d17bc;
        case 0x2d17dcu: goto label_2d17dc;
        default: break;
    }

    ctx->pc = 0x2d1780u;

    // 0x2d1780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d1780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d1784: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d1784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d1788: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d1788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d178c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d178cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1790: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d1790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d1794: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d1794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1798: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d1798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d179c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2d179cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d17a0:
    // 0x2d17a0: 0xc0862ee  jal         func_218BB8
    ctx->pc = 0x2D17A0u;
    SET_GPR_U32(ctx, 31, 0x2D17A8u);
    ctx->pc = 0x2D17A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D17A0u;
    // 0x2d17a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BB8u, 0x2D17A0u, 0x2D17A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D17A8u;
label_2d17a8:
    // 0x2d17a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d17a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d17ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D17ACu;
    {
        const bool branch_taken_0x2d17ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D17B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D17ACu;
        // 0x2d17b0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d17ac) {
            ctx->pc = 0x2D17C4u;
            goto label_2d17c4;
        }
    }
    ctx->pc = 0x2D17B4u;
    // 0x2d17b4: 0xc0863ea  jal         func_218FA8
    ctx->pc = 0x2D17B4u;
    SET_GPR_U32(ctx, 31, 0x2D17BCu);
    ctx->pc = 0x218FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FA8u, 0x2D17B4u, 0x2D17BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D17BCu;
label_2d17bc:
    // 0x2d17bc: 0x521014  dsllv       $v0, $s2, $v0
    ctx->pc = 0x2d17bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2d17c0: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x2d17c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_2d17c4:
    // 0x2d17c4: 0x2a020050  slti        $v0, $s0, 0x50
    ctx->pc = 0x2d17c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x2d17c8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2D17C8u;
    {
        const bool branch_taken_0x2d17c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d17c8) {
            ctx->pc = 0x2D17A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d17a0;
        }
    }
    ctx->pc = 0x2D17D0u;
    // 0x2d17d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d17d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d17d4: 0xc0b2a3c  jal         func_2CA8F0
    ctx->pc = 0x2D17D4u;
    SET_GPR_U32(ctx, 31, 0x2D17DCu);
    ctx->pc = 0x2D17D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D17D4u;
    // 0x2d17d8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA8F0u, 0x2D17D4u, 0x2D17DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D17DCu;
label_2d17dc:
    // 0x2d17dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D17DCu;
    {
        const bool branch_taken_0x2d17dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D17E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D17DCu;
        // 0x2d17e0: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d17dc) {
            ctx->pc = 0x2D17E8u;
            goto label_2d17e8;
        }
    }
    ctx->pc = 0x2D17E4u;
    // 0x2d17e4: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x2d17e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_2d17e8:
    // 0x2d17e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d17e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d17ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d17ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d17f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d17f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d17f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d17f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d17f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d17f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d17fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D17FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D17FCu;
        // 0x2d1800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D17FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1804u;
    // 0x2d1804: 0x0  nop
    ctx->pc = 0x2d1804u;
    // NOP
    // 0x2d1808: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d1808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d180c: 0x8c43f668  lw          $v1, -0x998($v0)
    ctx->pc = 0x2d180cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EF668u));
    // 0x2d1810: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2d1810u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d1814: 0x821016  dsrlv       $v0, $v0, $a0
    ctx->pc = 0x2d1814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x2d1818: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d1818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d181c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2d181cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d1820: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1820u;
        // 0x2d1824: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1828u;
}
