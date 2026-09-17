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

// Function: sub_0021AC88
// Address: 0x21ac88 - 0x21ad08
void sub_0021AC88_0x21ac88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021AC88_0x21ac88");
#endif

    switch (ctx->pc) {
        case 0x21acc8u: goto label_21acc8;
        case 0x21ace0u: goto label_21ace0;
        default: break;
    }

    ctx->pc = 0x21ac88u;

    // 0x21ac88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21ac88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21ac8c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x21ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x21ac90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ac90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ac94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21ac94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ac98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21ac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21ac9c: 0x24425c48  addiu       $v0, $v0, 0x5C48
    ctx->pc = 0x21ac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23624));
    // 0x21aca0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21aca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21aca4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x21aca4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x21aca8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21aca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21acac: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x21acacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21acb0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x21acb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21acb4: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x21acb4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21acb8: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x21acb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x21acbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21acbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21acc0: 0xc086396  jal         func_218E58
    ctx->pc = 0x21ACC0u;
    SET_GPR_U32(ctx, 31, 0x21ACC8u);
    ctx->pc = 0x21ACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ACC0u;
    // 0x21acc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E58u, 0x21ACC0u, 0x21ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ACC8u;
label_21acc8:
    // 0x21acc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21acc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21accc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21acccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21acd0: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21ACD0u;
    {
        const bool branch_taken_0x21acd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x21ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ACD0u;
        // 0x21acd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21acd0) {
            ctx->pc = 0x21ACE8u;
            goto label_21ace8;
        }
    }
    ctx->pc = 0x21ACD8u;
    // 0x21acd8: 0xc0865a8  jal         func_2196A0
    ctx->pc = 0x21ACD8u;
    SET_GPR_U32(ctx, 31, 0x21ACE0u);
    ctx->pc = 0x2196A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2196A0u, 0x21ACD8u, 0x21ACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ACE0u;
label_21ace0:
    // 0x21ace0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21ace0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ace4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21ace4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21ace8:
    // 0x21ace8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21ace8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21acec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21acecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21acf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21acf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21acf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21acf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21acf8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21acf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21acfc: 0x8086396  j           func_218E58
    ctx->pc = 0x21ACFCu;
    ctx->pc = 0x21AD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ACFCu;
    // 0x21ad00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E58u;
    sub_00218E58_0x218e58(rdram, ctx, runtime); return;
    ctx->pc = 0x21AD04u;
    // 0x21ad04: 0x0  nop
    ctx->pc = 0x21ad04u;
    // NOP
    ctx->pc = 0x21ad08u;
}
