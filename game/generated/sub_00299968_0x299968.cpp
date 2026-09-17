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

// Function: sub_00299968
// Address: 0x299968 - 0x299a08
void sub_00299968_0x299968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299968_0x299968");
#endif

    switch (ctx->pc) {
        case 0x2999a0u: goto label_2999a0;
        case 0x2999b4u: goto label_2999b4;
        case 0x2999c0u: goto label_2999c0;
        default: break;
    }

    ctx->pc = 0x299968u;

    // 0x299968: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x299968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29996c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x29996cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x299970: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x299970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299974: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x299974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x299978: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x299978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29997c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x29997cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x299980: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x299980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x299984: 0x2414efff  addiu       $s4, $zero, -0x1001
    ctx->pc = 0x299984u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x299988: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x299988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x29998c: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x29998cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    // 0x299990: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x299990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x299994: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x299994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x299998: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x299998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x29999c: 0x24530018  addiu       $s3, $v0, 0x18
    ctx->pc = 0x29999cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_2999a0:
    // 0x2999a0: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x2999a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2999a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2999a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2999a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2999a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2999ac: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2999ACu;
    SET_GPR_U32(ctx, 31, 0x2999B4u);
    ctx->pc = 0x2999B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2999ACu;
    // 0x2999b0: 0x26a5c028  addiu       $a1, $s5, -0x3FD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294950952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2999ACu, 0x2999B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2999B4u;
label_2999b4:
    // 0x2999b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2999b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2999b8: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2999B8u;
    SET_GPR_U32(ctx, 31, 0x2999C0u);
    ctx->pc = 0x2999BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2999B8u;
    // 0x2999bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2999B8u, 0x2999C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2999C0u;
label_2999c0:
    // 0x2999c0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2999c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2999c4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2999c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2999c8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2999c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2999cc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2999ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2999d0: 0x2a240004  slti        $a0, $s1, 0x4
    ctx->pc = 0x2999d0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2999d4: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x2999d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2999d8: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x2999d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x2999dc: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2999DCu;
    {
        const bool branch_taken_0x2999dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2999E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2999DCu;
        // 0x2999e0: 0xac430080  sw          $v1, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2999dc) {
            ctx->pc = 0x2999A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2999a0;
        }
    }
    ctx->pc = 0x2999E4u;
    // 0x2999e4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2999e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2999e8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2999e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2999ec: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2999ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2999f0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2999f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2999f4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2999f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2999f8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2999f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2999fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2999fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x299a00: 0x3e00008  jr          $ra
    ctx->pc = 0x299A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299A00u;
        // 0x299a04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299A08u;
}
