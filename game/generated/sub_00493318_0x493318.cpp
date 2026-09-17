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

// Function: sub_00493318
// Address: 0x493318 - 0x493410
void sub_00493318_0x493318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00493318_0x493318");
#endif

    switch (ctx->pc) {
        case 0x493338u: goto label_493338;
        case 0x4933d0u: goto label_4933d0;
        default: break;
    }

    ctx->pc = 0x493318u;

    // 0x493318: 0x3c0c0073  lui         $t4, 0x73
    ctx->pc = 0x493318u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)115 << 16));
    // 0x49331c: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x49331cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x493320: 0x2582d680  addiu       $v0, $t4, -0x2980
    ctx->pc = 0x493320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294956672));
    // 0x493324: 0x25660880  addiu       $a2, $t3, 0x880
    ctx->pc = 0x493324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 2176));
    // 0x493328: 0x8c4921f4  lw          $t1, 0x21F4($v0)
    ctx->pc = 0x493328u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x72F874u));
    // 0x49332c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x49332cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x493330: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x493330u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x493334: 0x0  nop
    ctx->pc = 0x493334u;
    // NOP
label_493338:
    // 0x493338: 0x43c00  sll         $a3, $a0, 16
    ctx->pc = 0x493338u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x49333c: 0x71403  sra         $v0, $a3, 16
    ctx->pc = 0x49333cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 16));
    // 0x493340: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x493340u;
    {
        const bool branch_taken_0x493340 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x493344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493340u;
        // 0x493344: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493340) {
            ctx->pc = 0x493370u;
            goto label_493370;
        }
    }
    ctx->pc = 0x493348u;
    // 0x493348: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x493348u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49334c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x49334cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x493350: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x493350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x493354: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x493354u;
    {
        const bool branch_taken_0x493354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x493358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493354u;
        // 0x493358: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493354) {
            ctx->pc = 0x493370u;
            goto label_493370;
        }
    }
    ctx->pc = 0x49335Cu;
    // 0x49335c: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x49335cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x493360: 0xaa1025  or          $v0, $a1, $t2
    ctx->pc = 0x493360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x493364: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x493364u;
    {
        const bool branch_taken_0x493364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493364u;
        // 0x493368: 0x622024  and         $a0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493364) {
            ctx->pc = 0x493338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493338;
        }
    }
    ctx->pc = 0x49336Cu;
    // 0x49336c: 0x0  nop
    ctx->pc = 0x49336cu;
    // NOP
label_493370:
    // 0x493370: 0x2583d680  addiu       $v1, $t4, -0x2980
    ctx->pc = 0x493370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294956672));
    // 0x493374: 0x25620880  addiu       $v0, $t3, 0x880
    ctx->pc = 0x493374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 2176));
    // 0x493378: 0x246922b8  addiu       $t1, $v1, 0x22B8
    ctx->pc = 0x493378u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 8888));
    // 0x49337c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x49337cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x493380: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x493380u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x493384: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x493384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x493388: 0x72c03  sra         $a1, $a3, 16
    ctx->pc = 0x493388u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 16));
    // 0x49338c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x49338cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493390: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x493390u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x493394: 0x4a0001c  bltz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x493394u;
    {
        const bool branch_taken_0x493394 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x493398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493394u;
        // 0x493398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493394) {
            ctx->pc = 0x493408u;
            goto label_493408;
        }
    }
    ctx->pc = 0x49339Cu;
    // 0x49339c: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x49339Cu;
    {
        const bool branch_taken_0x49339c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4933A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49339Cu;
        // 0x4933a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49339c) {
            ctx->pc = 0x4933FCu;
            goto label_4933fc;
        }
    }
    ctx->pc = 0x4933A4u;
    // 0x4933a4: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x4933a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4933a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4933a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4933ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4933acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4933b0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x4933b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4933b4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4933b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4933b8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4933b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4933bc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4933bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4933c0: 0x42c00  sll         $a1, $a0, 16
    ctx->pc = 0x4933c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4933c4: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x4933C4u;
    {
        const bool branch_taken_0x4933c4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4933C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4933C4u;
        // 0x4933c8: 0xa5220000  sh          $v0, 0x0($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4933c4) {
            ctx->pc = 0x4933F8u;
            goto label_4933f8;
        }
    }
    ctx->pc = 0x4933CCu;
    // 0x4933cc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4933ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_4933d0:
    // 0x4933d0: 0x51403  sra         $v0, $a1, 16
    ctx->pc = 0x4933d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4933d4: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x4933d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x4933d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4933d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4933dc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4933dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4933e0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4933e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4933e4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4933e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4933e8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4933e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4933ec: 0x42c00  sll         $a1, $a0, 16
    ctx->pc = 0x4933ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4933f0: 0x4a1fff7  bgez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4933F0u;
    {
        const bool branch_taken_0x4933f0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x4933F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4933F0u;
        // 0x4933f4: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4933f0) {
            ctx->pc = 0x4933D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4933d0;
        }
    }
    ctx->pc = 0x4933F8u;
label_4933f8:
    // 0x4933f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4933f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4933fc:
    // 0x4933fc: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x4933fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x493400: 0xa5020008  sh          $v0, 0x8($t0)
    ctx->pc = 0x493400u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x493404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x493404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_493408:
    // 0x493408: 0x3e00008  jr          $ra
    ctx->pc = 0x493408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x493410u;
}
