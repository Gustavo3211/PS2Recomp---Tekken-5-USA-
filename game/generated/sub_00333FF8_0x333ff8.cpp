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

// Function: sub_00333FF8
// Address: 0x333ff8 - 0x3340f8
void sub_00333FF8_0x333ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333FF8_0x333ff8");
#endif

    ctx->pc = 0x333ff8u;

    // 0x333ff8: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x333ff8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333ffc: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x333ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x334000: 0x8d880014  lw          $t0, 0x14($t4)
    ctx->pc = 0x334000u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x334004: 0x24440880  addiu       $a0, $v0, 0x880
    ctx->pc = 0x334004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x334008: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x334008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x33400c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x33400cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x334010: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x334010u;
    {
        const bool branch_taken_0x334010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x334014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334010u;
        // 0x334014: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334010) {
            ctx->pc = 0x334030u;
            goto label_334030;
        }
    }
    ctx->pc = 0x334018u;
    // 0x334018: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x334018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x33401c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33401cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x334020: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x334020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x334024: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x334024u;
    {
        const bool branch_taken_0x334024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334024u;
        // 0x334028: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334024) {
            ctx->pc = 0x334044u;
            goto label_334044;
        }
    }
    ctx->pc = 0x33402Cu;
    // 0x33402c: 0x0  nop
    ctx->pc = 0x33402cu;
    // NOP
label_334030:
    // 0x334030: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x334030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x334034: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x334034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x334038: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x334038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x33403c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33403cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x334040: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x334040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_334044:
    // 0x334044: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x334044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334048: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x334048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33404c: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x33404cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x334050: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x334050u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x334054: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x334054u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x334058: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x334058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x33405c: 0x25890024  addiu       $t1, $t4, 0x24
    ctx->pc = 0x33405cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 36));
    // 0x334060: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x334060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x334064: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x334064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x334068: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x334068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x33406c: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x33406cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334070: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x334070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x334074: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x334074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x334078: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x334078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x33407c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x33407cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x334080: 0x1053824  and         $a3, $t0, $a1
    ctx->pc = 0x334080u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x334084: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x334084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x334088: 0x3503c  dsll32      $t2, $v1, 0
    ctx->pc = 0x334088u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 0));
    // 0x33408c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x33408cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x334090: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x334090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x334094: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x334094u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334098: 0x3c0d7000  lui         $t5, 0x7000
    ctx->pc = 0x334098u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)28672 << 16));
    // 0x33409c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x33409cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3340a0: 0x10e50003  beq         $a3, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3340A0u;
    {
        const bool branch_taken_0x3340a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x3340A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3340A0u;
        // 0x3340a4: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3340a0) {
            ctx->pc = 0x3340B0u;
            goto label_3340b0;
        }
    }
    ctx->pc = 0x3340A8u;
    // 0x3340a8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3340a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3340ac: 0x1422025  or          $a0, $t2, $v0
    ctx->pc = 0x3340acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
label_3340b0:
    // 0x3340b0: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x3340b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x3340b4: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x3340b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x3340b8: 0x8d240004  lw          $a0, 0x4($t1)
    ctx->pc = 0x3340b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3340bc: 0x8b1024  and         $v0, $a0, $t3
    ctx->pc = 0x3340bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 11));
    // 0x3340c0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3340c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3340c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3340c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3340c8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x3340c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3340cc: 0x8d2024  and         $a0, $a0, $t5
    ctx->pc = 0x3340ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 13));
    // 0x3340d0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3340d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3340d4: 0x108d0002  beq         $a0, $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x3340D4u;
    {
        const bool branch_taken_0x3340d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 13));
        ctx->pc = 0x3340D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3340D4u;
        // 0x3340d8: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3340d4) {
            ctx->pc = 0x3340E0u;
            goto label_3340e0;
        }
    }
    ctx->pc = 0x3340DCu;
    // 0x3340dc: 0xa21825  or          $v1, $a1, $v0
    ctx->pc = 0x3340dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3340e0:
    // 0x3340e0: 0x71c31b89  pcpyld      $v1, $t6, $v1
    ctx->pc = 0x3340e0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 3)));
    // 0x3340e4: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x3340e4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x3340e8: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x3340e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x3340ec: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x3340ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x3340f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3340F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3340F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3340F0u;
        // 0x3340f4: 0xad880014  sw          $t0, 0x14($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3340F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3340F8u;
}
