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

// Function: sub_002DC750
// Address: 0x2dc750 - 0x2dc820
void sub_002DC750_0x2dc750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC750_0x2dc750");
#endif

    switch (ctx->pc) {
        case 0x2dc770u: goto label_2dc770;
        case 0x2dc774u: goto label_2dc774;
        default: break;
    }

    ctx->pc = 0x2dc750u;

    // 0x2dc750: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2dc750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2dc754: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dc754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dc758: 0x2459f390  addiu       $t9, $v0, -0xC70
    ctx->pc = 0x2dc758u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964112));
    // 0x2dc75c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dc75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dc760: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x2dc760u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc764: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x2dc764u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dc768: 0x27300002  addiu       $s0, $t9, 0x2
    ctx->pc = 0x2dc768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x2dc76c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2dc76cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc770:
    // 0x2dc770: 0xe48c0  sll         $t1, $t6, 3
    ctx->pc = 0x2dc770u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
label_2dc774:
    // 0x2dc774: 0x1391021  addu        $v0, $t1, $t9
    ctx->pc = 0x2dc774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 25)));
    // 0x2dc778: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2dc778u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dc77c: 0x804a0004  lb          $t2, 0x4($v0)
    ctx->pc = 0x2dc77cu;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dc780: 0x804b0005  lb          $t3, 0x5($v0)
    ctx->pc = 0x2dc780u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x2dc784: 0x804c0006  lb          $t4, 0x6($v0)
    ctx->pc = 0x2dc784u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2dc788: 0x14650019  bne         $v1, $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DC788u;
    {
        const bool branch_taken_0x2dc788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2DC78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC788u;
        // 0x2dc78c: 0x804d0007  lb          $t5, 0x7($v0) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc788) {
            ctx->pc = 0x2DC7F0u;
            goto label_2dc7f0;
        }
    }
    ctx->pc = 0x2DC790u;
    // 0x2dc790: 0x1301021  addu        $v0, $t1, $s0
    ctx->pc = 0x2dc790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x2dc794: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2dc794u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dc798: 0x54660016  bnel        $v1, $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2DC798u;
    {
        const bool branch_taken_0x2dc798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x2dc798) {
            ctx->pc = 0x2DC79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC798u;
            // 0x2dc79c: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC7F4u;
            goto label_2dc7f4;
        }
    }
    ctx->pc = 0x2DC7A0u;
    // 0x2dc7a0: 0x15470008  bne         $t2, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DC7A0u;
    {
        const bool branch_taken_0x2dc7a0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 7));
        ctx->pc = 0x2DC7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC7A0u;
        // 0x2dc7a4: 0x140482d  daddu       $t1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc7a0) {
            ctx->pc = 0x2DC7C4u;
            goto label_2dc7c4;
        }
    }
    ctx->pc = 0x2DC7A8u;
    // 0x2dc7a8: 0x55680007  bnel        $t3, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DC7A8u;
    {
        const bool branch_taken_0x2dc7a8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 8));
        if (branch_taken_0x2dc7a8) {
            ctx->pc = 0x2DC7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC7A8u;
            // 0x2dc7ac: 0x180502d  daddu       $t2, $t4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC7C8u;
            goto label_2dc7c8;
        }
    }
    ctx->pc = 0x2DC7B0u;
    // 0x2dc7b0: 0x8c1821  addu        $v1, $a0, $t4
    ctx->pc = 0x2dc7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x2dc7b4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2dc7b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dc7b8: 0x504d0002  beql        $v0, $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DC7B8u;
    {
        const bool branch_taken_0x2dc7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 13));
        if (branch_taken_0x2dc7b8) {
            ctx->pc = 0x2DC7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC7B8u;
            // 0x2dc7bc: 0xa06f0000  sb          $t7, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC7C4u;
            goto label_2dc7c4;
        }
    }
    ctx->pc = 0x2DC7C0u;
    // 0x2dc7c0: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x2dc7c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2dc7c4:
    // 0x2dc7c4: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x2dc7c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_2dc7c8:
    // 0x2dc7c8: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x2dc7c8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc7cc: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x2dc7ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc7d0: 0x15470007  bne         $t2, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DC7D0u;
    {
        const bool branch_taken_0x2dc7d0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 7));
        ctx->pc = 0x2DC7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC7D0u;
        // 0x2dc7d4: 0x1a0582d  daddu       $t3, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc7d0) {
            ctx->pc = 0x2DC7F0u;
            goto label_2dc7f0;
        }
    }
    ctx->pc = 0x2DC7D8u;
    // 0x2dc7d8: 0x55680006  bnel        $t3, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DC7D8u;
    {
        const bool branch_taken_0x2dc7d8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 8));
        if (branch_taken_0x2dc7d8) {
            ctx->pc = 0x2DC7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC7D8u;
            // 0x2dc7dc: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC7F4u;
            goto label_2dc7f4;
        }
    }
    ctx->pc = 0x2DC7E0u;
    // 0x2dc7e0: 0x8c1821  addu        $v1, $a0, $t4
    ctx->pc = 0x2dc7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x2dc7e4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2dc7e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dc7e8: 0x50490001  beql        $v0, $t1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2DC7E8u;
    {
        const bool branch_taken_0x2dc7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2dc7e8) {
            ctx->pc = 0x2DC7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC7E8u;
            // 0x2dc7ec: 0xa06f0000  sb          $t7, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC7F0u;
            goto label_2dc7f0;
        }
    }
    ctx->pc = 0x2DC7F0u;
label_2dc7f0:
    // 0x2dc7f0: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2dc7f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_2dc7f4:
    // 0x2dc7f4: 0x2dc2001d  sltiu       $v0, $t6, 0x1D
    ctx->pc = 0x2dc7f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x2dc7f8: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2DC7F8u;
    {
        const bool branch_taken_0x2dc7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC7F8u;
        // 0x2dc7fc: 0xe48c0  sll         $t1, $t6, 3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc7f8) {
            ctx->pc = 0x2DC774u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc774;
        }
    }
    ctx->pc = 0x2DC800u;
    // 0x2dc800: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x2dc800u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x2dc804: 0x2b020004  slti        $v0, $t8, 0x4
    ctx->pc = 0x2dc804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2dc808: 0x5440ffd9  bnel        $v0, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2DC808u;
    {
        const bool branch_taken_0x2dc808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc808) {
            ctx->pc = 0x2DC80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC808u;
            // 0x2dc80c: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc770;
        }
    }
    ctx->pc = 0x2DC810u;
    // 0x2dc810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dc810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc814: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC814u;
        // 0x2dc818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC81Cu;
    // 0x2dc81c: 0x0  nop
    ctx->pc = 0x2dc81cu;
    // NOP
    ctx->pc = 0x2dc820u;
}
