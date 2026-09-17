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

// Function: sub_0024D638
// Address: 0x24d638 - 0x24d760
void sub_0024D638_0x24d638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D638_0x24d638");
#endif

    switch (ctx->pc) {
        case 0x24d660u: goto label_24d660;
        case 0x24d690u: goto label_24d690;
        case 0x24d6c8u: goto label_24d6c8;
        case 0x24d718u: goto label_24d718;
        default: break;
    }

    ctx->pc = 0x24d638u;

    // 0x24d638: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x24d638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d63c: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x24d63cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x24d640: 0xc2282a  slt         $a1, $a2, $v0
    ctx->pc = 0x24d640u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24d644: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x24d644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x24d648: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x24d648u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x24d64c: 0x3e00008  jr          $ra
    ctx->pc = 0x24D64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D64Cu;
        // 0x24d650: 0xc3100b  movn        $v0, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D654u;
    // 0x24d654: 0x0  nop
    ctx->pc = 0x24d654u;
    // NOP
    // 0x24d658: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24D658u;
    {
        const bool branch_taken_0x24d658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D658u;
        // 0x24d65c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d658) {
            ctx->pc = 0x24D67Cu;
            goto label_24d67c;
        }
    }
    ctx->pc = 0x24D660u;
label_24d660:
    // 0x24d660: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x24d660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x24d664: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x24d664u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x24d668: 0x0  nop
    ctx->pc = 0x24d668u;
    // NOP
    // 0x24d66c: 0x0  nop
    ctx->pc = 0x24d66cu;
    // NOP
    // 0x24d670: 0x0  nop
    ctx->pc = 0x24d670u;
    // NOP
    // 0x24d674: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24D674u;
    {
        const bool branch_taken_0x24d674 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D674u;
        // 0x24d678: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d674) {
            ctx->pc = 0x24D660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d660;
        }
    }
    ctx->pc = 0x24D67Cu;
label_24d67c:
    // 0x24d67c: 0x3e00008  jr          $ra
    ctx->pc = 0x24D67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D67Cu;
        // 0x24d680: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D684u;
    // 0x24d684: 0x0  nop
    ctx->pc = 0x24d684u;
    // NOP
    // 0x24d688: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24D688u;
    {
        const bool branch_taken_0x24d688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D688u;
        // 0x24d68c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d688) {
            ctx->pc = 0x24D6ACu;
            goto label_24d6ac;
        }
    }
    ctx->pc = 0x24D690u;
label_24d690:
    // 0x24d690: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x24d690u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x24d694: 0x0  nop
    ctx->pc = 0x24d694u;
    // NOP
    // 0x24d698: 0x0  nop
    ctx->pc = 0x24d698u;
    // NOP
    // 0x24d69c: 0x0  nop
    ctx->pc = 0x24d69cu;
    // NOP
    // 0x24d6a0: 0x0  nop
    ctx->pc = 0x24d6a0u;
    // NOP
    // 0x24d6a4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24D6A4u;
    {
        const bool branch_taken_0x24d6a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6A4u;
        // 0x24d6a8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6a4) {
            ctx->pc = 0x24D690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d690;
        }
    }
    ctx->pc = 0x24D6ACu;
label_24d6ac:
    // 0x24d6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x24D6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D6B4u;
    // 0x24d6b4: 0x0  nop
    ctx->pc = 0x24d6b4u;
    // NOP
    // 0x24d6b8: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x24d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x24d6bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24d6bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d6c0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24D6C0u;
    {
        const bool branch_taken_0x24d6c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6C0u;
        // 0x24d6c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6c0) {
            ctx->pc = 0x24D6E4u;
            goto label_24d6e4;
        }
    }
    ctx->pc = 0x24D6C8u;
label_24d6c8:
    // 0x24d6c8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x24d6c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24d6cc: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x24d6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x24d6d0: 0x0  nop
    ctx->pc = 0x24d6d0u;
    // NOP
    // 0x24d6d4: 0x0  nop
    ctx->pc = 0x24d6d4u;
    // NOP
    // 0x24d6d8: 0x0  nop
    ctx->pc = 0x24d6d8u;
    // NOP
    // 0x24d6dc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24D6DCu;
    {
        const bool branch_taken_0x24d6dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6DCu;
        // 0x24d6e0: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6dc) {
            ctx->pc = 0x24D6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d6c8;
        }
    }
    ctx->pc = 0x24D6E4u;
label_24d6e4:
    // 0x24d6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x24D6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D6ECu;
    // 0x24d6ec: 0x0  nop
    ctx->pc = 0x24d6ecu;
    // NOP
    // 0x24d6f0: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x24d6f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x24d6f4: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x24D6F4u;
    {
        const bool branch_taken_0x24d6f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6F4u;
        // 0x24d6f8: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6f4) {
            ctx->pc = 0x24D758u;
            goto label_24d758;
        }
    }
    ctx->pc = 0x24D6FCu;
    // 0x24d6fc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x24d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x24d700: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d704: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x24d704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x24d708: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24D708u;
    {
        const bool branch_taken_0x24d708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d708) {
            ctx->pc = 0x24D734u;
            goto label_24d734;
        }
    }
    ctx->pc = 0x24D710u;
    // 0x24d710: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x24d710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x24d714: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24d714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_24d718:
    // 0x24d718: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x24d718u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x24d71c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x24d71cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x24d720: 0x0  nop
    ctx->pc = 0x24d720u;
    // NOP
    // 0x24d724: 0x0  nop
    ctx->pc = 0x24d724u;
    // NOP
    // 0x24d728: 0x0  nop
    ctx->pc = 0x24d728u;
    // NOP
    // 0x24d72c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24D72Cu;
    {
        const bool branch_taken_0x24d72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D72Cu;
        // 0x24d730: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d72c) {
            ctx->pc = 0x24D718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d718;
        }
    }
    ctx->pc = 0x24D734u;
label_24d734:
    // 0x24d734: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24D734u;
    {
        const bool branch_taken_0x24d734 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D734u;
        // 0x24d738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d734) {
            ctx->pc = 0x24D758u;
            goto label_24d758;
        }
    }
    ctx->pc = 0x24D73Cu;
    // 0x24d73c: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x24d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x24d740: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x24d740u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24d744: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24d744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24d748: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24d748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24d74c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x24d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x24d750: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x24d750u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24d754: 0x1012  mflo        $v0
    ctx->pc = 0x24d754u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_24d758:
    // 0x24d758: 0x3e00008  jr          $ra
    ctx->pc = 0x24D758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D760u;
}
