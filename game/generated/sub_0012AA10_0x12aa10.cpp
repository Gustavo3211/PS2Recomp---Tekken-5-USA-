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

// Function: sub_0012AA10
// Address: 0x12aa10 - 0x12aac8
void sub_0012AA10_0x12aa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012AA10_0x12aa10");
#endif

    switch (ctx->pc) {
        case 0x12aa74u: goto label_12aa74;
        case 0x12aa88u: goto label_12aa88;
        default: break;
    }

    ctx->pc = 0x12aa10u;

    // 0x12aa10: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x12aa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
    // 0x12aa14: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x12aa14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x12aa18: 0xffb00460  sd          $s0, 0x460($sp)
    ctx->pc = 0x12aa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 16));
    // 0x12aa1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12aa1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aa20: 0xffb10468  sd          $s1, 0x468($sp)
    ctx->pc = 0x12aa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1128), GPR_U64(ctx, 17));
    // 0x12aa24: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x12aa24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12aa28: 0xffbf0470  sd          $ra, 0x470($sp)
    ctx->pc = 0x12aa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 31));
    // 0x12aa2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12aa2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aa30: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x12aa30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    // 0x12aa34: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x12aa34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12aa38: 0x9609000e  lhu         $t1, 0xE($s0)
    ctx->pc = 0x12aa38u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x12aa3c: 0x8e080054  lw          $t0, 0x54($s0)
    ctx->pc = 0x12aa3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x12aa40: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x12aa40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x12aa44: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x12aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x12aa48: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x12aa48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x12aa4c: 0xafa80054  sw          $t0, 0x54($sp)
    ctx->pc = 0x12aa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    // 0x12aa50: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x12aa50u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x12aa54: 0xa7a9000e  sh          $t1, 0xE($sp)
    ctx->pc = 0x12aa54u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 9));
    // 0x12aa58: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x12aa58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x12aa5c: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x12aa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x12aa60: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x12aa60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x12aa64: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x12aa64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x12aa68: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x12aa68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x12aa6c: 0xc04aab2  jal         func_12AAC8
    ctx->pc = 0x12AA6Cu;
    SET_GPR_U32(ctx, 31, 0x12AA74u);
    ctx->pc = 0x12AA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AA6Cu;
    // 0x12aa70: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AAC8u, 0x12AA6Cu, 0x12AA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AA74u;
label_12aa74:
    // 0x12aa74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12aa74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aa78: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12AA78u;
    {
        const bool branch_taken_0x12aa78 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x12AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA78u;
        // 0x12aa7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa78) {
            ctx->pc = 0x12AA90u;
            goto label_12aa90;
        }
    }
    ctx->pc = 0x12AA80u;
    // 0x12aa80: 0xc04b6aa  jal         func_12DAA8
    ctx->pc = 0x12AA80u;
    SET_GPR_U32(ctx, 31, 0x12AA88u);
    ctx->pc = 0x12DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DAA8u, 0x12AA80u, 0x12AA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AA88u;
label_12aa88:
    // 0x12aa88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12aa8c: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x12aa8cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_12aa90:
    // 0x12aa90: 0x97a2000c  lhu         $v0, 0xC($sp)
    ctx->pc = 0x12aa90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12aa94: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x12aa94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x12aa98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12AA98u;
    {
        const bool branch_taken_0x12aa98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA98u;
        // 0x12aa9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa98) {
            ctx->pc = 0x12AAB0u;
            goto label_12aab0;
        }
    }
    ctx->pc = 0x12AAA0u;
    // 0x12aaa0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x12aaa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12aaa4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x12aaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x12aaa8: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x12aaa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x12aaac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12aaacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12aab0:
    // 0x12aab0: 0xdfb00460  ld          $s0, 0x460($sp)
    ctx->pc = 0x12aab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x12aab4: 0xdfb10468  ld          $s1, 0x468($sp)
    ctx->pc = 0x12aab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1128)));
    // 0x12aab8: 0xdfbf0470  ld          $ra, 0x470($sp)
    ctx->pc = 0x12aab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x12aabc: 0x3e00008  jr          $ra
    ctx->pc = 0x12AABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AABCu;
        // 0x12aac0: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12AAC4u;
    // 0x12aac4: 0x0  nop
    ctx->pc = 0x12aac4u;
    // NOP
    ctx->pc = 0x12aac8u;
}
