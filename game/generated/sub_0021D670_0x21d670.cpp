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

// Function: sub_0021D670
// Address: 0x21d670 - 0x21d708
void sub_0021D670_0x21d670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D670_0x21d670");
#endif

    switch (ctx->pc) {
        case 0x21d69cu: goto label_21d69c;
        case 0x21d6dcu: goto label_21d6dc;
        default: break;
    }

    ctx->pc = 0x21d670u;

    // 0x21d670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21d670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21d674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d678: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21d678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d67c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21d67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21d680: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21d680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d684: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21d684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21d688: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x21d688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d68c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21d68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21d690: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21d690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21d694: 0xc08e6a8  jal         func_239AA0
    ctx->pc = 0x21D694u;
    SET_GPR_U32(ctx, 31, 0x21D69Cu);
    ctx->pc = 0x21D698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D694u;
    // 0x21d698: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239AA0u, 0x21D694u, 0x21D69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D69Cu;
label_21d69c:
    // 0x21d69c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21d69cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x21d6a0: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x21d6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x21d6a4: 0x24c66a50  addiu       $a2, $a2, 0x6A50
    ctx->pc = 0x21d6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27216));
    // 0x21d6a8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21d6a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6ac: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x21d6acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6b0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x21d6b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21D6B4u;
    {
        const bool branch_taken_0x21d6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6B4u;
        // 0x21d6b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d6b4) {
            ctx->pc = 0x21D6D0u;
            goto label_21d6d0;
        }
    }
    ctx->pc = 0x21D6BCu;
    // 0x21d6bc: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x21d6bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21d6c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21d6c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21D6C4u;
    {
        const bool branch_taken_0x21d6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6C4u;
        // 0x21d6c8: 0x53800b  movn        $s0, $v0, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d6c4) {
            ctx->pc = 0x21D6D4u;
            goto label_21d6d4;
        }
    }
    ctx->pc = 0x21D6CCu;
    // 0x21d6cc: 0x0  nop
    ctx->pc = 0x21d6ccu;
    // NOP
label_21d6d0:
    // 0x21d6d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21d6d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d6d4:
    // 0x21d6d4: 0xc087558  jal         func_21D560
    ctx->pc = 0x21D6D4u;
    SET_GPR_U32(ctx, 31, 0x21D6DCu);
    ctx->pc = 0x21D6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D6D4u;
    // 0x21d6d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D560u, 0x21D6D4u, 0x21D6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D6DCu;
label_21d6dc:
    // 0x21d6dc: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x21d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x21d6e0: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x21d6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x21d6e4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x21d6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x21d6e8: 0xac30bee4  sw          $s0, -0x411C($at)
    ctx->pc = 0x21d6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294950628), GPR_U32(ctx, 16));
    // 0x21d6ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21d6ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d6f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d6f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d6f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21d6f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d6f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21d6f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21d6fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21d6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d700: 0x3e00008  jr          $ra
    ctx->pc = 0x21D700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D700u;
        // 0x21d704: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D708u;
}
