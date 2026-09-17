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

// Function: sub_00242A88
// Address: 0x242a88 - 0x242b58
void sub_00242A88_0x242a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242A88_0x242a88");
#endif

    switch (ctx->pc) {
        case 0x242accu: goto label_242acc;
        case 0x242b00u: goto label_242b00;
        case 0x242b38u: goto label_242b38;
        default: break;
    }

    ctx->pc = 0x242a88u;

    // 0x242a88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x242a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x242a8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x242a90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x242a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x242a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x242a98: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x242a98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a9c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x242a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x242aa0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x242aa0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242aa4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x242aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x242aa8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x242aa8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242aac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x242aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x242ab0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x242ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x242ab4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x242ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x242ab8: 0x2442d840  addiu       $v0, $v0, -0x27C0
    ctx->pc = 0x242ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957120));
    // 0x242abc: 0x26120060  addiu       $s2, $s0, 0x60
    ctx->pc = 0x242abcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x242ac0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x242ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x242ac4: 0xc0be9a6  jal         func_2FA698
    ctx->pc = 0x242AC4u;
    SET_GPR_U32(ctx, 31, 0x242ACCu);
    ctx->pc = 0x242AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242AC4u;
    // 0x242ac8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA698u, 0x242AC4u, 0x242ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242ACCu;
label_242acc:
    // 0x242acc: 0x251880a  movz        $s1, $s2, $s1
    ctx->pc = 0x242accu;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
    // 0x242ad0: 0xae130050  sw          $s3, 0x50($s0)
    ctx->pc = 0x242ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 19));
    // 0x242ad4: 0xae110070  sw          $s1, 0x70($s0)
    ctx->pc = 0x242ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 17));
    // 0x242ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242adc: 0xae140074  sw          $s4, 0x74($s0)
    ctx->pc = 0x242adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 20));
    // 0x242ae0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x242ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242ae4: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x242ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x242ae8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x242ae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242aec: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x242aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x242af0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x242af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x242af4: 0xc78c8810  lwc1        $f12, -0x77F0($gp)
    ctx->pc = 0x242af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x242af8: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x242AF8u;
    SET_GPR_U32(ctx, 31, 0x242B00u);
    ctx->pc = 0x242AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242AF8u;
    // 0x242afc: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x242AF8u, 0x242B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242B00u;
label_242b00:
    // 0x242b00: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x242b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x242b04: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x242b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x242b08: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x242b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x242b0c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x242b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x242b10: 0x24420650  addiu       $v0, $v0, 0x650
    ctx->pc = 0x242b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1616));
    // 0x242b14: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x242b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x242b18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x242B18u;
    {
        const bool branch_taken_0x242b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B18u;
        // 0x242b1c: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242b18) {
            ctx->pc = 0x242B38u;
            goto label_242b38;
        }
    }
    ctx->pc = 0x242B20u;
    // 0x242b20: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x242b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x242b24: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x242b24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x242b28: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x242b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x242b2c: 0x2484fc40  addiu       $a0, $a0, -0x3C0
    ctx->pc = 0x242b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966336));
    // 0x242b30: 0xc048b90  jal         func_122E40
    ctx->pc = 0x242B30u;
    SET_GPR_U32(ctx, 31, 0x242B38u);
    ctx->pc = 0x242B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242B30u;
    // 0x242b34: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x242B30u, 0x242B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242B38u;
label_242b38:
    // 0x242b38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242b38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242b3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x242b3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x242b40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x242b40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242b44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x242b44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x242b48: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x242b48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242b4c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x242b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x242b50: 0x3e00008  jr          $ra
    ctx->pc = 0x242B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B50u;
        // 0x242b54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242B58u;
}
