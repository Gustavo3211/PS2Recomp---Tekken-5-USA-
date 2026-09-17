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

// Function: sub_00220100
// Address: 0x220100 - 0x2201a8
void sub_00220100_0x220100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220100_0x220100");
#endif

    switch (ctx->pc) {
        case 0x220134u: goto label_220134;
        case 0x220144u: goto label_220144;
        case 0x220168u: goto label_220168;
        case 0x220188u: goto label_220188;
        default: break;
    }

    ctx->pc = 0x220100u;

    // 0x220100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x220100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x220104: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x220104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x220108: 0x30930001  andi        $s3, $a0, 0x1
    ctx->pc = 0x220108u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x22010c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x22010cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x220110: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220114: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x220114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x220118: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x220118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22011c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22011cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x220120: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x220120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x220124: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x220124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220128: 0x8c6388d0  lw          $v1, -0x7730($v1)
    ctx->pc = 0x220128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936784)));
    // 0x22012c: 0xc085114  jal         func_214450
    ctx->pc = 0x22012Cu;
    SET_GPR_U32(ctx, 31, 0x220134u);
    ctx->pc = 0x220130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22012Cu;
    // 0x220130: 0x84720042  lh          $s2, 0x42($v1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214450u, 0x22012Cu, 0x220134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220134u;
label_220134:
    // 0x220134: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x220134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220138: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x220138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22013c: 0xc087fe2  jal         func_21FF88
    ctx->pc = 0x22013Cu;
    SET_GPR_U32(ctx, 31, 0x220144u);
    ctx->pc = 0x220140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22013Cu;
    // 0x220140: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FF88u, 0x22013Cu, 0x220144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220144u;
label_220144:
    // 0x220144: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x220144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220148: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x220148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22014c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x22014cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220150: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x220150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220154: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x220154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220158: 0x620000b  bltz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x220158u;
    {
        const bool branch_taken_0x220158 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x22015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220158u;
        // 0x22015c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220158) {
            ctx->pc = 0x220188u;
            goto label_220188;
        }
    }
    ctx->pc = 0x220160u;
    // 0x220160: 0xc08806a  jal         func_2201A8
    ctx->pc = 0x220160u;
    SET_GPR_U32(ctx, 31, 0x220168u);
    ctx->pc = 0x2201A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2201A8u, 0x220160u, 0x220168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220168u;
label_220168:
    // 0x220168: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x220168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x22016c: 0x2484b710  addiu       $a0, $a0, -0x48F0
    ctx->pc = 0x22016cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948624));
    // 0x220170: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x220170u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220174: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x220174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220178: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x220178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22017c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22017cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220180: 0xc0a4e16  jal         func_293858
    ctx->pc = 0x220180u;
    SET_GPR_U32(ctx, 31, 0x220188u);
    ctx->pc = 0x220184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220180u;
    // 0x220184: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293858u, 0x220180u, 0x220188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220188u;
label_220188:
    // 0x220188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22018c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22018cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220190: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x220190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220194: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x220194u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220198: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x220198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22019c: 0x3e00008  jr          $ra
    ctx->pc = 0x22019Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2201A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22019Cu;
        // 0x2201a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22019Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2201A4u;
    // 0x2201a4: 0x0  nop
    ctx->pc = 0x2201a4u;
    // NOP
    ctx->pc = 0x2201a8u;
}
