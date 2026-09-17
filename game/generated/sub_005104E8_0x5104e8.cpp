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

// Function: sub_005104E8
// Address: 0x5104e8 - 0x5105e8
void sub_005104E8_0x5104e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005104E8_0x5104e8");
#endif

    switch (ctx->pc) {
        case 0x510568u: goto label_510568;
        case 0x5105b0u: goto label_5105b0;
        default: break;
    }

    ctx->pc = 0x5104e8u;

    // 0x5104e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5104e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5104ec: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x5104ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x5104f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x5104f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x5104f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x5104f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x5104f8: 0x3c12008f  lui         $s2, 0x8F
    ctx->pc = 0x5104f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)143 << 16));
    // 0x5104fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x5104fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x510500: 0x3c13008f  lui         $s3, 0x8F
    ctx->pc = 0x510500u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)143 << 16));
    // 0x510504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x510504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x510508: 0x2665c6bc  addiu       $a1, $s3, -0x3944
    ctx->pc = 0x510508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952636));
    // 0x51050c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x51050cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x510510: 0x2484c6c8  addiu       $a0, $a0, -0x3938
    ctx->pc = 0x510510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952648));
    // 0x510514: 0x2648c6cc  addiu       $t0, $s2, -0x3934
    ctx->pc = 0x510514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952652));
    // 0x510518: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x510518u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC6BCu));
    // 0x51051c: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x51051cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x8EC6CAu));
    // 0x510520: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x510520u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x510524: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x510524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x510528: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x510528u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8EC6BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC6BCu, _value); } while (0);
    // 0x51052c: 0x24460002  addiu       $a2, $v0, 0x2
    ctx->pc = 0x51052cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x510530: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x510530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x510534: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x510534u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x8EC6C8u));
    // 0x510538: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x510538u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x51053c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x51053cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x8EC6BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC6BCu, _value); } while (0);
    // 0x510540: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x510540u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8EC6CCu));
    // 0x510544: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x510544u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x510548: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x510548u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x8EC6BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC6BCu, _value); } while (0);
    // 0x51054c: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x51054cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8EC6CCu));
    // 0x510550: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x510550u;
    {
        const bool branch_taken_0x510550 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x510554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510550u;
        // 0x510554: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510550) {
            ctx->pc = 0x5105CCu;
            goto label_5105cc;
        }
    }
    ctx->pc = 0x510558u;
    // 0x510558: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x510558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x51055c: 0x2450c6c0  addiu       $s0, $v0, -0x3940
    ctx->pc = 0x51055cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952640));
    // 0x510560: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x510560u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC6C0u));
    // 0x510564: 0x0  nop
    ctx->pc = 0x510564u;
    // NOP
label_510568:
    // 0x510568: 0x2667c6bc  addiu       $a3, $s3, -0x3944
    ctx->pc = 0x510568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952636));
    // 0x51056c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x51056cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x510570: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x510570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x510574: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x510574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x510578: 0x24460002  addiu       $a2, $v0, 0x2
    ctx->pc = 0x510578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x51057c: 0x24480004  addiu       $t0, $v0, 0x4
    ctx->pc = 0x51057cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x510580: 0x24490006  addiu       $t1, $v0, 0x6
    ctx->pc = 0x510580u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x510584: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x510584u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x510588: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x510588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x51058c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x51058cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x510590: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x510590u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x510594: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x510594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x510598: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x510598u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x51059c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x51059cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x5105a0: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x5105a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x5105a4: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x5105a4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x5105a8: 0xc1449ee  jal         func_5127B8
    ctx->pc = 0x5105A8u;
    SET_GPR_U32(ctx, 31, 0x5105B0u);
    ctx->pc = 0x5105ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5105A8u;
    // 0x5105ac: 0xae090000  sw          $t1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5127B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5127B8u, 0x5105A8u, 0x5105B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5105B0u;
label_5105b0:
    // 0x5105b0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x5105b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x5105b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x5105b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x5105b8: 0x8643c6cc  lh          $v1, -0x3934($s2)
    ctx->pc = 0x5105b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294952652)));
    // 0x5105bc: 0x28c03  sra         $s1, $v0, 16
    ctx->pc = 0x5105bcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 16));
    // 0x5105c0: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x5105c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x5105c4: 0x5060ffe8  beql        $v1, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x5105C4u;
    {
        const bool branch_taken_0x5105c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5105c4) {
            ctx->pc = 0x5105C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5105C4u;
            // 0x5105c8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x510568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_510568;
        }
    }
    ctx->pc = 0x5105CCu;
label_5105cc:
    // 0x5105cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5105ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5105d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5105d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5105d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5105d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5105d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x5105d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5105dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5105dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5105e0: 0x3e00008  jr          $ra
    ctx->pc = 0x5105E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5105E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5105E0u;
        // 0x5105e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5105E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5105E8u;
}
