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

// Function: sub_001F0790
// Address: 0x1f0790 - 0x1f0860
void sub_001F0790_0x1f0790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0790_0x1f0790");
#endif

    switch (ctx->pc) {
        case 0x1f07b4u: goto label_1f07b4;
        case 0x1f07bcu: goto label_1f07bc;
        case 0x1f07c4u: goto label_1f07c4;
        case 0x1f07ccu: goto label_1f07cc;
        case 0x1f07e0u: goto label_1f07e0;
        case 0x1f07ecu: goto label_1f07ec;
        case 0x1f07f4u: goto label_1f07f4;
        case 0x1f07fcu: goto label_1f07fc;
        case 0x1f0808u: goto label_1f0808;
        case 0x1f0810u: goto label_1f0810;
        case 0x1f0818u: goto label_1f0818;
        case 0x1f0820u: goto label_1f0820;
        case 0x1f0828u: goto label_1f0828;
        case 0x1f0830u: goto label_1f0830;
        case 0x1f0838u: goto label_1f0838;
        default: break;
    }

    ctx->pc = 0x1f0790u;

    // 0x1f0790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f0790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f0794: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f0794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f0798: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f0798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f079c: 0x24112580  addiu       $s1, $zero, 0x2580
    ctx->pc = 0x1f079cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9600));
    // 0x1f07a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f07a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f07a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f07a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f07a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f07a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f07ac: 0xc04870a  jal         func_121C28
    ctx->pc = 0x1F07ACu;
    SET_GPR_U32(ctx, 31, 0x1F07B4u);
    ctx->pc = 0x1F07B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F07ACu;
    // 0x1f07b0: 0x3c121000  lui         $s2, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121C28u, 0x1F07ACu, 0x1F07B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F07B4u;
label_1f07b4:
    // 0x1f07b4: 0xc092e0e  jal         func_24B838
    ctx->pc = 0x1F07B4u;
    SET_GPR_U32(ctx, 31, 0x1F07BCu);
    ctx->pc = 0x24B838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B838u, 0x1F07B4u, 0x1F07BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F07BCu;
label_1f07bc:
    // 0x1f07bc: 0xc087c6c  jal         func_21F1B0
    ctx->pc = 0x1F07BCu;
    SET_GPR_U32(ctx, 31, 0x1F07C4u);
    ctx->pc = 0x21F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F1B0u, 0x1F07BCu, 0x1F07C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F07C4u;
label_1f07c4:
    // 0x1f07c4: 0xc0b753c  jal         func_2DD4F0
    ctx->pc = 0x1F07C4u;
    SET_GPR_U32(ctx, 31, 0x1F07CCu);
    ctx->pc = 0x2DD4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD4F0u, 0x1F07C4u, 0x1F07CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F07CCu;
label_1f07cc:
    // 0x1f07cc: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x1f07ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x1f07d0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1f07d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1f07d4: 0x245037e0  addiu       $s0, $v0, 0x37E0
    ctx->pc = 0x1f07d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14304));
    // 0x1f07d8: 0x24738858  addiu       $s3, $v1, -0x77A8
    ctx->pc = 0x1f07d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
    // 0x1f07dc: 0x0  nop
    ctx->pc = 0x1f07dcu;
    // NOP
label_1f07e0:
    // 0x1f07e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f07e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f07e4: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x1F07E4u;
    SET_GPR_U32(ctx, 31, 0x1F07ECu);
    ctx->pc = 0x1F07E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F07E4u;
    // 0x1f07e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x1F07E4u, 0x1F07ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F07ECu;
label_1f07ec:
    // 0x1f07ec: 0xc0b76c8  jal         func_2DDB20
    ctx->pc = 0x1F07ECu;
    SET_GPR_U32(ctx, 31, 0x1F07F4u);
    ctx->pc = 0x1F07F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F07ECu;
    // 0x1f07f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDB20u, 0x1F07ECu, 0x1F07F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F07F4u;
label_1f07f4:
    // 0x1f07f4: 0xc0c688c  jal         func_31A230
    ctx->pc = 0x1F07F4u;
    SET_GPR_U32(ctx, 31, 0x1F07FCu);
    ctx->pc = 0x31A230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A230u, 0x1F07F4u, 0x1F07FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F07FCu;
label_1f07fc:
    // 0x1f07fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f07fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0800: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x1F0800u;
    SET_GPR_U32(ctx, 31, 0x1F0808u);
    ctx->pc = 0x1F0804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0800u;
    // 0x1f0804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x1F0800u, 0x1F0808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0808u;
label_1f0808:
    // 0x1f0808: 0xc0b76be  jal         func_2DDAF8
    ctx->pc = 0x1F0808u;
    SET_GPR_U32(ctx, 31, 0x1F0810u);
    ctx->pc = 0x1F080Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0808u;
    // 0x1f080c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDAF8u, 0x1F0808u, 0x1F0810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0810u;
label_1f0810:
    // 0x1f0810: 0xc0b7c2c  jal         func_2DF0B0
    ctx->pc = 0x1F0810u;
    SET_GPR_U32(ctx, 31, 0x1F0818u);
    ctx->pc = 0x1F0814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0810u;
    // 0x1f0814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF0B0u, 0x1F0810u, 0x1F0818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0818u;
label_1f0818:
    // 0x1f0818: 0xc043d88  jal         func_10F620
    ctx->pc = 0x1F0818u;
    SET_GPR_U32(ctx, 31, 0x1F0820u);
    ctx->pc = 0x1F081Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0818u;
    // 0x1f081c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x1F0818u, 0x1F0820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0820u;
label_1f0820:
    // 0x1f0820: 0xc0b753e  jal         func_2DD4F8
    ctx->pc = 0x1F0820u;
    SET_GPR_U32(ctx, 31, 0x1F0828u);
    ctx->pc = 0x2DD4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD4F8u, 0x1F0820u, 0x1F0828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0828u;
label_1f0828:
    // 0x1f0828: 0xc08ff80  jal         func_23FE00
    ctx->pc = 0x1F0828u;
    SET_GPR_U32(ctx, 31, 0x1F0830u);
    ctx->pc = 0x23FE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FE00u, 0x1F0828u, 0x1F0830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0830u;
label_1f0830:
    // 0x1f0830: 0xc09220c  jal         func_248830
    ctx->pc = 0x1F0830u;
    SET_GPR_U32(ctx, 31, 0x1F0838u);
    ctx->pc = 0x248830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248830u, 0x1F0830u, 0x1F0838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0838u;
label_1f0838:
    // 0x1f0838: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f0838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f083c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1f083cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1f0840: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f0840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f0844: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f0844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f0848: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f0848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f084c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f084cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f0850: 0x71001b  divu        $zero, $v1, $s1
    ctx->pc = 0x1f0850u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1f0854: 0x1812  mflo        $v1
    ctx->pc = 0x1f0854u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1f0858: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x1F0858u;
    {
        const bool branch_taken_0x1f0858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0858u;
        // 0x1f085c: 0xae630060  sw          $v1, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0858) {
            ctx->pc = 0x1F07E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f07e0;
        }
    }
    ctx->pc = 0x1F0860u;
}
