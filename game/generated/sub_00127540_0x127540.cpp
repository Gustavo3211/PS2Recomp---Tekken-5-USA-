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

// Function: sub_00127540
// Address: 0x127540 - 0x1275e0
void sub_00127540_0x127540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127540_0x127540");
#endif

    switch (ctx->pc) {
        case 0x12758cu: goto label_12758c;
        default: break;
    }

    ctx->pc = 0x127540u;

    // 0x127540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x127540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x127544: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x127544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x127548: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12754c: 0x24504728  addiu       $s0, $v0, 0x4728
    ctx->pc = 0x12754cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 18216));
    // 0x127550: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x127550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x127554: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x127554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x127558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12755c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12755cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x134728u));
    // 0x127560: 0x8c460148  lw          $a2, 0x148($v0)
    ctx->pc = 0x127560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x127564: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x127564u;
    {
        const bool branch_taken_0x127564 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x127568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127564u;
        // 0x127568: 0x24040088  addiu       $a0, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127564) {
            ctx->pc = 0x127574u;
            goto label_127574;
        }
    }
    ctx->pc = 0x12756Cu;
    // 0x12756c: 0x2446014c  addiu       $a2, $v0, 0x14C
    ctx->pc = 0x12756cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 332));
    // 0x127570: 0xac460148  sw          $a2, 0x148($v0)
    ctx->pc = 0x127570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 6));
label_127574:
    // 0x127574: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x127574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x127578: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x127578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x12757c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12757Cu;
    {
        const bool branch_taken_0x12757c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12757Cu;
        // 0x127580: 0x24c30004  addiu       $v1, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12757c) {
            ctx->pc = 0x1275B0u;
            goto label_1275b0;
        }
    }
    ctx->pc = 0x127584u;
    // 0x127584: 0xc049e78  jal         func_1279E0
    ctx->pc = 0x127584u;
    SET_GPR_U32(ctx, 31, 0x12758Cu);
    ctx->pc = 0x1279E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1279E0u, 0x127584u, 0x12758Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12758Cu;
label_12758c:
    // 0x12758c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12758cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127590: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x127590u;
    {
        const bool branch_taken_0x127590 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x127594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127590u;
        // 0x127594: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127590) {
            ctx->pc = 0x1275CCu;
            goto label_1275cc;
        }
    }
    ctx->pc = 0x127598u;
    // 0x127598: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x127598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12759c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x12759cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1275a0: 0x8c620148  lw          $v0, 0x148($v1)
    ctx->pc = 0x1275a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 328)));
    // 0x1275a4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1275a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1275a8: 0xac660148  sw          $a2, 0x148($v1)
    ctx->pc = 0x1275a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 328), GPR_U32(ctx, 6));
    // 0x1275ac: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x1275acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1275b0:
    // 0x1275b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1275b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1275b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1275b8: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1275b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1275bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1275bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1275c0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1275c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1275c4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1275c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1275c8: 0xacb10008  sw          $s1, 0x8($a1)
    ctx->pc = 0x1275c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 17));
label_1275cc:
    // 0x1275cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1275ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1275d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1275d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1275d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1275d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1275d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1275D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1275DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1275D8u;
        // 0x1275dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1275D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1275E0u;
}
