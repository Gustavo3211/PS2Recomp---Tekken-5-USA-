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

// Function: sub_0031A098
// Address: 0x31a098 - 0x31a158
void sub_0031A098_0x31a098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A098_0x31a098");
#endif

    switch (ctx->pc) {
        case 0x31a0bcu: goto label_31a0bc;
        case 0x31a0d4u: goto label_31a0d4;
        case 0x31a0e8u: goto label_31a0e8;
        default: break;
    }

    ctx->pc = 0x31a098u;

    // 0x31a098: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31a098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a09c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x31a09cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x31a0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31a0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31a0a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31a0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31a0a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31a0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31a0ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31a0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x31a0b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x31a0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x31a0b4: 0xc0ccf28  jal         func_333CA0
    ctx->pc = 0x31A0B4u;
    SET_GPR_U32(ctx, 31, 0x31A0BCu);
    ctx->pc = 0x31A0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A0B4u;
    // 0x31a0b8: 0x24840400  addiu       $a0, $a0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333CA0u, 0x31A0B4u, 0x31A0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A0BCu;
label_31a0bc:
    // 0x31a0bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31a0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a0c0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31a0c4: 0x24520d00  addiu       $s2, $v0, 0xD00
    ctx->pc = 0x31a0c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
    // 0x31a0c8: 0x26510040  addiu       $s1, $s2, 0x40
    ctx->pc = 0x31a0c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x31a0cc: 0xc0c88c4  jal         func_322310
    ctx->pc = 0x31A0CCu;
    SET_GPR_U32(ctx, 31, 0x31A0D4u);
    ctx->pc = 0x31A0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A0CCu;
    // 0x31a0d0: 0x26440068  addiu       $a0, $s2, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322310u, 0x31A0CCu, 0x31A0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A0D4u;
label_31a0d4:
    // 0x31a0d4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x31a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x31a0d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31a0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a0dc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x31a0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x31a0e0: 0xc0c8b4c  jal         func_322D30
    ctx->pc = 0x31A0E0u;
    SET_GPR_U32(ctx, 31, 0x31A0E8u);
    ctx->pc = 0x31A0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A0E0u;
    // 0x31a0e4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322D30u, 0x31A0E0u, 0x31A0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A0E8u;
label_31a0e8:
    // 0x31a0e8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x31a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x31a0ec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x31a0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31a0f0: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x31a0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31a0f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31a0f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a0f8: 0x34660035  ori         $a2, $v1, 0x35
    ctx->pc = 0x31a0f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53);
    // 0x31a0fc: 0x34630031  ori         $v1, $v1, 0x31
    ctx->pc = 0x31a0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49);
    // 0x31a100: 0x14a40002  bne         $a1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31A100u;
    {
        const bool branch_taken_0x31a100 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x31A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A100u;
        // 0x31a104: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a100) {
            ctx->pc = 0x31A10Cu;
            goto label_31a10c;
        }
    }
    ctx->pc = 0x31A108u;
    // 0x31a108: 0xae260010  sw          $a2, 0x10($s1)
    ctx->pc = 0x31a108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
label_31a10c:
    // 0x31a10c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31a110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a114: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x31a114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x31a118: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31a118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31a11c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31a11cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a120: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x31a120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31a124: 0x3e00008  jr          $ra
    ctx->pc = 0x31A124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A124u;
        // 0x31a128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A12Cu;
    // 0x31a12c: 0x0  nop
    ctx->pc = 0x31a12cu;
    // NOP
    // 0x31a130: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31a130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31a134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a138: 0x24a50400  addiu       $a1, $a1, 0x400
    ctx->pc = 0x31a138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1024));
    // 0x31a13c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x31a13cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x400404u));
    // 0x31a140: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x31a140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x31a144: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x31a144u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x400414u));
    // 0x31a148: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x31a148u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x400418u));
    // 0x31a14c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x31a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x31a150: 0x3e00008  jr          $ra
    ctx->pc = 0x31A150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A150u;
        // 0x31a154: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A158u;
}
