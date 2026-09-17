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

// Function: sub_0029C780
// Address: 0x29c780 - 0x29c870
void sub_0029C780_0x29c780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C780_0x29c780");
#endif

    switch (ctx->pc) {
        case 0x29c7e0u: goto label_29c7e0;
        default: break;
    }

    ctx->pc = 0x29c780u;

    // 0x29c780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29c784: 0x2407efff  addiu       $a3, $zero, -0x1001
    ctx->pc = 0x29c784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29c788: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29c78c: 0x56840  sll         $t5, $a1, 1
    ctx->pc = 0x29c78cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x29c790: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x29c790u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c794: 0x240aefff  addiu       $t2, $zero, -0x1001
    ctx->pc = 0x29c794u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29c798: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x29c798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x29c79c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x29c79cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29c7a0: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x29c7a0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c7a4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x29c7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29c7a8: 0x24500030  addiu       $s0, $v0, 0x30
    ctx->pc = 0x29c7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x29c7ac: 0x8c660070  lw          $a2, 0x70($v1)
    ctx->pc = 0x29c7acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x29c7b0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x29c7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c7b4: 0x24590050  addiu       $t9, $v0, 0x50
    ctx->pc = 0x29c7b4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x29c7b8: 0x24580080  addiu       $t8, $v0, 0x80
    ctx->pc = 0x29c7b8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x29c7bc: 0x8cc30080  lw          $v1, 0x80($a2)
    ctx->pc = 0x29c7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x29c7c0: 0x244f00a0  addiu       $t7, $v0, 0xA0
    ctx->pc = 0x29c7c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x29c7c4: 0x244e00c0  addiu       $t6, $v0, 0xC0
    ctx->pc = 0x29c7c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x29c7c8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x29c7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x29c7cc: 0xacc30080  sw          $v1, 0x80($a2)
    ctx->pc = 0x29c7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 3));
    // 0x29c7d0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x29c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x29c7d4: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29c7d8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x29c7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x29c7dc: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29c7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_29c7e0:
    // 0x29c7e0: 0x1ab1021  addu        $v0, $t5, $t3
    ctx->pc = 0x29c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x29c7e4: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x29c7e4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c7e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29c7ec: 0x18b2821  addu        $a1, $t4, $t3
    ctx->pc = 0x29c7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x29c7f0: 0x591021  addu        $v0, $v0, $t9
    ctx->pc = 0x29c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x29c7f4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x29c7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29c7f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29c7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29c7fc: 0xb03021  addu        $a2, $a1, $s0
    ctx->pc = 0x29c7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x29c800: 0xb83821  addu        $a3, $a1, $t8
    ctx->pc = 0x29c800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x29c804: 0xaf4021  addu        $t0, $a1, $t7
    ctx->pc = 0x29c804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x29c808: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29c808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29c80c: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x29c80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x29c810: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x29c810u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x29c814: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x29c814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x29c818: 0x29690002  slti        $t1, $t3, 0x2
    ctx->pc = 0x29c818u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x29c81c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29c81cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29c820: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x29c820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29c824: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29c824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29c828: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x29c828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x29c82c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x29c830: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x29c830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29c834: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29c834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29c838: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x29c838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x29c83c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29c83cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29c840: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x29c840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x29c844: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29c844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29c848: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x29c848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x29c84c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29c84cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x29c850: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x29c850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29c854: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29c854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29c858: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x29c858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x29c85c: 0x1520ffe0  bnez        $t1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x29C85Cu;
    {
        const bool branch_taken_0x29c85c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C85Cu;
        // 0x29c860: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c85c) {
            ctx->pc = 0x29C7E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c7e0;
        }
    }
    ctx->pc = 0x29C864u;
    // 0x29c864: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c868: 0x3e00008  jr          $ra
    ctx->pc = 0x29C868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C868u;
        // 0x29c86c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C870u;
}
