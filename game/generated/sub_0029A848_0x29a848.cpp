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

// Function: sub_0029A848
// Address: 0x29a848 - 0x29a8f0
void sub_0029A848_0x29a848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A848_0x29a848");
#endif

    switch (ctx->pc) {
        case 0x29a8a4u: goto label_29a8a4;
        default: break;
    }

    ctx->pc = 0x29a848u;

    // 0x29a848: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a84c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x29a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x29a850: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29a850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29a854: 0x58880  sll         $s1, $a1, 2
    ctx->pc = 0x29a854u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29a858: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29a858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29a85c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x29a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x29a860: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a864: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x29a864u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x29a868: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x29a868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x29a86c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a870: 0x8c900154  lw          $s0, 0x154($a0)
    ctx->pc = 0x29a870u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x29a874: 0x8c890158  lw          $t1, 0x158($a0)
    ctx->pc = 0x29a874u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x29a878: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x29a878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x29a87c: 0x26100098  addiu       $s0, $s0, 0x98
    ctx->pc = 0x29a87cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    // 0x29a880: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x29a880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x29a884: 0x8ca800a8  lw          $t0, 0xA8($a1)
    ctx->pc = 0x29a884u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 168)));
    // 0x29a888: 0x8c6700ac  lw          $a3, 0xAC($v1)
    ctx->pc = 0x29a888u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
    // 0x29a88c: 0x25320028  addiu       $s2, $t1, 0x28
    ctx->pc = 0x29a88cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), 40));
    // 0x29a890: 0xad070078  sw          $a3, 0x78($t0)
    ctx->pc = 0x29a890u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 120), GPR_U32(ctx, 7));
    // 0x29a894: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x29a894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29a898: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a89c: 0xc0a7982  jal         func_29E608
    ctx->pc = 0x29A89Cu;
    SET_GPR_U32(ctx, 31, 0x29A8A4u);
    ctx->pc = 0x29A8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A89Cu;
    // 0x29a8a0: 0x8c44ffe8  lw          $a0, -0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E608u, 0x29A89Cu, 0x29A8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A8A4u;
label_29a8a4:
    // 0x29a8a4: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x29a8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x29a8a8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x29a8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a8ac: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x29a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x29a8b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29a8b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a8b4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A8B4u;
    {
        const bool branch_taken_0x29a8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A8B4u;
        // 0x29a8b8: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a8b4) {
            ctx->pc = 0x29A8C8u;
            goto label_29a8c8;
        }
    }
    ctx->pc = 0x29A8BCu;
    // 0x29a8bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29a8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29a8c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29A8C0u;
    {
        const bool branch_taken_0x29a8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A8C0u;
        // 0x29a8c4: 0x8e420064  lw          $v0, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a8c0) {
            ctx->pc = 0x29A8D0u;
            goto label_29a8d0;
        }
    }
    ctx->pc = 0x29A8C8u;
label_29a8c8:
    // 0x29a8c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x29a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29a8cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29a8d0:
    // 0x29a8d0: 0xac620078  sw          $v0, 0x78($v1)
    ctx->pc = 0x29a8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 2));
    // 0x29a8d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a8d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a8d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29a8d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29a8dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29a8dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a8e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x29a8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29a8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x29A8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A8E4u;
        // 0x29a8e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A8ECu;
    // 0x29a8ec: 0x0  nop
    ctx->pc = 0x29a8ecu;
    // NOP
    ctx->pc = 0x29a8f0u;
}
