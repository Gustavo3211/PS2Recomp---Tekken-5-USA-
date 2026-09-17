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

// Function: sub_002E2FE0
// Address: 0x2e2fe0 - 0x2e3100
void sub_002E2FE0_0x2e2fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2FE0_0x2e2fe0");
#endif

    switch (ctx->pc) {
        case 0x2e3034u: goto label_2e3034;
        case 0x2e3078u: goto label_2e3078;
        case 0x2e30a4u: goto label_2e30a4;
        case 0x2e30e0u: goto label_2e30e0;
        default: break;
    }

    ctx->pc = 0x2e2fe0u;

    // 0x2e2fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e2fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e2fe4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e2fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e2fe8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e2fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e2fec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e2fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2ff0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e2ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e2ff4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e2ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2ff8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e2ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e2ffc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e2ffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3000: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e3000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e3004: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2e3004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3008: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e3008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e300c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2e300cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x2e3010: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2e3010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2e3014: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2e3014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x2e3018: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2e3018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2e301c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x2e301cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x2e3020: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e3020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e3024: 0x2442ece8  addiu       $v0, $v0, -0x1318
    ctx->pc = 0x2e3024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962408));
    // 0x2e3028: 0x26040088  addiu       $a0, $s0, 0x88
    ctx->pc = 0x2e3028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x2e302c: 0xc0c1218  jal         func_304860
    ctx->pc = 0x2E302Cu;
    SET_GPR_U32(ctx, 31, 0x2E3034u);
    ctx->pc = 0x2E3030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E302Cu;
    // 0x2e3030: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304860u, 0x2E302Cu, 0x2E3034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3034u;
label_2e3034:
    // 0x2e3034: 0x2602015c  addiu       $v0, $s0, 0x15C
    ctx->pc = 0x2e3034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 348));
    // 0x2e3038: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e3038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e303c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2e303cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2e3040: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2e3040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2e3044: 0xae120054  sw          $s2, 0x54($s0)
    ctx->pc = 0x2e3044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 18));
    // 0x2e3048: 0xae130070  sw          $s3, 0x70($s0)
    ctx->pc = 0x2e3048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 19));
    // 0x2e304c: 0x12230008  beq         $s1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E304Cu;
    {
        const bool branch_taken_0x2e304c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E3050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E304Cu;
        // 0x2e3050: 0xae110050  sw          $s1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e304c) {
            ctx->pc = 0x2E3070u;
            goto label_2e3070;
        }
    }
    ctx->pc = 0x2E3054u;
    // 0x2e3054: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2e3054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2e3058: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2e3058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2e305c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e305cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e3060: 0x8c6388d0  lw          $v1, -0x7730($v1)
    ctx->pc = 0x2e3060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936784)));
    // 0x2e3064: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3064u;
    {
        const bool branch_taken_0x2e3064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3064u;
        // 0x2e3068: 0xae030058  sw          $v1, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3064) {
            ctx->pc = 0x2E307Cu;
            goto label_2e307c;
        }
    }
    ctx->pc = 0x2E306Cu;
    // 0x2e306c: 0x0  nop
    ctx->pc = 0x2e306cu;
    // NOP
label_2e3070:
    // 0x2e3070: 0xc08f104  jal         func_23C410
    ctx->pc = 0x2E3070u;
    SET_GPR_U32(ctx, 31, 0x2E3078u);
    ctx->pc = 0x23C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C410u, 0x2E3070u, 0x2E3078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3078u;
label_2e3078:
    // 0x2e3078: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x2e3078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_2e307c:
    // 0x2e307c: 0x3c01c3fa  lui         $at, 0xC3FA
    ctx->pc = 0x2e307cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50170 << 16));
    // 0x2e3080: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e3080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e3084: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3084u;
    {
        const bool branch_taken_0x2e3084 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3084u;
        // 0x2e3088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3084) {
            ctx->pc = 0x2E3094u;
            goto label_2e3094;
        }
    }
    ctx->pc = 0x2E308Cu;
    // 0x2e308c: 0x3c01c3ff  lui         $at, 0xC3FF
    ctx->pc = 0x2e308cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50175 << 16));
    // 0x2e3090: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e3090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e3094:
    // 0x2e3094: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e3094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3098: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e3098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e309c: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x2E309Cu;
    SET_GPR_U32(ctx, 31, 0x2E30A4u);
    ctx->pc = 0x2E30A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E309Cu;
    // 0x2e30a0: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x2E309Cu, 0x2E30A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E30A4u;
label_2e30a4:
    // 0x2e30a4: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2e30a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2e30a8: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x2e30a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e30ac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e30acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e30b0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2e30b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2e30b4: 0x2442fbb0  addiu       $v0, $v0, -0x450
    ctx->pc = 0x2e30b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966192));
    // 0x2e30b8: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2e30b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2e30bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E30BCu;
    {
        const bool branch_taken_0x2e30bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E30C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E30BCu;
        // 0x2e30c0: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e30bc) {
            ctx->pc = 0x2E30E0u;
            goto label_2e30e0;
        }
    }
    ctx->pc = 0x2E30C4u;
    // 0x2e30c4: 0x0  nop
    ctx->pc = 0x2e30c4u;
    // NOP
    // 0x2e30c8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e30c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e30cc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e30ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e30d0: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2e30d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2e30d4: 0x24840428  addiu       $a0, $a0, 0x428
    ctx->pc = 0x2e30d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1064));
    // 0x2e30d8: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E30D8u;
    SET_GPR_U32(ctx, 31, 0x2E30E0u);
    ctx->pc = 0x2E30DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E30D8u;
    // 0x2e30dc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E30D8u, 0x2E30E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E30E0u;
label_2e30e0:
    // 0x2e30e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e30e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e30e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e30e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e30e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e30e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e30ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e30ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e30f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e30f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e30f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E30F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E30F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E30F4u;
        // 0x2e30f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E30F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E30FCu;
    // 0x2e30fc: 0x0  nop
    ctx->pc = 0x2e30fcu;
    // NOP
    ctx->pc = 0x2e3100u;
}
