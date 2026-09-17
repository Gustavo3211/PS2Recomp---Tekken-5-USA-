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

// Function: sub_001220A0
// Address: 0x1220a0 - 0x122128
void sub_001220A0_0x1220a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001220A0_0x1220a0");
#endif

    switch (ctx->pc) {
        case 0x1220bcu: goto label_1220bc;
        case 0x1220d8u: goto label_1220d8;
        case 0x1220e0u: goto label_1220e0;
        case 0x1220fcu: goto label_1220fc;
        case 0x122104u: goto label_122104;
        default: break;
    }

    ctx->pc = 0x1220a0u;

    // 0x1220a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1220a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1220a4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1220a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1220a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1220a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1220ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1220acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1220b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1220b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1220b4: 0xc043ca4  jal         func_10F290
    ctx->pc = 0x1220B4u;
    SET_GPR_U32(ctx, 31, 0x1220BCu);
    ctx->pc = 0x1220B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1220B4u;
    // 0x1220b8: 0x2451fc80  addiu       $s1, $v0, -0x380 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F290u, 0x1220B4u, 0x1220BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1220BCu;
label_1220bc:
    // 0x1220bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1220bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1220c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1220c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1220c4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1220c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1220c8: 0x56000012  bnel        $s0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1220C8u;
    {
        const bool branch_taken_0x1220c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1220c8) {
            ctx->pc = 0x1220CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1220C8u;
            // 0x1220cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122114u;
            goto label_122114;
        }
    }
    ctx->pc = 0x1220D0u;
    // 0x1220d0: 0xc048738  jal         func_121CE0
    ctx->pc = 0x1220D0u;
    SET_GPR_U32(ctx, 31, 0x1220D8u);
    ctx->pc = 0x121CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121CE0u, 0x1220D0u, 0x1220D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1220D8u;
label_1220d8:
    // 0x1220d8: 0xc043ca4  jal         func_10F290
    ctx->pc = 0x1220D8u;
    SET_GPR_U32(ctx, 31, 0x1220E0u);
    ctx->pc = 0x1220DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1220D8u;
    // 0x1220dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F290u, 0x1220D8u, 0x1220E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1220E0u;
label_1220e0:
    // 0x1220e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1220e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1220e4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1220e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1220e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1220e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1220ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1220ECu;
    {
        const bool branch_taken_0x1220ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1220F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1220ECu;
        // 0x1220f0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1220ec) {
            ctx->pc = 0x1220FCu;
            goto label_1220fc;
        }
    }
    ctx->pc = 0x1220F4u;
    // 0x1220f4: 0xc049e8e  jal         func_127A38
    ctx->pc = 0x1220F4u;
    SET_GPR_U32(ctx, 31, 0x1220FCu);
    ctx->pc = 0x127A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127A38u, 0x1220F4u, 0x1220FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1220FCu;
label_1220fc:
    // 0x1220fc: 0xc043ca4  jal         func_10F290
    ctx->pc = 0x1220FCu;
    SET_GPR_U32(ctx, 31, 0x122104u);
    ctx->pc = 0x10F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F290u, 0x1220FCu, 0x122104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122104u;
label_122104:
    // 0x122104: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x122104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x122108: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x122108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12210c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x12210cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x122110: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x122110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_122114:
    // 0x122114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x122114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122118: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x122118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12211c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12211cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122120: 0x3e00008  jr          $ra
    ctx->pc = 0x122120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122120u;
        // 0x122124: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122128u;
}
