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

// Function: sub_002B8060
// Address: 0x2b8060 - 0x2b8130
void sub_002B8060_0x2b8060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8060_0x2b8060");
#endif

    switch (ctx->pc) {
        case 0x2b80b0u: goto label_2b80b0;
        case 0x2b80c4u: goto label_2b80c4;
        case 0x2b80e4u: goto label_2b80e4;
        default: break;
    }

    ctx->pc = 0x2b8060u;

    // 0x2b8060: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b8060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b8064: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b8064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b8068: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b8068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b806c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b806cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b8070: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b8070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8074: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b8074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b8078: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2b8078u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b807c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b807cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b8080: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2b8080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8084: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b8084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b8088: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b8088u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b808c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2b808cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2b8090: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b8090u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8094: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2b8094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2b8098: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2b8098u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b809c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2b809cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2b80a0: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2b80a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b80a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b80a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b80a8: 0x1a800012  blez        $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B80A8u;
    {
        const bool branch_taken_0x2b80a8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2B80ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B80A8u;
        // 0x2b80ac: 0xae320010  sw          $s2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b80a8) {
            ctx->pc = 0x2B80F4u;
            goto label_2b80f4;
        }
    }
    ctx->pc = 0x2B80B0u;
label_2b80b0:
    // 0x2b80b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b80b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b80b4: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x2b80b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2b80b8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2b80b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b80bc: 0xc0ae05a  jal         func_2B8168
    ctx->pc = 0x2B80BCu;
    SET_GPR_U32(ctx, 31, 0x2B80C4u);
    ctx->pc = 0x2B80C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B80BCu;
    // 0x2b80c0: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8168u, 0x2B80BCu, 0x2B80C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B80C4u;
label_2b80c4:
    // 0x2b80c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B80C4u;
    {
        const bool branch_taken_0x2b80c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B80C4u;
        // 0x2b80c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b80c4) {
            ctx->pc = 0x2B80E4u;
            goto label_2b80e4;
        }
    }
    ctx->pc = 0x2B80CCu;
    // 0x2b80cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b80ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b80d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b80d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b80d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b80d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b80d8: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x2b80d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2b80dc: 0xc0ae04c  jal         func_2B8130
    ctx->pc = 0x2B80DCu;
    SET_GPR_U32(ctx, 31, 0x2B80E4u);
    ctx->pc = 0x2B80E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B80DCu;
    // 0x2b80e0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8130u, 0x2B80DCu, 0x2B80E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B80E4u;
label_2b80e4:
    // 0x2b80e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2b80e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2b80e8: 0x274102a  slt         $v0, $s3, $s4
    ctx->pc = 0x2b80e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2b80ec: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2B80ECu;
    {
        const bool branch_taken_0x2b80ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B80F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B80ECu;
        // 0x2b80f0: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b80ec) {
            ctx->pc = 0x2B80B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b80b0;
        }
    }
    ctx->pc = 0x2B80F4u;
label_2b80f4:
    // 0x2b80f4: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B80F4u;
    {
        const bool branch_taken_0x2b80f4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b80f4) {
            ctx->pc = 0x2B80F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B80F4u;
            // 0x2b80f8: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B80FCu;
            goto label_2b80fc;
        }
    }
    ctx->pc = 0x2B80FCu;
label_2b80fc:
    // 0x2b80fc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2b80fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b8100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8104: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b8104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8108: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b8108u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b810c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b810cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8110: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b8110u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8114: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2b8114u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b8118: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2b8118u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b811c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2b811cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2b8120: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b8120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b8124: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8124u;
        // 0x2b8128: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B812Cu;
    // 0x2b812c: 0x0  nop
    ctx->pc = 0x2b812cu;
    // NOP
    ctx->pc = 0x2b8130u;
}
