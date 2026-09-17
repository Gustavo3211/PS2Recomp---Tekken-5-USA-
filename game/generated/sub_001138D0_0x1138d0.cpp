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

// Function: sub_001138D0
// Address: 0x1138d0 - 0x113958
void sub_001138D0_0x1138d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001138D0_0x1138d0");
#endif

    switch (ctx->pc) {
        case 0x1138e8u: goto label_1138e8;
        case 0x1138f0u: goto label_1138f0;
        case 0x113910u: goto label_113910;
        case 0x113924u: goto label_113924;
        case 0x113940u: goto label_113940;
        default: break;
    }

    ctx->pc = 0x1138d0u;

    // 0x1138d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1138d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1138d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1138d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1138d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1138d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1138dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1138dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1138e0: 0xc044df8  jal         func_1137E0
    ctx->pc = 0x1138E0u;
    SET_GPR_U32(ctx, 31, 0x1138E8u);
    ctx->pc = 0x1138E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1138E0u;
    // 0x1138e4: 0x3c110013  lui         $s1, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)19 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1137E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1137E0u, 0x1138E0u, 0x1138E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1138E8u;
label_1138e8:
    // 0x1138e8: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x1138E8u;
    SET_GPR_U32(ctx, 31, 0x1138F0u);
    ctx->pc = 0x1138ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1138E8u;
    // 0x1138ec: 0x8e2411a0  lw          $a0, 0x11A0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x1138E8u, 0x1138F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1138F0u;
label_1138f0:
    // 0x1138f0: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1138f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1138f4: 0x2470b840  addiu       $s0, $v1, -0x47C0
    ctx->pc = 0x1138f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948928));
    // 0x1138f8: 0x26030200  addiu       $v1, $s0, 0x200
    ctx->pc = 0x1138f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x1138fc: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x1138fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x113900: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x113900u;
    {
        const bool branch_taken_0x113900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113900u;
        // 0x113904: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113900) {
            ctx->pc = 0x113938u;
            goto label_113938;
        }
    }
    ctx->pc = 0x113908u;
    // 0x113908: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x113908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11390c: 0x0  nop
    ctx->pc = 0x11390cu;
    // NOP
label_113910:
    // 0x113910: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x113910u;
    {
        const bool branch_taken_0x113910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113910) {
            ctx->pc = 0x113914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113910u;
            // 0x113914: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11392Cu;
            goto label_11392c;
        }
    }
    ctx->pc = 0x113918u;
    // 0x113918: 0x8e2411a0  lw          $a0, 0x11A0($s1)
    ctx->pc = 0x113918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4512)));
    // 0x11391c: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x11391Cu;
    SET_GPR_U32(ctx, 31, 0x113924u);
    ctx->pc = 0x113920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11391Cu;
    // 0x113920: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x11391Cu, 0x113924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113924u;
label_113924:
    // 0x113924: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x113924u;
    {
        const bool branch_taken_0x113924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113924u;
        // 0x113928: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113924) {
            ctx->pc = 0x113944u;
            goto label_113944;
        }
    }
    ctx->pc = 0x11392Cu;
label_11392c:
    // 0x11392c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x11392cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x113930: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x113930u;
    {
        const bool branch_taken_0x113930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113930) {
            ctx->pc = 0x113934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113930u;
            // 0x113934: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113910;
        }
    }
    ctx->pc = 0x113938u;
label_113938:
    // 0x113938: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x113938u;
    SET_GPR_U32(ctx, 31, 0x113940u);
    ctx->pc = 0x11393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113938u;
    // 0x11393c: 0x8e2411a0  lw          $a0, 0x11A0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x113938u, 0x113940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113940u;
label_113940:
    // 0x113940: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x113940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113944:
    // 0x113944: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x113944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113948: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x113948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11394c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11394cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113950: 0x3e00008  jr          $ra
    ctx->pc = 0x113950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113950u;
        // 0x113954: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113958u;
}
