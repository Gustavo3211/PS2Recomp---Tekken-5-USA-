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

// Function: sub_0033C098
// Address: 0x33c098 - 0x33c198
void sub_0033C098_0x33c098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C098_0x33c098");
#endif

    switch (ctx->pc) {
        case 0x33c104u: goto label_33c104;
        case 0x33c130u: goto label_33c130;
        case 0x33c140u: goto label_33c140;
        case 0x33c150u: goto label_33c150;
        case 0x33c168u: goto label_33c168;
        default: break;
    }

    ctx->pc = 0x33c098u;

    // 0x33c098: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33c098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33c09c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33c09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33c0a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33c0a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c0a4: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x33c0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x33c0a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33c0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33c0ac: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x33c0acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33c0b0: 0x2e4afff0  sltiu       $t2, $s2, -0x10
    ctx->pc = 0x33c0b0u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4294967280) ? 1 : 0);
    // 0x33c0b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33c0b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c0b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33c0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33c0bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33c0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33c0c0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x33c0c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c0c4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x33c0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x33c0c8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x33c0c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c0cc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x33c0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x33c0d0: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x33c0d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c0d4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x33c0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x33c0d8: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x33c0d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c0dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33c0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33c0e0: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x33c0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x33c0e4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x33c0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x33c0e8: 0x1140001b  beqz        $t2, . + 4 + (0x1B << 2)
    ctx->pc = 0x33C0E8u;
    {
        const bool branch_taken_0x33c0e8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C0E8u;
        // 0x33c0ec: 0x31940  sll         $v1, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c0e8) {
            ctx->pc = 0x33C158u;
            goto label_33c158;
        }
    }
    ctx->pc = 0x33C0F0u;
    // 0x33c0f0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x33c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x33c0f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33c0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c0f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33c0fc: 0xc0dd830  jal         func_3760C0
    ctx->pc = 0x33C0FCu;
    SET_GPR_U32(ctx, 31, 0x33C104u);
    ctx->pc = 0x33C100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C0FCu;
    // 0x33c100: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760C0u, 0x33C0FCu, 0x33C104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C104u;
label_33c104:
    // 0x33c104: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33c104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c108: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33c108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c10c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c110: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x33c110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c114: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x33c114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c118: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x33c118u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c11c: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x33c11cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c120: 0x16c20005  bne         $s6, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33C120u;
    {
        const bool branch_taken_0x33c120 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x33C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C120u;
        // 0x33c124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c120) {
            ctx->pc = 0x33C138u;
            goto label_33c138;
        }
    }
    ctx->pc = 0x33C128u;
    // 0x33c128: 0xc0c779a  jal         func_31DE68
    ctx->pc = 0x33C128u;
    SET_GPR_U32(ctx, 31, 0x33C130u);
    ctx->pc = 0x31DE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE68u, 0x33C128u, 0x33C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C130u;
label_33c130:
    // 0x33c130: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33C130u;
    {
        const bool branch_taken_0x33c130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C130u;
        // 0x33c134: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c130) {
            ctx->pc = 0x33C144u;
            goto label_33c144;
        }
    }
    ctx->pc = 0x33C138u;
label_33c138:
    // 0x33c138: 0xc0cf8b0  jal         func_33E2C0
    ctx->pc = 0x33C138u;
    SET_GPR_U32(ctx, 31, 0x33C140u);
    ctx->pc = 0x33E2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E2C0u, 0x33C138u, 0x33C140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C140u;
label_33c140:
    // 0x33c140: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x33c140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_33c144:
    // 0x33c144: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33c144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c148: 0xc0cf100  jal         func_33C400
    ctx->pc = 0x33C148u;
    SET_GPR_U32(ctx, 31, 0x33C150u);
    ctx->pc = 0x33C14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C148u;
    // 0x33c14c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C400u, 0x33C148u, 0x33C150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C150u;
label_33c150:
    // 0x33c150: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33C150u;
    {
        const bool branch_taken_0x33c150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C150u;
        // 0x33c154: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c150) {
            ctx->pc = 0x33C16Cu;
            goto label_33c16c;
        }
    }
    ctx->pc = 0x33C158u;
label_33c158:
    // 0x33c158: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x33c158u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x33c15c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x33c15cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33c160: 0xc0c779a  jal         func_31DE68
    ctx->pc = 0x33C160u;
    SET_GPR_U32(ctx, 31, 0x33C168u);
    ctx->pc = 0x33C164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C160u;
    // 0x33c164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE68u, 0x33C160u, 0x33C168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C168u;
label_33c168:
    // 0x33c168: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33c168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c16c:
    // 0x33c16c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c16cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c170: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33c170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33c174: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33c174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c178: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33c178u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33c17c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x33c17cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33c180: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x33c180u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33c184: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x33c184u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33c188: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x33c188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33c18c: 0x3e00008  jr          $ra
    ctx->pc = 0x33C18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C18Cu;
        // 0x33c190: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C194u;
    // 0x33c194: 0x0  nop
    ctx->pc = 0x33c194u;
    // NOP
    ctx->pc = 0x33c198u;
}
