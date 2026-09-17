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

// Function: sub_00100350
// Address: 0x100350 - 0x1003f0
void sub_00100350_0x100350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100350_0x100350");
#endif

    switch (ctx->pc) {
        case 0x100378u: goto label_100378;
        default: break;
    }

    ctx->pc = 0x100350u;

    // 0x100350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x100350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x100354: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x100354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x100358: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10035c: 0x8c50885c  lw          $s0, -0x77A4($v0)
    ctx->pc = 0x10035cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x100360: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x100360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x100364: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x100364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100368: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x100368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10036c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10036cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x100370: 0xc04007c  jal         func_1001F0
    ctx->pc = 0x100370u;
    SET_GPR_U32(ctx, 31, 0x100378u);
    ctx->pc = 0x100374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100370u;
    // 0x100374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1001F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1001F0u, 0x100370u, 0x100378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100378u;
label_100378:
    // 0x100378: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x100378u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10037c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x10037cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x100380: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x100380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100384: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x100384u;
    {
        const bool branch_taken_0x100384 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x100388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100384u;
        // 0x100388: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100384) {
            ctx->pc = 0x1003A8u;
            goto label_1003a8;
        }
    }
    ctx->pc = 0x10038Cu;
    // 0x10038c: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10038Cu;
    {
        const bool branch_taken_0x10038c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x100390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10038Cu;
        // 0x100390: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10038c) {
            ctx->pc = 0x1003A8u;
            goto label_1003a8;
        }
    }
    ctx->pc = 0x100394u;
    // 0x100394: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x100394u;
    {
        const bool branch_taken_0x100394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x100394) {
            ctx->pc = 0x100398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100394u;
            // 0x100398: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1003B8u;
            goto label_1003b8;
        }
    }
    ctx->pc = 0x10039Cu;
    // 0x10039c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10039Cu;
    {
        const bool branch_taken_0x10039c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10039c) {
            ctx->pc = 0x1003C0u;
            goto label_1003c0;
        }
    }
    ctx->pc = 0x1003A4u;
    // 0x1003a4: 0x0  nop
    ctx->pc = 0x1003a4u;
    // NOP
label_1003a8:
    // 0x1003a8: 0x3c020111  lui         $v0, 0x111
    ctx->pc = 0x1003a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)273 << 16));
    // 0x1003ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1003ACu;
    {
        const bool branch_taken_0x1003ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1003B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1003ACu;
        // 0x1003b0: 0x24516f00  addiu       $s1, $v0, 0x6F00 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 28416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1003ac) {
            ctx->pc = 0x1003C0u;
            goto label_1003c0;
        }
    }
    ctx->pc = 0x1003B4u;
    // 0x1003b4: 0x0  nop
    ctx->pc = 0x1003b4u;
    // NOP
label_1003b8:
    // 0x1003b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1003B8u;
    {
        const bool branch_taken_0x1003b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1003BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1003B8u;
        // 0x1003bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1003b8) {
            ctx->pc = 0x1003D4u;
            goto label_1003d4;
        }
    }
    ctx->pc = 0x1003C0u;
label_1003c0:
    // 0x1003c0: 0x3c03000c  lui         $v1, 0xC
    ctx->pc = 0x1003c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12 << 16));
    // 0x1003c4: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x1003c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x1003c8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1003c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1003cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1003ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1003d0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1003d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1003d4:
    // 0x1003d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1003d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1003d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1003d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1003dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1003dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1003e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1003e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1003e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1003E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1003E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1003E4u;
        // 0x1003e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1003E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1003ECu;
    // 0x1003ec: 0x0  nop
    ctx->pc = 0x1003ecu;
    // NOP
    ctx->pc = 0x1003f0u;
}
