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

// Function: sub_004A5550
// Address: 0x4a5550 - 0x4a55e8
void sub_004A5550_0x4a5550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5550_0x4a5550");
#endif

    switch (ctx->pc) {
        case 0x4a55a4u: goto label_4a55a4;
        case 0x4a55ccu: goto label_4a55cc;
        default: break;
    }

    ctx->pc = 0x4a5550u;

    // 0x4a5550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a5550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a5554: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a5554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a5558: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a5558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a555c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a555cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a5560: 0x26230130  addiu       $v1, $s1, 0x130
    ctx->pc = 0x4a5560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
    // 0x4a5564: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a5564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a5568: 0x84700000  lh          $s0, 0x0($v1)
    ctx->pc = 0x4a5568u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a556c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A556Cu;
    {
        const bool branch_taken_0x4a556c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A556Cu;
        // 0x4a5570: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a556c) {
            ctx->pc = 0x4A5590u;
            goto label_4a5590;
        }
    }
    ctx->pc = 0x4A5574u;
    // 0x4a5574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a5574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5578: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a5578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a557c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a557cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a5580: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4a5580u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a5584: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5584u;
        // 0x4a5588: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A558Cu;
    // 0x4a558c: 0x0  nop
    ctx->pc = 0x4a558cu;
    // NOP
label_4a5590:
    // 0x4a5590: 0x86300132  lh          $s0, 0x132($s1)
    ctx->pc = 0x4a5590u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 306)));
    // 0x4a5594: 0x602000e  bltzl       $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x4A5594u;
    {
        const bool branch_taken_0x4a5594 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x4a5594) {
            ctx->pc = 0x4A5598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5594u;
            // 0x4a5598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A55D0u;
            goto label_4a55d0;
        }
    }
    ctx->pc = 0x4A559Cu;
    // 0x4a559c: 0xc1233ec  jal         func_48CFB0
    ctx->pc = 0x4A559Cu;
    SET_GPR_U32(ctx, 31, 0x4A55A4u);
    ctx->pc = 0x4A55A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A559Cu;
    // 0x4a55a0: 0x240400e2  addiu       $a0, $zero, 0xE2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CFB0u, 0x4A559Cu, 0x4A55A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A55A4u;
label_4a55a4:
    // 0x4a55a4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4a55a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4a55a8: 0x24a50c28  addiu       $a1, $a1, 0xC28
    ctx->pc = 0x4a55a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3112));
    // 0x4a55ac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4a55acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4a55b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0C28u));
    // 0x4a55b4: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x4a55b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x4a55b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a55b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a55bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a55bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a55c0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a55c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a55c4: 0xc129632  jal         func_4A58C8
    ctx->pc = 0x4A55C4u;
    SET_GPR_U32(ctx, 31, 0x4A55CCu);
    ctx->pc = 0x4A55C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A55C4u;
    // 0x4a55c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A58C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A58C8u, 0x4A55C4u, 0x4A55CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A55CCu;
label_4a55cc:
    // 0x4a55cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a55ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a55d0:
    // 0x4a55d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a55d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a55d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a55d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a55d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a55d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a55dc: 0x8123392  j           func_48CE48
    ctx->pc = 0x4A55DCu;
    ctx->pc = 0x4A55E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A55DCu;
    // 0x4a55e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CE48u;
    sub_0048CE48_0x48ce48(rdram, ctx, runtime); return;
    ctx->pc = 0x4A55E4u;
    // 0x4a55e4: 0x0  nop
    ctx->pc = 0x4a55e4u;
    // NOP
    ctx->pc = 0x4a55e8u;
}
