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

// Function: sub_003414D0
// Address: 0x3414d0 - 0x341588
void sub_003414D0_0x3414d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003414D0_0x3414d0");
#endif

    switch (ctx->pc) {
        case 0x3414e4u: goto label_3414e4;
        case 0x341508u: goto label_341508;
        default: break;
    }

    ctx->pc = 0x3414d0u;

    // 0x3414d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3414d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3414d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3414d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3414d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3414d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3414dc: 0xc0d05a4  jal         func_341690
    ctx->pc = 0x3414DCu;
    SET_GPR_U32(ctx, 31, 0x3414E4u);
    ctx->pc = 0x3414E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3414DCu;
    // 0x3414e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341690u, 0x3414DCu, 0x3414E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3414E4u;
label_3414e4:
    // 0x3414e4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3414E4u;
    {
        const bool branch_taken_0x3414e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3414E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3414E4u;
        // 0x3414e8: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3414e4) {
            ctx->pc = 0x341578u;
            goto label_341578;
        }
    }
    ctx->pc = 0x3414ECu;
    // 0x3414ec: 0x9607000a  lhu         $a3, 0xA($s0)
    ctx->pc = 0x3414ecu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3414f0: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x3414f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x3414f4: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x3414f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x3414f8: 0x10e00018  beqz        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x3414F8u;
    {
        const bool branch_taken_0x3414f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3414FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3414F8u;
        // 0x3414fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3414f8) {
            ctx->pc = 0x34155Cu;
            goto label_34155c;
        }
    }
    ctx->pc = 0x341500u;
    // 0x341500: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x341500u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x341504: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x341504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_341508:
    // 0x341508: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x341508u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x34150c: 0x24a60018  addiu       $a2, $a1, 0x18
    ctx->pc = 0x34150cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x341510: 0xa0aa0001  sb          $t2, 0x1($a1)
    ctx->pc = 0x341510u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 10));
    // 0x341514: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x341514u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341518: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x341518u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x34151c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34151Cu;
    {
        const bool branch_taken_0x34151c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x341520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34151Cu;
        // 0x341520: 0xa4a00004  sh          $zero, 0x4($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34151c) {
            ctx->pc = 0x341530u;
            goto label_341530;
        }
    }
    ctx->pc = 0x341524u;
    // 0x341524: 0x90c2001e  lbu         $v0, 0x1E($a2)
    ctx->pc = 0x341524u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 30)));
    // 0x341528: 0x54490005  bnel        $v0, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x341528u;
    {
        const bool branch_taken_0x341528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x341528) {
            ctx->pc = 0x34152Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341528u;
            // 0x34152c: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341540u;
            goto label_341540;
        }
    }
    ctx->pc = 0x341530u;
label_341530:
    // 0x341530: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x341530u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x341534: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x341534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x341538: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x341538u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x34153c: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x34153cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_341540:
    // 0x341540: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x341540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x341544: 0x107202b  sltu        $a0, $t0, $a3
    ctx->pc = 0x341544u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x341548: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x341548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34154c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34154cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x341550: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x341550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x341554: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x341554u;
    {
        const bool branch_taken_0x341554 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x341558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341554u;
        // 0x341558: 0xc32821  addu        $a1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341554) {
            ctx->pc = 0x341508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341508;
        }
    }
    ctx->pc = 0x34155Cu;
label_34155c:
    // 0x34155c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34155cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341560: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x341560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341564: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x341564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x341568: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x341568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34156c: 0x24a516b8  addiu       $a1, $a1, 0x16B8
    ctx->pc = 0x34156cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5816));
    // 0x341570: 0x80d04d6  j           func_341358
    ctx->pc = 0x341570u;
    ctx->pc = 0x341574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341570u;
    // 0x341574: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341358u, 0x341570u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x341578u;
label_341578:
    // 0x341578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x341578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34157c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34157cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x341580: 0x3e00008  jr          $ra
    ctx->pc = 0x341580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341580u;
        // 0x341584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341588u;
}
