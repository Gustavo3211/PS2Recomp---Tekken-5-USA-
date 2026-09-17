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

// Function: sub_002DF130
// Address: 0x2df130 - 0x2df1d0
void sub_002DF130_0x2df130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF130_0x2df130");
#endif

    switch (ctx->pc) {
        case 0x2df1a4u: goto label_2df1a4;
        case 0x2df1acu: goto label_2df1ac;
        default: break;
    }

    ctx->pc = 0x2df130u;

    // 0x2df130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2df130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2df134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2df134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2df138: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2df138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df13c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2df13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2df140: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2df140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2df144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2df148: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2df148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2df14c: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x2df14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2df150: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2df150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2df154: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2df154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2df158: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2df158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2df15c: 0x8e26005c  lw          $a2, 0x5C($s1)
    ctx->pc = 0x2df15cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2df160: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2df160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2df164: 0xae26005c  sw          $a2, 0x5C($s1)
    ctx->pc = 0x2df164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 6));
    // 0x2df168: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2df168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2df16c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2df16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2df170: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF170u;
    {
        const bool branch_taken_0x2df170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF170u;
        // 0x2df174: 0x8e060018  lw          $a2, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df170) {
            ctx->pc = 0x2DF180u;
            goto label_2df180;
        }
    }
    ctx->pc = 0x2DF178u;
    // 0x2df178: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DF178u;
    {
        const bool branch_taken_0x2df178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF178u;
        // 0x2df17c: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df178) {
            ctx->pc = 0x2DF184u;
            goto label_2df184;
        }
    }
    ctx->pc = 0x2DF180u;
label_2df180:
    // 0x2df180: 0xacc20024  sw          $v0, 0x24($a2)
    ctx->pc = 0x2df180u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 2));
label_2df184:
    // 0x2df184: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DF184u;
    {
        const bool branch_taken_0x2df184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df184) {
            ctx->pc = 0x2DF188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF184u;
            // 0x2df188: 0xacc30028  sw          $v1, 0x28($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF190u;
            goto label_2df190;
        }
    }
    ctx->pc = 0x2DF18Cu;
    // 0x2df18c: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x2df18cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_2df190:
    // 0x2df190: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2df190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2df194: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2df194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2df198: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2df198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x2df19c: 0xc0b7c80  jal         func_2DF200
    ctx->pc = 0x2DF19Cu;
    SET_GPR_U32(ctx, 31, 0x2DF1A4u);
    ctx->pc = 0x2DF1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF19Cu;
    // 0x2df1a0: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF200u, 0x2DF19Cu, 0x2DF1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF1A4u;
label_2df1a4:
    // 0x2df1a4: 0xc0b79a0  jal         func_2DE680
    ctx->pc = 0x2DF1A4u;
    SET_GPR_U32(ctx, 31, 0x2DF1ACu);
    ctx->pc = 0x2DF1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF1A4u;
    // 0x2df1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE680u, 0x2DF1A4u, 0x2DF1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF1ACu;
label_2df1ac:
    // 0x2df1ac: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x2df1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2df1b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2df1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df1b4: 0xac500010  sw          $s0, 0x10($v0)
    ctx->pc = 0x2df1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 16));
    // 0x2df1b8: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x2df1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
    // 0x2df1bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2df1bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2df1c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2df1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2df1c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2df1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF1C8u;
        // 0x2df1cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF1D0u;
}
